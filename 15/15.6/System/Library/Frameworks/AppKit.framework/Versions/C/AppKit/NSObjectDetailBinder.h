@class NSResponder;

@interface NSObjectDetailBinder : NSEditorBinder {
    NSResponder *_errorPresenter;
    struct __objectDetailBinderFlags { unsigned char _handlesContentAsCompoundValue : 1; unsigned char _deletesObjectsOnRemove : 1; unsigned int _reservedObjectDetailBinder : 30; } _objectDetailBinderFlags;
}

+ (void)initialize;
+ (id)bindingCategory;
+ (id)bindingsForObject:(id)a0;
+ (char)isUsableWithObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_init;
- (void)_connectionWasBroken;
- (void)_connectionWasEstablished;
- (void)_copyDetailsFromBinder:(id)a0;
- (void)_notifyEditorStateChanged:(char)a0;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (id)_optionsForBinding:(id)a0 specifyOnlyIfDifferentFromDefault:(char)a1;
- (id)_referenceBinding;
- (void)_setParameter:(id)a0 forOption:(id)a1 withBindingInfo:(id)a2;
- (void)_useErrorPresenter:(id)a0;
- (char)deletesObjectsOnRemove;
- (char)handlesContentAsCompoundValue;
- (void)noteContentValueHasChanged;
- (void)refreshDetailContent;
- (void)setDeletesObjectsOnRemove:(char)a0;
- (void)setHandlesContentAsCompoundValue:(char)a0;
- (char)setMasterObjectRelationship:(id)a0;
- (char)setMasterObjectRelationship:(id)a0 refreshDetailContent:(char)a1;

@end
