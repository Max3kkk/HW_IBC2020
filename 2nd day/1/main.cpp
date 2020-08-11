#include <bits/stdc++.h>
using namespace std;
// this is the 2nd task, which includes 1st one
void tsp_solve_4(){
  int n = 4;
  int dis[n][n];
    for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
        cin >> dis[i][j];
    }
  }

  int minDis = INT_MAX, fir = 0;
  int minPath[4];

  for (int sec = 1; sec < n; sec++){
    for (int thi = 1; thi < n; thi++){
      for (int fou = 1; fou < n; fou++){

        int order[4] = {fir, sec, thi, fou};
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
        curDis+=dis[order[n-1]][0];

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
  cout << "0";
}

void tsp_solve_5(){
  int n = 5;
  int dis[n][n];
    for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
        cin >> dis[i][j];
    }
  }

  int minDis = INT_MAX, fir = 0;
  int minPath[n];

  for (int sec = 1; sec < n; sec++){
    for (int thi = 1; thi < n; thi++){
      for (int fou = 1; fou < n; fou++){
        for (int fif = 1; fif < n; fif++){
          int order[5] = {fir, sec, thi, fou, fif};
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
          curDis+=dis[order[n-1]][0];

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
  cout << "0";
}


void tsp_solve_6(){
  int n = 6;
  int dis[n][n];
    for (int i = 0; i < n; i++){
      for (int j = 0; j < n; j++){
        cin >> dis[i][j];
    }
  }

  int minDis = INT_MAX, fir = 0;
  int minPath[n];

  for (int sec = 1; sec < n; sec++){
    for (int thi = 1; thi < n; thi++){
      for (int fou = 1; fou < n; fou++){
        for (int fif = 1; fif < n; fif++){
          for (int six = 1; six < n; six++){
            int order[n] = {fir, sec, thi, fou, fif, six};
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
            curDis+=dis[order[n-1]][0];

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
  cout << "0";
}

int main() {
  int n;
  cin >> n;
  if(n!=4 && n!=5 && n!=6){
      cout <<"Inappropriate n";
      return 0;
  }

  if(n == 5)
    tsp_solve_5();
  if(n == 4)
    tsp_solve_4();
  if(n == 6)
    tsp_solve_6();
}
