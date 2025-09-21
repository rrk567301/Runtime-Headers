@interface NSDisplayPatternTitleBinder : NSDisplayPatternBinder

+ (id)bindingCategory;
+ (id)_enumeratedDisplayPatternTitleBindings:(unsigned long long)a0;
+ (id)bindingsForObject:(id)a0;
+ (char)isUsableWithObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;

- (void)_init;
- (id)_patternForBinding:(id)a0;
- (void)_setDisplayValue:(id)a0 object:(id)a1 triggerRedisplay:(char)a2;
- (id)availableBindings;
- (char)isBindingReadOnly:(id)a0;
- (Class)valueClassForBinding:(id)a0;

@end
