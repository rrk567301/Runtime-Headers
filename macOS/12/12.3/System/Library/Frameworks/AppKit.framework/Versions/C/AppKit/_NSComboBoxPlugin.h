@class NSDecimalNumber;

@interface _NSComboBoxPlugin : _NSSelectionBinderPlugin {
    NSDecimalNumber *_originalMinValue;
    NSDecimalNumber *_originalMaxValue;
}

- (void)dealloc;
- (id)initWithBinder:(id)a0 object:(id)a1;
- (BOOL)prefersEnabledOverEditable:(id)a0;
- (BOOL)needsAction;
- (unsigned long long)allowedValueBindingMask;
- (BOOL)canSupportMinAndMaxForObject:(id)a0;
- (void)storeMin:(BOOL)a0 andMax:(BOOL)a1 ofObject:(id)a2;
- (BOOL)updateCellOrControl:(id)a0 forMinValue:(id)a1;
- (BOOL)updateCellOrControl:(id)a0 forMaxValue:(id)a1;
- (BOOL)needsDelegate;
- (void)showValue:(id)a0 inObject:(id)a1;
- (BOOL)canPopulateWithPlaceholders;
- (BOOL)canIgnorePopulatingObject:(id)a0;
- (id)objectMechanismsRequired;
- (Class)_valueClass:(id)a0;
- (void)removeAllContentObjectsInCellOrControl:(id)a0;
- (void)addContentObject:(id)a0 isPlaceholder:(BOOL)a1 insertsNullPlaceholder:(BOOL)a2 value:(id)a3 index:(long long)a4 cellOrControl:(id)a5;

@end
