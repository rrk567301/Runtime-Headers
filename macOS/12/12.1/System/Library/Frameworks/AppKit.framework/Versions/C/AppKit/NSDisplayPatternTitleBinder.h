@interface NSDisplayPatternTitleBinder : NSDisplayPatternBinder

+ (BOOL)isUsableWithObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;
+ (id)bindingsForObject:(id)a0;
+ (id)bindingCategory;
+ (id)_enumeratedDisplayPatternTitleBindings:(unsigned long long)a0;

- (void)_init;
- (BOOL)isBindingReadOnly:(id)a0;
- (id)availableBindings;
- (Class)valueClassForBinding:(id)a0;
- (id)_patternForBinding:(id)a0;
- (void)_setDisplayValue:(id)a0 object:(id)a1 triggerRedisplay:(BOOL)a2;

@end
