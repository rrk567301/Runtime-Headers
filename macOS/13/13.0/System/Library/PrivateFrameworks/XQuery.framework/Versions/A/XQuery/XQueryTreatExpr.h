@class NSString, XQueryTypeDeclaration;

@interface XQueryTreatExpr : XQueryExpr <XQueryExprBehavior> {
    id _expr;
    XQueryTypeDeclaration *_type;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)treatExpr:(id)a0 asType:(id)a1;
+ (id)object:(id)a0 treatAs:(id)a1 forContext:(id)a2;

- (void)dealloc;
- (void)finalize;
- (id)evaluateWithContext:(id)a0;
- (void)bindInfoForProlog:(id)a0;
- (id)initWithExpr:(id)a0 asType:(id)a1;

@end
