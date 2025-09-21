@class NSString;

@interface XQueryNameTest : XQueryExpr <XQueryExprBehavior> {
    NSString *_name;
    id _qName;
    BOOL _attribute;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nameTest:(id)a0;

- (void)finalize;
- (BOOL)attribute;
- (void)dealloc;
- (void)setAttribute:(BOOL)a0;
- (id)name;
- (id)initWithName:(id)a0;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;
- (BOOL)isValidNode:(id)a0 context:(id)a1;
- (id)qNameForContext:(id)a0;

@end
