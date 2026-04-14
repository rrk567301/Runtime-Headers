@interface NSDoubleClickActionBinder : NSActionBinder

+ (BOOL)isUsableWithObject:(id)a0;
+ (id)_enumerationBinding;
+ (id)_targetBinding;
+ (id)_enumeratedArgumentBindings:(unsigned long long)a0;
+ (id)bindingsForObject:(id)a0;

- (BOOL)bindingRunsAlerts:(id)a0;
- (unsigned long long)_argumentBindingCount;
- (BOOL)_targetBindingBound;
- (id)_referenceBinding;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;

@end
