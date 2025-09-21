@class NSDate;

@interface _NSDateValueBinderPlugin : _NSValueBinderPlugin {
    NSDate *_originalMinValue;
    NSDate *_originalMaxValue;
}

- (void)dealloc;
- (Class)_valueClass:(id)a0;
- (char)canIgnoreSettingMinAndMaxForObject:(id)a0;
- (char)canSupportMinAndMaxForObject:(id)a0;
- (id)editingColorAdjustableObject:(id)a0;
- (id)initWithBinder:(id)a0 object:(id)a1;
- (id)objectMechanismsRequired;
- (void)showValue:(id)a0 inObject:(id)a1;
- (id)shownValueInObject:(id)a0;
- (void)storeMin:(char)a0 andMax:(char)a1 ofObject:(id)a2;
- (char)updateCellOrControl:(id)a0 forMaxValue:(id)a1;
- (char)updateCellOrControl:(id)a0 forMinValue:(id)a1;

@end
