@interface NSArrayDetailBinder : NSObjectDetailBinder {
    struct __arrayDetailBinderFlags { unsigned char _selectsAllWhenSettingContent : 1; unsigned char _usedMultipleSelectionArray : 1; unsigned int _reservedArrayDetailBinder : 30; } _arrayDetailBinderFlags;
}

+ (BOOL)isUsableWithObject:(id)a0;
+ (id)bindingsForObject:(id)a0;
+ (id)binderClassesSuperseded;

- (void)_init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_copyDetailsFromBinder:(id)a0;
- (BOOL)isBindingReadOnly:(id)a0;
- (void)_setParameter:(id)a0 forOption:(id)a1 withBindingInfo:(id)a2;
- (id)_optionsForBinding:(id)a0 specifyOnlyIfDifferentFromDefault:(BOOL)a1;
- (id)availableBindings;
- (id)_referenceBinding;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (BOOL)_handlesSelectAll;
- (void)setSelectsAllWhenSettingContent:(BOOL)a0;
- (BOOL)selectsAllWhenSettingContent;
- (BOOL)_canGuaranteeOrderOfContentObjects;
- (void)_selectAllContent:(id)a0 inDetailController:(id)a1;
- (void)_refreshDetailContentInBackground:(BOOL)a0;
- (void)refreshDetailContent;
- (BOOL)_performArrayBinderOperation:(long long)a0 singleObject:(id)a1 multipleObjects:(id)a2 singleIndex:(unsigned long long)a3 multipleIndexes:(id)a4 selectionMode:(int *)a5;
- (BOOL)addObjectToMasterArrayRelationship:(id)a0 selectionMode:(int *)a1;
- (BOOL)addObjectsToMasterArrayRelationship:(id)a0 selectionMode:(int *)a1;
- (BOOL)insertObjectIntoMasterArrayRelationship:(id)a0 atIndex:(unsigned long long)a1 selectionMode:(int *)a2;
- (BOOL)insertObjectsIntoMasterArrayRelationship:(id)a0 atIndexes:(id)a1 selectionMode:(int *)a2;
- (BOOL)removeObjectFromMasterArrayRelationshipAtIndex:(unsigned long long)a0 selectionMode:(int *)a1;
- (BOOL)removeObjectsFromMasterArrayRelationshipAtIndexes:(id)a0 selectionMode:(int *)a1;

@end
