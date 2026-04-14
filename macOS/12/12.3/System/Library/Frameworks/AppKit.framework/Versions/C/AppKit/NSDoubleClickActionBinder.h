@interface NSDoubleClickActionBinder : NSActionBinder

+ (BOOL)isUsableWithObject:(id)a0;
+ (id)_enumeratedArgumentBindings:(unsigned long long)a0;
+ (id)_targetBinding;
+ (id)_enumerationBinding;
+ (id)bindingsForObject:(id)a0;

- (unsigned long long)_argumentBindingCount;
- (BOOL)bindingRunsAlerts:(id)a0;
- (BOOL)_targetBindingBound;
- (id)_referenceBinding;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;

@end
