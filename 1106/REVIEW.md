# 1106 눈썹 지키미 코드 리뷰

이번주는 총 4문제를 풀기로 했다.
A. IOIOI
B. 전화번호 목록
C. 말이 되고픈 원숭이
D. 트리의 순회

---

"A. IOIOI"

주어진 문자열에 IOI, IOIOI, IOIOIOI 와 같이 IOI가 반복되는 문자열(Pn, O가 n개)이 몇 군데 포함되어 있는지를 세는 문제다.

파이썬을 사용하면 substr를 이용해 풀수 있겠다는 생각을 했지만, 시간초과가 날 수도 있고 복잡도들을 고려해 코드를 작성해야하기에 C++로 방법을 고안해보았다.

input으로 Pn의 n과, 문자열의 길이, 문자열을 받는다.

이중 반복문을 사용하여 주어진 문자열에서 두번째 세번째가 각각 O와I이면 첫번째와 두번째가 각각 I와O일 때 반복문을 돌린다. 
두번째 반복문은 while을 사용하며 while의 조건이 만족했을 때는 IOI형태가 만족한 것이므로 i에 2를 더해준다. 그래서 문자열의 네번째 부터 탐색하는 것이다.
이 과정에서 O의 개수 세주어야 하는데, 첫번째 반복문안의 조건문(두번째 세번째가 각각 O와I이면)이 만족할 경우 O의 개수를 0으로 초기화 시켜준다. 그리고 두번째 while을 순환할때 O의 개수를 1개씩 증가시키고 O의 개수가 n개 일때 최종 카운트를 한다.

---

"B. 전화번호 목록"

이 문제는 풀다가 틀렸다. 사실 시간이 있었으면 고칠 수 있었을 텐데..

전화번호들을 입력받아 각 전화번호들이 독립적으로 전화가 가능하도록 만들어야하는 문제이다.
즉, 한 전화번호가 다른 전화번호의 부분집합이어선 안된다.

생각했던 방법은 전화번호들을 string 벡터로 담아 이중 반복문으로 앞에서부터 탐색해 같지 않으면 바로 break해서 다른 전화번호들을 탐색하고 끝까지 해서 같은 값이 나오면 반복문을 진행하지 않고 break해서 나온다.

여기서 잘못생각했던 건 무조건 첫번째로 입력되는 전화번호만이 짧은 전화번호라고 생각해 고정하여 for문을 돌려서 그렇다. 사실 전에 바로 짧은 전화번호 순으로 정렬한 후 진행했으면 되는걸.. 예제만 보고 하느라 미처 생각하지 못한 부분이었다 하하

---

다른 2문제는 풀어 보고 싶었는데, 너무 바쁜 주였어서 문제도 못 읽어봤다.
근데 다른 분들이 풀이한 것을 보니 생각보다 어려운 문제는 아니라는 생각이 들었다.
