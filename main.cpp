#include <bits/stdc++.h>

using namespace std;
 
//int main() {
    //四則演算
    // int x=5, y=10;   
    // cout << x + y << endl;
    // cout << x - y << endl;
    // cout << x * y << endl;
    // cout << x / y << endl;

    //stringと文字列
    // string s,t;
    // t = "入力された文字は：";
    // cout << "文字列を入力：";
    // cin >> s;
    // cout << t+s << endl;
    // return 0;


    // int a, b;
    // cin >> a;
    // cin >> b;

    // if (a <= 9 && b <= 9) {
    //     cout << a * b << endl;
    // } else {
    //     cout << "that's else" << endl;
    // }


    // CSample obj;    // CSampleをインスタンス化
    // int num;

    // cout << "整数を入力してください" << endl;
    // cin >> num;

    // obj.set(num);                   // CSampleのメンバ変数をセット
    // cout << obj.get() << endl;      // メンバ変数の値を出力

    // return 0;


    // Sample s;
    // s.a = 1;
    // //s.b = 2;
    // s.func1();
    // //s.func2();
    
//}

//配列練習
// int main() {
//     vector<int> vec;
//     vec = { 25, 100, 64 };
//     cout << vec.at(0) << endl;
//     cout << vec.size() << endl;
// }




//Infinite Coins - https://atcoder.jp/contests/abc088/tasks/abc088_a
// int N, A;
// int main() {
//     cin >> N >> A;
//     cout << (N / 500 <= A ? "Yes" : "No") << endl;
//     return 0;
// }


//Product - https://atcoder.jp/contests/abc086/tasks/abc086_a
// int a, b, c;
// int main(){
//     cin >> a >> b;
//     c = a * b;
//     cout << (c % 2 == 0 ? "偶数" : "奇数") << endl;
//     return 0;
// }


//Libra - https://atcoder.jp/contests/abc083/tasks/abc083_a
// int a, b, c, d, e, f;
// int main() {
//     cin >> a >> b >> c >> d;
//     e = a + b;
//     f = c + d;
//     cout << (e < f ? "Right" : "Left") << endl;
//     return 0;
// }

//電卓 - https://atcoder.jp/contests/apg4b/tasks/APG4b_cq
// int a, b;
// string s;
// int main() {
//     cin >> a >> s >> b;
//     if (s == "+") {
//         cout << a + b << endl;
//     } else if (s == "-") {
//         cout << a - b << endl;
//     } else if (s == "*") {
//         cout << a * b << endl;
//     } else if (s == "/") {
//         cout << a / b << endl;
//     }
// }


//Parking - https://atcoder.jp/contests/abc080/tasks/abc080_a
// int a, b, t, price;
// int main() {
//     cin >> t >> a >> b;
//     price = t * a;
//     cout << (price < b ? price : b) << endl;
//     return 0;
// }


//Good Integer - https://atcoder.jp/contests/abc079/tasks/abc079_a
// int a, b, c, d;
// int main() {
//     cin >> a >> b >> c >> d;
//     if ((a == b && b == c) || (b == c && c == d)) {
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
//     }
// }



//bool値パズル - https://atcoder.jp/contests/apg4b/tasks/APG4b_cp
// int main() {
//   bool a = true;
//   bool b = false;
//   bool c = true;
 
//   if (a) {
//     cout << "At";
//   }
//   else {
//     cout << "Yo";
//   }
 
//   if (!a && b) {
//     cout << "Bo";
//   }
//   else if (!b || c) {
//     cout << "Co";
//   }
 
//   if (a && b && c) {
//     cout << "foo!";
//   }
//   else if (true && false) {
//     cout << "yeah!";
//   }
//   else if (!a || c) {
//     cout << "der";
//   }
//   cout << endl;
// }


//White Cells - https://atcoder.jp/contests/abc121/tasks/abc121_a
// int main() {
//     int H, W;
//     cin >> H >> W;
//     int h, w;
//     cin >> h >> w;

//     cout << (H-h) * (W-w) << endl;
// }


// たこ焼きセット - https://atcoder.jp/contests/apg4b/tasks/APG4b_co
// int main() {
//   int p;
//   string text;
//   int price;
//   cout << "パターン:" << endl;
//   cin >> p;
 
