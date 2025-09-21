@class NSMutableDictionary;

@interface EKChangeSet : NSObject <NSCopying> {
    char _skipsPersistentObjectCopy;
}

@property (retain, nonatomic) NSMutableDictionary *singleValueChanges;
@property (retain, nonatomic) NSMutableDictionary *multiValueAdditions;
@property (retain, nonatomic) NSMutableDictionary *multiValueRemovals;
@property (nonatomic) char isNew;
@property (nonatomic) char isModified;
@property (nonatomic) char isSaved;
@property (nonatomic) char isDeleted;
@property (nonatomic) char isUndeleted;
@property (nonatomic) char isUndetached;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)addChanges:(id)a0;
- (char)hasChanges;
- (id)changedKeys;
- (id)summary;
- (char)hasUnsavedChanges;
- (id)valueForSingleValueKey:(id)a0 basedOn:(id)a1;
- (void)rollbackChanges;
- (void)_cleanupEmptySetsForMultiValueKey:(id)a0;
- (id)_initWithChangeSet:(id)a0 filter:(id /* block */)a1;
- (char)_isNewAndUnsaved;
- (id)_uniqueIdentifierToObjectMapForObjects:(id)a0 identifierBlock:(id /* block */)a1;
- (void)addChanges:(id)a0 shouldCopyKeyCallback:(id /* block */)a1;
- (void)addChanges:(id)a0 shouldCopyKeyCallback:(id /* block */)a1 objectIdentifierBlock:(id /* block */)a2;
- (void)addChangesAndUpdateUniqueMultiValueObjects:(id)a0;
- (void)addToChanges:(id)a0 forMultiValueKey:(id)a1 basedOn:(id)a2 and:(id)a3;
- (void)addToChanges:(id)a0 forMultiValueKey:(id)a1 basedOn:(id)a2 and:(id)a3 shouldCopyKeyCallback:(id /* block */)a4 objectIdentifierBlock:(id /* block */)a5;
- (void)changeSingleValue:(id)a0 forKey:(id)a1 basedOn:(id)a2;
- (void)changeSingleValue:(id)a0 forKey:(id)a1 basedOn:(id)a2 and:(id)a3;
- (id)changedMultiValueKeys;
- (id)changedSingleValueKeys;
- (void)forceChangeValue:(id)a0 forKey:(id)a1;
- (char)hasUnsavedChangeForKey:(id)a0;
- (char)hasUnsavedMultiValueAdditionForKey:(id)a0;
- (char)hasUnsavedMultiValueRemovalForKey:(id)a0;
- (id)initWithChangeSet:(id)a0;
- (id)initWithChangeSet:(id)a0 changesToKeep:(id)a1;
- (id)initWithChangeSet:(id)a0 changesToSkip:(id)a1;
- (id)initWithChangeSet:(id)a0 filter:(id /* block */)a1;
- (id)initWithSingleValueChanges:(id)a0 multiValueAdditions:(id)a1 multiValueRemovals:(id)a2;
- (char)isEffectivelyEqual:(id)a0;
- (char)isUniqueAddedObject:(id)a0 forKey:(id)a1;
- (void)markChangesAsSaved;
- (void)removeAllChangesExceptRemovals;
- (void)removeFromChanges:(id)a0 forMultiValueKey:(id)a1 basedOn:(id)a2 and:(id)a3;
- (void)removeFromChanges:(id)a0 forMultiValueKey:(id)a1 basedOn:(id)a2 and:(id)a3 objectIdentifierBlock:(id /* block */)a4;
- (void)replaceMultiChangeAddedObject:(id)a0 withObject:(id)a1 forKey:(id)a2;
- (void)replaceUniqueMultiValueObjectsWithUpdatedObjects:(id)a0;
- (void)rollbackChangesForKeys:(id)a0;
- (void)setSkipsPersistentObjectCopy:(char)a0;
- (char)skipsPersistentObjectCopy;
- (id)unsavedMultiValueAddedObjectsForKey:(id)a0;
- (id)unsavedMultiValueRemovedObjectsForKey:(id)a0;
- (id)valueForSingleValueKey:(id)a0 basedOn:(id)a1 and:(id)a2;
- (id)valuesForMultiValueKey:(id)a0 basedOn:(id)a1 and:(id)a2;
- (id)valuesForMultiValueKey:(id)a0 basedOnSet:(id)a1;

@end
