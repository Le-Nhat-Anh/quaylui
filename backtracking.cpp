# backtracking
int x[100];
int n,k;
--------------------------------------------------
sinh nhị phân:
void tri(int i){
	for(int j=0;j<=1;j++){
		x[i]=j;
		if(i==n){
			kq();
		}
		else{
			tri(i+1);
		}
	}
}
-------------------------------------------------------
sinh to hop:
void tri(int i){
	for(int j=x[i-1]+1;j<=n-k+i;j++){
		x[i]=j;
		if(i==k){
			kq();
		}
		else{
			tri(i+1);
		}
	}
}
-----------------------------------------------------------
sinh hoán vị:
int used[100];
void tri(int i){
	for(int j=1;j<=n;j++){
		if(used[j]==0){
			x[i]=j;
			used[j]=1;
			if(i==n){
				kq();
			}
			else{
				tri(i+1);
			}
			used[j]=0;
		}
	}
}

















