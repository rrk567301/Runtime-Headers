@class NSString;

@interface XQueryOrderExpr : XQueryExpr <XQueryExprBehavior> {
    id _expr;
    char _ordered;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)orderExpr:(id)a0 ordered:(char)a1;

- (void)dealloc;
- (void)finalize;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;
- (id)initWithExpr:(id)a0 ordered:(char)a1;

@end
