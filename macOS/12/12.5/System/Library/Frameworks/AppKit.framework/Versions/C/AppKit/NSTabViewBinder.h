@interface NSTabViewBinder : NSViewStateBinder

+ (BOOL)isUsableWithObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;
+ (id)bindingsForObject:(id)a0;
+ (id)bindingCategory;

- (id)availableBindings;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (Class)valueClassForBinding:(id)a0;
- (void)_updateObject:(id)a0 observedController:(id)a1 observedKeyPath:(id)a2 context:(void *)a3;
- (void)tabView:(id)a0 didSelectTabViewItem:(id)a1;
- (void)_selectInTabView:(id)a0 itemAtIndex:(id)a1;
- (void)_selectInTabView:(id)a0 itemWithLabel:(id)a1;
- (void)_selectInTabView:(id)a0 itemWithIdentifier:(id)a1;

@end
