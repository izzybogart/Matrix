#include <stdio.h>
#include "matrix_dynamic.h"
#include "matrix_static.h"

void transpose(matrix a, matrix b) {
    int row, col;
    for(row = 0; row < a.col_dim; row++){
        for(col = 0; col < b.col_dim; col++){
                b.element[row][col]= a.element[col][row];
        }
    }
}

int main(){
    srand(time(NULL));
    int row = 2;
    int col = 5;

    matrix a_stat, a_dy, b_stat, b_dy;

    static T data[] = {2,1,8,2,4,5,7,2,10};
    a_stat = create_initvals_stat(2,5,data);
    a_dy = create_initvals_dy(2,5,data);

    b_stat = create_empty_stat(5,2);
    b_dy = create_empty_dy(5,2);

    transpose(a, b);

    martix_print(b);
}
