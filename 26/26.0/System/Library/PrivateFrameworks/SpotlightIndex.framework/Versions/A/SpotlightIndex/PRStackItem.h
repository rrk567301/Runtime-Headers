@interface PRStackItem : NSObject

@property (nonatomic) struct query_node { struct query_node *x0; struct query_node *x1; struct query_piece *x2; union { void *x0; void ***x1; } x3; void *x4; char *x5; unsigned short x6; int x7; unsigned char x8 : 8; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned long long x12; float x13; } *node;
@property (nonatomic) BOOL visited;

+ (id)itemWithNode:(struct query_node { struct query_node *x0; struct query_node *x1; struct query_piece *x2; union { void *x0; void ***x1; } x3; void *x4; char *x5; unsigned short x6; int x7; unsigned char x8 : 8; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned long long x12; float x13; } *)a0 visited:(BOOL)a1;

@end
