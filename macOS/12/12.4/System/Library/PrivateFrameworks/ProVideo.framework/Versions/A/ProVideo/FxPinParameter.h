@interface FxPinParameter : FxPin {
    id defaultValue;
    Class customUI;
    struct FxPinParameterPriv { } *_paramPriv;
}

- (void)dealloc;
- (id)init;
- (id)defaultValue;
- (void)setDefaultValue:(id)a0;
- (Class)customPinControl;
- (void)setCustomPinControl:(Class)a0;

@end
