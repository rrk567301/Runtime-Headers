@class NSString;

@interface KHDBValueSelector : NSObject {
    NSString *_selectorName;
    int _returnType;
    SEL _selector;
    void /* function */ *_methodImp;
}

- (void)dealloc;
- (id)initWithSelectorName:(id)a0;
- (BOOL)setupForTarget:(id)a0;
- (id)valueFromTarget:(id)a0;
- (id)valuesFromObjects:(id)a0;

@end
