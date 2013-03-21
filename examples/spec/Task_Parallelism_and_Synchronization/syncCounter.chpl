var count$: sync int = 0;
begin count$ = count$ + 1;
begin count$ = count$ + 1;
begin count$ = count$ + 1;
while count$.readFF() != 3 do ;
writeln("count is: ", count$);
