    .text
    .global diff
    .type diff, @function
diff:
    subu   $v0,$a0,$a1
    jr     $ra

