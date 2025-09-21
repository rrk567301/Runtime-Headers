@interface NSSelectionBinder : NSValueBinder {
    long long _contentPlacementTag;
    struct __selectionBinderFlags { unsigned char _insertsNullPlaceholder : 1; unsigned char _contentValuesBindingIsInSync : 1; unsigned char _contentObjectsBindingIsInSync : 1; unsigned char _needsToSetUpObserving : 1; unsigned char _isUpdatingObject : 1; unsigned int _reservedSelectionBinder : 27; } _selectionBinderFlags;
    id _modelObservingTracker;
}

+ (void)initialize;
+ (id)_pluginProtocol;
+ (id)bindingCategory;
+ (id)binderClassesSuperseded;
+ (id)bindingsForObject:(id)a0;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)contentValueKey;
- (void)selectionMechanismWasDismissed:(id)a0;
- (void)_adjustObject:(id)a0 mode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a1 observedController:(id)a2 observedKeyPath:(id)a3 context:(void *)a4 editableState:(char *)a5 adjustState:(char *)a6;
- (char)_analyzeContentBindingInSyncWithBinding:(id)a0;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (void)_connectionWasBroken;
- (void)_connectionWasEstablished;
- (void)_copyDetailsFromBinder:(id)a0;
- (id)_defaultSortDescriptorPrototypeKey;
- (char)_isReferenceBinding:(id)a0;
- (char)_observeKeyPathForBindingInfo:(id)a0 registerOrUnregister:(char)a1;
- (id)_optionsForBinding:(id)a0 specifyOnlyIfDifferentFromDefault:(char)a1;
- (id)_preferredPlaceholderForMarker:(id)a0 onlyIfNotExplicitlySet:(char)a1;
- (id)_referenceBinding;
- (void)_setParameter:(id)a0 forOption:(id)a1 withBindingInfo:(id)a2;
- (void)_updateObservingRegistration:(char)a0;
- (char)_valueClassIsSortableWithBinding:(id)a0;
- (id)_valueForBindingWithoutResolve:(id)a0 mode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a1;
- (id)availableBindings;
- (unsigned long long)contentCountWithEditedMode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a0;
- (id)contentObjectKey;
- (id)contentObjectWithEditedMode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a0 contentIndex:(unsigned long long)a1;
- (long long)contentPlacementTag;
- (id)contentValueWithEditedMode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a0 contentIndex:(unsigned long long)a1;
- (id)contentValueWithEditedMode:(struct __NSKeyValueCodingControllerModeType { long long x0; unsigned long long x1; id x2; })a0 selectedObject:(id)a1;
- (char)insertsNullPlaceholder;
- (char)isBindingReadOnly:(id)a0;
- (id)preferredPlaceholderForMarker:(id)a0;
- (void)setContentPlacementTag:(long long)a0;
- (void)setInsertsNullPlaceholder:(char)a0;

@end
