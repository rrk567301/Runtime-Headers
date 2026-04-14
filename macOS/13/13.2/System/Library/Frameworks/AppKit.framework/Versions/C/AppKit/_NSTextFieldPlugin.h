@class NSDecimalNumber;

@interface _NSTextFieldPlugin : _NSValueBinderPlugin {
    NSDecimalNumber *_originalMinValue;
    NSDecimalNumber *_originalMaxValue;
}

- (void)dealloc;
- (id)initWithBinder:(id)a0 object:(id)a1;
- (BOOL)conditionalBehaviorOffByDefault:(id)a0;
- (BOOL)canIgnoreSettingMinAndMaxForObject:(id)a0;
- (BOOL)canSupportMinAndMaxForObject:(id)a0;
- (void)storeMin:(BOOL)a0 andMax:(BOOL)a1 ofObject:(id)a2;
- (BOOL)updateCellOrControl:(id)a0 forMinValue:(id)a1;
- (BOOL)updateCellOrControl:(id)a0 forMaxValue:(id)a1;
- (BOOL)needsDelegate;
- (void)showValue:(id)a0 inObject:(id)a1;
- (id)objectMechanismsRequired;
- (Class)_valueClass:(id)a0;
- (BOOL)acceptsStyleChanges;
- (id)editingColorAdjustableObject:(id)a0;

@end