//   // パターン1
//   if (p == 1) {
//     cout << "①金額:" << endl;
//     cin >> price;
//   }
 
//   // パターン2
//   if (p == 2) {
//     cout << "説明文:" << endl;
//     cin >> text;
//     cout << "②金額:" << endl;
//     cin >> price;
//     cout << text << "っすね!" << endl;
//   }
 
//   int N;
//   cout << "個数:" << endl;
//   cin >> N;
 
//   cout << price * N << endl;
// }


//複合代入演算子を使おう - https://atcoder.jp/contests/apg4b/tasks/APG4b_cn
// int x, a, b;
// int main() {
//     cin >> x >> a >> b;

//     x += 1;
//     cout << x << endl;

//     x = (a + b) * x;
//     cout << x << endl;

//     x = x * x;
//     cout << x << endl;

//     x -= 1;
//     cout << x << endl;
// }


//棒グラフの出力 - https://atcoder.jp/contests/apg4b/tasks/APG4b_cm
// int A, B, a, b;
// string line_a="]", line_b="]";
// int main(){
//     cin >> A >> B;
//     a = 1;
//     b = 1;

//     cout << "Aさん:" << endl;
//     while (a <= A) {
//         cout << line_a << endl;
//         a++;
//     }

//     cout << "Bさん:" << endl;
//     while (b <= B) {
//         cout << line_b << endl;
//         b++;
//     }
// }


//電卓をつくろう2 - https://atcoder.jp/contests/apg4b/tasks/APG4b_cl
// int N, A, B;
// string s;
// int main() {
//     cout << "計算回数と初期値の入力:";
//     cin >> N >> A;

//     for (int i=0; i<N; i++) {
//         cout << "演算子入力:";
//         cin >> s;
//         cout << "計算する値:";
//         cin >> B;

//         if (s == "+") {
//             A = A + B;
//         } else if (s == "-") {
//             A = A - B;
//         } else if (s == "*") {
//             A = A * B;
//         } else if (s == "/") {
//             A = A / B;
//         }
//         cout << i+1 << "回目: " << A << endl;
//     }
//     cout << "Done" << endl;
// }


//Hina Arare - https://atcoder.jp/contests/abc089/tasks/abc089_b
// int N, k=3;
// string color;
// int main() {
//     cin >> N;
//     for (int i=0; i<N; i++) {
//         cin >> color;
//         if (color == "Y") {
//             k = 4;
//             break;
//         }
//     }
//     if (k == 3) {
//         cout << "Three" << endl;
//     } else {
//         cout << "Four" << endl;
//     }
// }

//Theater - https://atcoder.jp/contests/abc073/tasks/abc073_b
// int S=100000, N, l, r, seats=0;
// int main() {
//     cout << "団体組" << endl;
//     cin >> N;

//     for (int i=0; i<N; i++) {
//         cout << "席:左から" << endl;
//         cin >> l;
//         cout << "席:右から" << endl; 
//         cin >> r;

//         seats = (r - l) + 1 + seats;
//     }
//     cout << seats << endl;
// }


//Harshad Number - https://atcoder.jp/contests/abc080/tasks/abc080_b
// int N, a, b, r;
// int main() {
//     cin >> N;
//     a = N / 10;
//     b = N % 10;
//     r = a + b;
    
//     if (N % r == 0) {
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
//     }
// }


//Addition and Multiplication - https://atcoder.jp/contests/abc076/tasks/abc076_b
// int N, K, a=1;
// int main() {
//     cout << "回数:" << endl;
//     cin >> N;
//     cout << "足す数字:" << endl;
//     cin >> K;

//     for (int i=0; i<N; i++) {
//         if (a * 2 < a + K) {
//             a = a * 2;
//         } else {
//             a = a + K;
//         }
//     }
//     cout << a << endl;
// }


