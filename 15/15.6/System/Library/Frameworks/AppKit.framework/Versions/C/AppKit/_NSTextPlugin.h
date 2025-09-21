@interface _NSTextPlugin : _NSTextFieldPlugin

- (Class)_valueClass:(id)a0;
- (char)acceptsMarker:(id)a0 binding:(id)a1 overrideWithPlaceholderIfDefined:(char *)a2;
- (char)acceptsStyleChanges;
- (unsigned long long)allowedValueBindingMask;
- (char)conditionalBehaviorOffByDefault:(id)a0;
- (id)objectMechanismsRequired;
- (void)showValue:(id)a0 inObject:(id)a1;
- (id)shownValueInObject:(id)a0;
- (Class)valueClass:(id)a0 forBinding:(id)a1;

@end
