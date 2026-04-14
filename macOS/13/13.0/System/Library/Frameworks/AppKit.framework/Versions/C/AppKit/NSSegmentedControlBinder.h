@interface NSSegmentedControlBinder : NSValueBinder

+ (id)objectMechanismsRequiredForObject:(id)a0;
+ (id)bindingsForObject:(id)a0;
+ (id)bindingCategory;
+ (id)binderClassesSuperseded;

- (id)availableBindings;
- (id)_referenceBinding;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (void)_updateContent;

@end