//Palindromic Numbers - https://atcoder.jp/contests/abc090/tasks/abc090_b
// int A, B, c;
// int main() {
//     cin >> A >> B;
//     if (A < B) {
//         for (int i=A; i<=B; i++) {
//             cout << i << endl;
//             int s = i % 10;             //1つ目
//             int t = i / 10000 % 10;     //2つ目
//             int u = i / 10 % 10;        //3つ目
//             int v = i / 1000 % 10;      //4つ目
//             if (s == t && u == v) {
//                 c++;
//             }
//         }
//         cout << "回文数は：" << c << endl;
//     } else {
//         cout << "不適切" << endl;
//     }
// }


//足したり引いたり - https://atcoder.jp/contests/apg4b/tasks/APG4b_ck
// int num=1;
// string S, t;
// int main() {
//     cout << "計算式を入力：";
//     cin >> S;
//     int s = S.size();
//     for (int i=0; i<s; i++){
//         t = S.at(i);
//         if (t == "+") {
//             num += 1;
//         } else if (t == "-") {
//             num -= 1;
//         }
//     }
//     cout << "計算結果は、" << num << endl;
//     return 0;
// }


//居合を終え、青い絵を覆う - https://atcoder.jp/contests/abc049/tasks/abc049_a
// string c;
// int main() {
//     cout << "英小文字の入力：";
//     cin >> c;

//     if (c == "a" || c ==  "e" || c == "i" || c ==  "o" ||  c == "u") {
//         cout << "vowel" << endl;
//     } else {
//         cout << "consonant" << endl;
//     }
//     return 0;
// }

//AtCoder *** Contest  - https://atcoder.jp/contests/abc048/tasks/abc048_a
// string a="AtCoder", s, c="Contest", textA, textS, textC;
// int main() {
//     textA = a.at(0);
//     textC = c.at(0);
//     cin >> s;
//     textS = s.at(0);
//     cout << "コンテストの略称は、" << textA + textS + textC << endl;
//     return 0;
// }

//Addition and Subtraction Easy - https://atcoder.jp/contests/abc050/tasks/abc050_a
// int A, B;
// string op;
// int main() {
//     cout << "Aを入力：";
//     cin >> A;
//     cout << "演算子を入力：";
//     cin >> op;
//     cout << "Bを入力：";
//     cin >> B;

//     if (op == "+") {
//         cout << A + B << endl;
//     } else if (op == "-") {
//         cout << A - B << endl;
//     }
//     return 0;
// }

//添字 - https://atcoder.jp/contests/abc041/tasks/abc041_a
// string s;
// int i;
// int main() {
//     cout << "文字列を入力：";
//     cin >> s;
//     cout << "出力数字を入力：";
//     cin >> i;

//     cout << s.at(i-1) << endl;
//     return 0;
// }


//お茶 - https://atcoder.jp/contests/abc038/tasks/abc038_a
// string S, s;
// int c;
// int main() {
//     cin >> S;
//     c = S.size() - 1;
//     s = S.at(c);

//     if (s == "T") {
//         cout << "YES" << endl;
//     } else {
//         cout << "NO" << endl;
//     }
// }

//複数形 - https://atcoder.jp/contests/abc029/tasks/abc029_a
// string W, s="s";
// int count;
// int main() {
//     cout << "文字列を入力：";
//     cin >> W;
//     cout << W + s << endl;
//     return 0; 
// }

//高橋くんの研修 - https://atcoder.jp/contests/abc015/tasks/abc015_1
// string A, B;
// int a, b;
// int main() {
//     cout << "Aの変数入力：";
//     cin >> A;
//     cout << "Bの変数入力：";
//     cin >> B;
//     a = A.size();
//     b = B.size();

//     if (b < a) {
//         cout << A << endl;
//     } else {
//         cout << B << endl;
//     }

//     return 0;
// }

//ハンドルネーム
// string S;
// int main() {
//     cout << "Sの入力：";
//     cin >> S;
//     cout << S + "pp" << endl;

//     return 0;
// }

//Minesweeper - https://atcoder.jp/contests/abc075/tasks/abc075_b
// int H, W;
// string board[50];       //最大マス数

// int main() {
//     cout << "Hの入力：";
//     cin >> H;           //高さ
//     cout << "Wの入力：";
//     cin >> W;           //幅

