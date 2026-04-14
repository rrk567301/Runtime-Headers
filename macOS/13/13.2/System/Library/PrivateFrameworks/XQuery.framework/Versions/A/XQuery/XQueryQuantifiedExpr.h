@class NSString, NSArray;

@interface XQueryQuantifiedExpr : XQueryExpr <XQueryExprBehavior> {
    NSArray *_items;
    id _satisfies;
    BOOL _every;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)someExpr:(id)a0 satisfies:(id)a1;
+ (id)everyExpr:(id)a0 satisfies:(id)a1;

- (void)dealloc;
- (void)finalize;
- (id)evaluateWithContext:(id)a0;
- (void)bindInfoForProlog:(id)a0;
- (id)initWithItems:(id)a0 satisfies:(id)a1 every:(BOOL)a2;
- (id)evaluatePostion:(long long)a0 withContext:(id)a1;

@end
