@interface NSEditorBinder : NSBinder {
    struct __editorBinderFlags { unsigned char _conditionallySetsEditable : 1; unsigned char _objectSupportsEditable : 1; unsigned char _explicitlyRequestEditable : 1; unsigned char _explicitEditableState : 1; unsigned char _conditionallySetsEnabled : 1; unsigned char _objectSupportsEnabled : 1; unsigned char _explicitlyRequestEnabled : 1; unsigned char _explicitEnabledState : 1; unsigned char _conditionallySetsHidden : 1; unsigned char _objectSupportsHidden : 1; unsigned char _explicitlyRequestHidden : 1; unsigned char _explicitHiddenState : 1; unsigned int _reservedEditorBinder : 20; } _editorBinderFlags;
    id _editableBinder;
}

+ (id)_pluginProtocol;

- (void)_init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_copyDetailsFromBinder:(id)a0;
- (void)_setParameter:(id)a0 forOption:(id)a1 withBindingInfo:(id)a2;
- (id)_optionsForBinding:(id)a0 specifyOnlyIfDifferentFromDefault:(BOOL)a1;
- (BOOL)selectionSupportsEnabledState;
- (void)_setObject:(id)a0;
- (void)_clearDependenciesWithAllPeerBinders;
- (BOOL)shouldProcessObservations;
- (void)_noticeEditablePeerBinder:(id)a0;
- (BOOL)_isReferenceBinding:(id)a0;
- (void)setConditionallySetsEditable:(BOOL)a0;
- (BOOL)conditionallySetsEditable;
- (void)setConditionallySetsEnabled:(BOOL)a0;
- (BOOL)conditionallySetsEnabled;
- (void)setConditionallySetsHidden:(BOOL)a0;
- (BOOL)conditionallySetsHidden;
- (BOOL)_conditionallySetsStates;
- (BOOL)_isExplicitlyNonEditable;
- (void)_adjustStatesOfObject:(id)a0 mode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a1 state:(BOOL)a2 triggerRedisplay:(BOOL)a3;

@end
