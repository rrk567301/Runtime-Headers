@class NSDecimalNumber;

@interface _NSComboBoxPlugin : _NSSelectionBinderPlugin {
    NSDecimalNumber *_originalMinValue;
    NSDecimalNumber *_originalMaxValue;
}

- (void)dealloc;
- (Class)_valueClass:(id)a0;
- (void)addContentObject:(id)a0 isPlaceholder:(char)a1 insertsNullPlaceholder:(char)a2 value:(id)a3 index:(long long)a4 cellOrControl:(id)a5;
- (unsigned long long)allowedValueBindingMask;
- (char)canIgnorePopulatingObject:(id)a0;
- (char)canPopulateWithPlaceholders;
- (char)canSupportMinAndMaxForObject:(id)a0;
- (id)initWithBinder:(id)a0 object:(id)a1;
- (char)needsAction;
- (char)needsDelegate;
- (id)objectMechanismsRequired;
- (char)prefersEnabledOverEditable:(id)a0;
- (void)removeAllContentObjectsInCellOrControl:(id)a0;
- (void)showValue:(id)a0 inObject:(id)a1;
- (void)storeMin:(char)a0 andMax:(char)a1 ofObject:(id)a2;
- (char)updateCellOrControl:(id)a0 forMaxValue:(id)a1;
- (char)updateCellOrControl:(id)a0 forMinValue:(id)a1;

@end
