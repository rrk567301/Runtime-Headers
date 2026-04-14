@interface _NSImageViewPlugin : _NSValueBinderPlugin

+ (id)_deprecatedBindings;

- (BOOL)prefersEnabledOverEditable:(id)a0;
- (unsigned long long)allowedValueBindingMask;
- (Class)valueClass:(id)a0 forBinding:(id)a1;
- (void)showValue:(id)a0 inObject:(id)a1;
- (id)shownValueInObject:(id)a0;
- (Class)_valueClass:(id)a0;

@end
