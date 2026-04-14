@interface _NSPopUpButtonPlugin : _NSSelectionBinderPlugin {
    unsigned long long _dynamicContentPlacementIndex;
    struct __NSKeyValueCodingControllerModeType { long long mode; unsigned long long index; id indexPath; } _modeWhileIgnoringPopUpPopulation;
    id _dynamicallyGeneratedItems;
}

- (void)dealloc;
- (id)initWithBinder:(id)a0 object:(id)a1;
- (void)connectionWasEstablished:(id)a0;
- (unsigned long long)allowedValueBindingMask;
- (Class)valueClass:(id)a0 forBinding:(id)a1;
- (void)actionHasEnded:(id)a0 sender:(id)a1;
- (BOOL)shouldIgnoreAction:(id)a0;
- (void)showValue:(id)a0 inObject:(id)a1;
- (id)shownValueInObject:(id)a0;
- (unsigned long long)allowedContentBindingMask;
- (BOOL)canMixDynamicAndStaticContent;
- (BOOL)canIgnorePopulatingObject:(id)a0;
- (void)storeModeWhenIgnoringObjectPopulation:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a0;
- (BOOL)shouldRefreshDisplayAfterSelectionMechanismWasDismissed:(id)a0;
- (id)objectMechanismsRequired;
- (Class)_valueClass:(id)a0;
- (void)removeAllContentObjectsInCellOrControl:(id)a0;
- (void)addContentObject:(id)a0 isPlaceholder:(BOOL)a1 insertsNullPlaceholder:(BOOL)a2 value:(id)a3 index:(long long)a4 cellOrControl:(id)a5;
- (BOOL)isMemberOfDynamicallyGeneratedMenuItems:(id)a0;
- (void)forgetAllDynamicallyGeneratedMenuItems;
- (id)_insertPopUpButtonItemInCellOrControl:(id)a0 title:(id)a1 representedObject:(id)a2 menuItemIndex:(long long)a3 index:(long long)a4;
- (long long)_supposedNumberOfItems;
- (void)forgetDynamicallyGeneratedMenuItem:(id)a0;
- (void)_clearUnneccessaryItems:(id)a0;
- (void)recordDynamicallyGeneratedMenuItem:(id)a0;
- (BOOL)_shouldCreateSelectionItemInControl:(id)a0;

@end
