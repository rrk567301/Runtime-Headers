@interface NSProgressIndicatorBinder : NSViewStateBinder

+ (BOOL)isUsableWithObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;
+ (id)bindingsForObject:(id)a0;

- (BOOL)isBindingReadOnly:(id)a0;
- (Class)valueClassForBinding:(id)a0;
- (BOOL)_isBooleanBinding:(id)a0;
- (void)_updateObject:(id)a0 observedController:(id)a1 observedKeyPath:(id)a2 context:(void *)a3;

@end