//     for (int i=0; i<H; i++){
//         cin >> board[i];
//     }
//     int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};    //調べる方向
//     int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};    //調べる方向

//     for (int i=0; i<H; i++) {                   //高さ-for文
//         for (int j=0; j<W; j++) {               //横幅-for文
//             if (board[i][j] != '#') {
//                 int num = 0;

//                 for (int d=0; d<8; d++) {       //方向-for文
//                     int ni = i +dy[d];
//                     int nj = i +dx[d];

//                     if (ni < 0 || H <= ni) continue;
//                     if (nj < 0 || W <= nj) continue;
//                     if (board[ni][nj] == '#') num++;
//                 }
//                 board[i][j] = char(num + '0');
//             }
//         }
//     }
//     for (int i = 0; i < H; ++i) {
//         cout << board[i] << endl;
//     }

//     return 0;
// }


//平均との差 - https://atcoder.jp/contests/apg4b/tasks/APG4b_n
// int N;
// int main() {
//     cout << "人数を入力：";
//     cin >> N;
//     vector<int> vec(N);

//     for (int i=0; i<N; i++) {
//         cout << i << "人目の点数を入力：" << endl;
//         cin >> vec.at(i);
//     }
//     int num = 0;
//     for (int i=0; i<N; i++) {
//         num += vec.at(i);
//     }
//     int avg = num / N;
//     cout << "平均点は、" << avg << endl;
//     for (int i=0; i<N; i++) {
//         if ( N<vec.at(i) ) {
//             cout << "離れている点数は、" << vec.at(i) - avg << endl;
//         } else {
//             cout << "離れている点数は、" << avg - vec.at(i) << endl;
//         }
//     }
// }

//Counting Roads - https://atcoder.jp/contests/abc061/tasks/abc061_b
// int main() {
//     int N, M;
//     cin >> N >> M;

//     int NMAX = 50;              //最大値
//     int A[NMAX], B[NMAX];       //A,Bの道路数
//     for (int i=0; i<M; i++) {
//         cout << i+1 << "つ目の道路の数：" << endl;
//         cin >> A[i] >> B[i];
//     }
    
//     int road[NMAX];             //道の数初期化
//     for (int i=0; i<N; i++) {
//         road[i] = 0;
//     }

//     for (int i=0; i<M; i++) {   //道の数-計算
//         road[A[i] - 1] += 1;
//         road[B[i] - 1] += 1;
//     }

//     for (int i=0; i<N; ++i) {
//         cout << "伸びている道路の本数：" << road[i] << endl;
//     }
//     return 0;
// }










//https://cpp-lang.sevendays-study.com/problem1.html
//prob1-1
// int main() {
//     cout << "C++" << endl;
// }
//prob1-2
// int main() {
//     std::cout << "prigramming in C++ Language" << std::endl;
//     return 0;
// }
//prob1-3
// int main() {
//     cout << "ONE TWO THREE\nFOUR FIVE SIX" << endl;
//     return 0;
// }
//prob1-4
// int main() {
//     int a, b;
//     cout << "数値を入力してください：";
//     cin >> a;
//     b = a * 2;
//     cout << a;
//     cout << "を2倍した数は、";
//     cout << b;
//     cout << "です。" << endl;
//     return 0;
// }
//prob1-5
// int main() {
//     int a, b;
//     string c, d;
//     cout << "1つ目の数:";
//     cin >> a;
//     cout << "1つ目の数:";
//     cin >> b;

//     c = to_string(a);
//     d = to_string(b);
//     cout << c + "+" + d + "=";
//     cout << a + b << endl;
//     cout << c + "-" + d + "=";
//     cout << a - b << endl;
// }
//prob1-6
// int main() {
//     string s, t;
//     cout << "姓を入力：";
//     cin >> s;
//     cout << "名を入力：";
//     cin >> t;
//     cout << "名前は「"+ s + t + "」です。" << endl;
//     return 0;
// }
//prob1-7
// int main() {
//     cout << "Hello world!" << endl;
// }

//prob2-1
// int main() {
//     Keisan k;
//     k.a = 4;
//     k.b = 3;
//     cout << k.a << " + " << k.b << " = " << k.add() << endl;
//     return 0;
// }
