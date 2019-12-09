goto is a label:
	it is divided into two types
	1. Forward labelling
	2. Backward labelling
syntax:
	1. Forward labelling
	goto label_name
	statement-1;
	-------------
	statement-x;
	label_name:
		body of goto;
		
	2. Backward labelling
	label_name:
		body of goto;
		other statements
	goto label_name;
