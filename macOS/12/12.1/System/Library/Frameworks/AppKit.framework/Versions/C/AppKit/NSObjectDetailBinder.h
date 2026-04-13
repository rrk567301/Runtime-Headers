@class NSResponder;

@interface NSObjectDetailBinder : NSEditorBinder {
    NSResponder *_errorPresenter;
    struct __objectDetailBinderFlags { unsigned char _handlesContentAsCompoundValue : 1; unsigned char _deletesObjectsOnRemove : 1; unsigned int _reservedObjectDetailBinder : 30; } _objectDetailBinderFlags;
}

+ (void)initialize;
+ (BOOL)isUsableWithObject:(id)a0;
+ (id)objectMechanismsRequiredForObject:(id)a0;
+ (id)bindingsForObject:(id)a0;
+ (id)bindingCategory;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_init;
- (void)_copyDetailsFromBinder:(id)a0;
- (void)_connectionWasEstablished;
- (void)_setParameter:(id)a0 forOption:(id)a1 withBindingInfo:(id)a2;
- (id)_optionsForBinding:(id)a0 specifyOnlyIfDifferentFromDefault:(BOOL)a1;
- (id)_referenceBinding;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (BOOL)deletesObjectsOnRemove;
- (void)_useErrorPresenter:(id)a0;
- (BOOL)handlesContentAsCompoundValue;
- (BOOL)setMasterObjectRelationship:(id)a0;
- (BOOL)setMasterObjectRelationship:(id)a0 refreshDetailContent:(BOOL)a1;
- (void)refreshDetailContent;
- (void)_connectionWasBroken;
- (void)_notifyEditorStateChanged:(BOOL)a0;
- (void)noteContentValueHasChanged;
- (void)setHandlesContentAsCompoundValue:(BOOL)a0;
- (void)setDeletesObjectsOnRemove:(BOOL)a0;

@end
