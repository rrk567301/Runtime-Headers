@class NSString;

@interface XQueryNamespaceExpr : XQueryExpr <XQueryExprBehavior> {
    id _name;
    id _value;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)namespaceExprWithName:(id)a0 value:(id)a1;

- (void)dealloc;
- (id)name;
- (void)finalize;
- (id)initWithName:(id)a0 value:(id)a1;
- (id)value;
- (id)evaluateWithContext:(id)a0;
- (void)bindInfoForProlog:(id)a0;

@end
