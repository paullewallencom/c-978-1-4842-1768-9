void dar_list( Dar *stk ){

	if(stk == NULL){
		printf("Nothing to list\n");
	}

	while(stk != NULL ){
		printf("%p %zu %zu\n", stk, stk->size, stk->n );
		stk = stk->down;
	}
	
}