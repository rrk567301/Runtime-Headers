@interface NSTitleBinder : NSBinder

+ (id)bindingCategory;
+ (id)bindingsForObject:(id)a0;
+ (char)isUsableWithObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;

- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (char)isBindingReadOnly:(id)a0;
- (Class)valueClassForBinding:(id)a0;

@end
