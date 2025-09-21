@class NSDecimalNumber;

@interface _NSTextFieldPlugin : _NSValueBinderPlugin {
    NSDecimalNumber *_originalMinValue;
    NSDecimalNumber *_originalMaxValue;
}

- (void)dealloc;
- (Class)_valueClass:(id)a0;
- (char)acceptsStyleChanges;
- (char)canIgnoreSettingMinAndMaxForObject:(id)a0;
- (char)canSupportMinAndMaxForObject:(id)a0;
- (char)conditionalBehaviorOffByDefault:(id)a0;
- (id)editingColorAdjustableObject:(id)a0;
- (id)initWithBinder:(id)a0 object:(id)a1;
- (char)needsDelegate;
- (id)objectMechanismsRequired;
- (void)showValue:(id)a0 inObject:(id)a1;
- (void)storeMin:(char)a0 andMax:(char)a1 ofObject:(id)a2;
- (char)updateCellOrControl:(id)a0 forMaxValue:(id)a1;
- (char)updateCellOrControl:(id)a0 forMinValue:(id)a1;

@end
