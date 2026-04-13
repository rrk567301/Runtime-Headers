@interface NSSelectionBinder : NSValueBinder {
    long long _contentPlacementTag;
    struct __selectionBinderFlags { unsigned char _insertsNullPlaceholder : 1; unsigned char _contentValuesBindingIsInSync : 1; unsigned char _contentObjectsBindingIsInSync : 1; unsigned char _needsToSetUpObserving : 1; unsigned char _isUpdatingObject : 1; unsigned int _reservedSelectionBinder : 27; } _selectionBinderFlags;
    id _modelObservingTracker;
}

+ (void)initialize;
+ (id)_pluginProtocol;
+ (id)bindingsForObject:(id)a0;
+ (id)bindingCategory;
+ (id)binderClassesSuperseded;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_copyDetailsFromBinder:(id)a0;
- (void)_connectionWasEstablished;
- (BOOL)isBindingReadOnly:(id)a0;
- (id)availableBindings;
- (void)_setParameter:(id)a0 forOption:(id)a1 withBindingInfo:(id)a2;
- (id)_optionsForBinding:(id)a0 specifyOnlyIfDifferentFromDefault:(BOOL)a1;
- (id)_referenceBinding;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (BOOL)_observeKeyPathForBindingInfo:(id)a0 registerOrUnregister:(BOOL)a1;
- (void)_updateObservingRegistration:(BOOL)a0;
- (void)_connectionWasBroken;
- (BOOL)_isReferenceBinding:(id)a0;
- (void)selectionMechanismWasDismissed:(id)a0;
- (void)setInsertsNullPlaceholder:(BOOL)a0;
- (void)setContentPlacementTag:(long long)a0;
- (BOOL)insertsNullPlaceholder;
- (long long)contentPlacementTag;
- (BOOL)_analyzeContentBindingInSyncWithBinding:(id)a0;
- (BOOL)_valueClassIsSortableWithBinding:(id)a0;
- (id)contentValueKey;
- (id)_defaultSortDescriptorPrototypeKey;
- (id)_preferredPlaceholderForMarker:(id)a0 onlyIfNotExplicitlySet:(BOOL)a1;
- (id)_valueForBindingWithoutResolve:(id)a0 mode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a1;
- (id)contentObjectKey;
- (void)_adjustObject:(id)a0 mode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a1 observedController:(id)a2 observedKeyPath:(id)a3 context:(void *)a4 editableState:(BOOL *)a5 adjustState:(BOOL *)a6;
- (id)preferredPlaceholderForMarker:(id)a0;
- (id)contentValueWithEditedMode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a0 contentIndex:(unsigned long long)a1;
- (id)contentObjectWithEditedMode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a0 contentIndex:(unsigned long long)a1;
- (unsigned long long)contentCountWithEditedMode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a0;
- (id)contentValueWithEditedMode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a0 selectedObject:(id)a1;

@end
