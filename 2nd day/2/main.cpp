#include <bits/stdc++.h>
using namespace std;
//this is the 3rd task
void tsp_solve_4(int s){
  int n = 4;
  int dis[n][n];
    for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
        cin >> dis[i][j];
    }
  }

  int minDis = INT_MAX, fir = s;
  int minPath[4];

  for (int sec = 1; sec < n; sec++){
    for (int thi = 1; thi < n; thi++){
      for (int fou = 1; fou < n; fou++){
            int s2 = sec,s3 = thi,s4 = fou;
        if(fir == s2)s2 = 0;
        if(fir == s3)s3 = 0;
        if(fir == s4)s4 = 0;

        int order[4] = {fir, s2, s3, s4};
        bool diff = true;

        //check their identity
        for (int i = 0; i < n; i++){
          for (int k = i+1; k < n; k++){
            if(order[i] == order[k])
              diff = false;
          }
        }
        if(!diff)continue;
        int curDis = 0;

        for(int i = 1; i < n; i++)
          curDis+=dis[order[i-1]][order[i]];
        curDis+=dis[order[n-1]][fir];

        if(curDis < minDis){
          minDis = curDis;
          for(int i = 0; i < n; i++)
            minPath[i] = order[i];
        }
      }
    }
  }
  cout << minDis << endl << "Path: ";
  for(int i = 0; i < n; i++)
    cout << minPath[i] << " ";
  cout << s;
}

void tsp_solve_5(int s){
  int n = 5;
  int dis[n][n];
    for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
        cin >> dis[i][j];
    }
  }

  int minDis = INT_MAX, fir = s;
  int minPath[n];

  for (int sec = 1; sec < n; sec++){
    for (int thi = 1; thi < n; thi++){
      for (int fou = 1; fou < n; fou++){
        for (int fif = 1; fif < n; fif++){
            int s2 = sec,s3 = thi,s4 = fou,s5 = fif;
            if(fir == s2)s2 = 0;
            if(fir == s3)s3 = 0;
            if(fir == s4)s4 = 0;
            if(fir == s5)s5 = 0;
            int order[n] = {fir, s2, s3, s4, s5};
          bool diff = true;

          //check their identity
          for (int i = 0; i < n; i++){
            for (int k = i+1; k < n; k++){
              if(order[i] == order[k])
                diff = false;
            }
          }
          if(!diff)continue;
          int curDis = 0;

          for(int i = 1; i < n; i++)
            curDis+=dis[order[i-1]][order[i]];
          curDis+=dis[order[n-1]][fir];

          if(curDis < minDis){
            minDis = curDis;
            for(int i = 0; i < n; i++)
              minPath[i] = order[i];
          }
        }
      }
    }
  }
  cout << minDis << endl << "Path: ";
  for(int i = 0; i < n; i++)
    cout << minPath[i] << " ";
  cout << s;
}


void tsp_solve_6(int s){
  int n = 6;
  int dis[n][n];
    for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
        cin >> dis[i][j];
    }
  }

  int minDis = INT_MAX, fir = s;
  int minPath[n];

  for (int sec = 1; sec < n; sec++){
    for (int thi = 1; thi < n; thi++){
      for (int fou = 1; fou < n; fou++){
        for (int fif = 1; fif < n; fif++){
          for (int six = 1; six < n; six++){
            int s2 = sec,s3 = thi,s4 = fou,s5 = fif, s6 = six;
            if(fir == s2)s2 = 0;
            if(fir == s3)s3 = 0;
            if(fir == s4)s4 = 0;
            if(fir == s5)s5 = 0;
            if(fir == s6)s6 = 0;
            int order[n] = {fir, s2, s3, s4, s5, s6};
            bool diff = true;

            //check their identity
            for (int i = 0; i < n; i++){
              for (int k = i+1; k < n; k++){
                if(order[i] == order[k])
                  diff = false;
              }
            }
            if(!diff)continue;
            int curDis = 0;

            for(int i = 1; i < n; i++)
              curDis+=dis[order[i-1]][order[i]];
            curDis+=dis[order[n-1]][fir];

            if(curDis < minDis){
              minDis = curDis;
              for(int i = 0; i < n; i++)
              minPath[i] = order[i];
            }
          }
        }
      }
    }
  }

cout << minDis << endl << "Path: ";
  for(int i = 0; i < n; i++)
    cout << minPath[i] << " ";
  cout << s;
}

int main() {
  int n, s;
  cin >> n >> s;
  if(n!=4 && n!=5 && n!=6){
      cout <<"Inappropriate n";
      return 0;
  }

  if(n == 5)
    tsp_solve_5(s);
  if(n == 4)
    tsp_solve_4(s);
  if(n == 6)
    tsp_solve_6(s);
}
