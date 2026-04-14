@class NSString, NSMutableArray, NSArray;

@interface XQueryElementExpr : XQueryExpr <XQueryExprBehavior> {
    NSString *_name;
    id _nameExpr;
    NSMutableArray *_namespaces;
    NSArray *_attributes;
    NSArray *_items;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)elementeExprWithName:(id)a0 attributes:(id)a1 items:(id)a2;
+ (id)elementExprWithNameExpr:(id)a0 value:(id)a1;

- (void)dealloc;
- (void)finalize;
- (id)evaluateWithContext:(id)a0;
- (void)bindInfoForProlog:(id)a0;
- (id)initWithName:(id)a0 attributes:(id)a1 items:(id)a2;
- (id)initWithNameExpr:(id)a0 value:(id)a1;
- (BOOL)updateNamespacesForElement:(id)a0 qName:(id)a1 context:(id)a2;

@end
