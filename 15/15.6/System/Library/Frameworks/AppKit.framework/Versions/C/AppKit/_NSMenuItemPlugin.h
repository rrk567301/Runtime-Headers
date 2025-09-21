@interface _NSMenuItemPlugin : _NSValueBinderPlugin

+ (char)isUsableWithObject:(id)a0;

- (char)acceptsMarker:(id)a0 binding:(id)a1 overrideWithPlaceholderIfDefined:(char *)a2;
- (void)actionHasBegun:(id)a0 sender:(id)a1;
- (char)needsAction;
- (id)objectMechanismsRequired;
- (char)shouldAlwaysUpdateDisplayValue;
- (void)showValue:(id)a0 inObject:(id)a1;
- (id)shownValueInObject:(id)a0;

@end
