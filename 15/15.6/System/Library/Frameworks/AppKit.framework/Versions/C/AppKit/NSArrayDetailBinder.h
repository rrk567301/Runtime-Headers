@interface NSArrayDetailBinder : NSObjectDetailBinder {
    struct __arrayDetailBinderFlags { unsigned char _selectsAllWhenSettingContent : 1; unsigned char _usedMultipleSelectionArray : 1; unsigned int _reservedArrayDetailBinder : 30; } _arrayDetailBinderFlags;
}

+ (id)binderClassesSuperseded;
+ (id)bindingsForObject:(id)a0;
+ (char)isUsableWithObject:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_init;
- (char)_canGuaranteeOrderOfContentObjects;
- (void)_copyDetailsFromBinder:(id)a0;
- (char)_handlesSelectAll;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 context:(void *)a2;
- (id)_optionsForBinding:(id)a0 specifyOnlyIfDifferentFromDefault:(char)a1;
- (char)_performArrayBinderOperation:(long long)a0 singleObject:(id)a1 multipleObjects:(id)a2 singleIndex:(unsigned long long)a3 multipleIndexes:(id)a4 selectionMode:(int *)a5;
- (id)_referenceBinding;
- (void)_refreshDetailContentInBackground:(char)a0;
- (void)_selectAllContent:(id)a0 inDetailController:(id)a1;
- (void)_setParameter:(id)a0 forOption:(id)a1 withBindingInfo:(id)a2;
- (char)addObjectToMasterArrayRelationship:(id)a0 selectionMode:(int *)a1;
- (char)addObjectsToMasterArrayRelationship:(id)a0 selectionMode:(int *)a1;
- (id)availableBindings;
- (char)insertObjectIntoMasterArrayRelationship:(id)a0 atIndex:(unsigned long long)a1 selectionMode:(int *)a2;
- (char)insertObjectsIntoMasterArrayRelationship:(id)a0 atIndexes:(id)a1 selectionMode:(int *)a2;
- (char)isBindingReadOnly:(id)a0;
- (void)refreshDetailContent;
- (char)removeObjectFromMasterArrayRelationshipAtIndex:(unsigned long long)a0 selectionMode:(int *)a1;
- (char)removeObjectsFromMasterArrayRelationshipAtIndexes:(id)a0 selectionMode:(int *)a1;
- (char)selectsAllWhenSettingContent;
- (void)setSelectsAllWhenSettingContent:(char)a0;

@end
