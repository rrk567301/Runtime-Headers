@interface _NSTextPlugin : _NSTextFieldPlugin

- (BOOL)acceptsMarker:(id)a0 binding:(id)a1 overrideWithPlaceholderIfDefined:(BOOL *)a2;
- (BOOL)conditionalBehaviorOffByDefault:(id)a0;
- (unsigned long long)allowedValueBindingMask;
- (Class)valueClass:(id)a0 forBinding:(id)a1;
- (void)showValue:(id)a0 inObject:(id)a1;
- (id)shownValueInObject:(id)a0;
- (BOOL)acceptsStyleChanges;
- (id)objectMechanismsRequired;
- (Class)_valueClass:(id)a0;

@end
