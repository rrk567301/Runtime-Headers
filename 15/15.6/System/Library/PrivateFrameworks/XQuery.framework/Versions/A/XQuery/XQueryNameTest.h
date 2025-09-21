@class NSString;

@interface XQueryNameTest : XQueryExpr <XQueryExprBehavior> {
    NSString *_name;
    id _qName;
    char _attribute;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nameTest:(id)a0;

- (void)dealloc;
- (void)finalize;
- (id)name;
- (id)initWithName:(id)a0;
- (char)attribute;
- (void)setAttribute:(char)a0;
- (void)bindInfoForProlog:(id)a0;
- (id)evaluateWithContext:(id)a0;
- (char)isValidNode:(id)a0 context:(id)a1;
- (id)qNameForContext:(id)a0;

@end
