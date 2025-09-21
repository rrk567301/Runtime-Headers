@class NSString;

@interface XQueryOrderSpec : XQueryExpr <XQueryExprBehavior> {
    id _expr;
    id _collation;
    char _ascending;
    char _emptyLeast;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)orderSpec:(id)a0 ascending:(char)a1 emptyLeast:(char)a2 collation:(id)a3;

- (void)dealloc;
- (void)finalize;
- (char)ascending;
- (void)bindInfoForProlog:(id)a0;
- (id)collation;
- (char)emptyLeast;
- (id)evaluateWithContext:(id)a0;
- (id)initWithExpr:(id)a0 ascending:(char)a1 emptyLeast:(char)a2 collation:(id)a3;
- (void)setExpr:(id)a0;

@end
