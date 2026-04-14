@class NSArray;

@interface XQueryStep : NSObject {
    id _expr;
    id _next;
    NSArray *_predicates;
}

- (void)dealloc;
- (id)init;
- (void)finalize;
- (id)next;
- (void)setPredicates:(id)a0;
- (id)predicates;
- (void)setNext:(id)a0;
- (void)setLast:(id)a0;
- (void)bindInfoForProlog:(id)a0;
- (id)initWithExpr:(id)a0;
- (id)expr;
- (void)processItems:(id)a0 toResults:(id)a1 forContext:(id)a2 validate:(BOOL)a3;
- (id)handlePreicatesFromIndex:(unsigned long long)a0 items:(id)a1 context:(id)a2;

@end
