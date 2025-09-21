@interface _NSCheckBoxPlugin : _NSValueBinderPlugin {
    struct __checkBoxPluginFlags { unsigned char _allowsMixedState : 1; unsigned char _testedMixedState : 1; unsigned int _reservedCheckBoxPlugin : 30; } _checkBoxPluginFlags;
}

+ (char)isUsableWithObject:(id)a0;

- (char)isBooleanValueBindingForObject:(id)a0;
- (Class)_valueClass:(id)a0;
- (char)acceptsMarker:(id)a0 binding:(id)a1 overrideWithPlaceholderIfDefined:(char *)a2;
- (void)connectionWasEstablished:(id)a0;
- (id)initWithBinder:(id)a0 object:(id)a1;
- (id)objectMechanismsRequired;
- (char)shouldAlwaysUpdateDisplayValue;
- (void)showValue:(id)a0 inObject:(id)a1;
- (id)shownValueInObject:(id)a0;

@end
