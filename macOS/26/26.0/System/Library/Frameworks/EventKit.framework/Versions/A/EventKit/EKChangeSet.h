@class NSMutableDictionary;

@interface EKChangeSet : NSObject <NSCopying> {
    BOOL _skipsPersistentObjectCopy;
}

@property (retain, nonatomic) NSMutableDictionary *singleValueChanges;
@property (retain, nonatomic) NSMutableDictionary *multiValueAdditions;
@property (retain, nonatomic) NSMutableDictionary *multiValueRemovals;
@property (nonatomic) BOOL isNew;
@property (nonatomic) BOOL isModified;
@property (nonatomic) BOOL isSaved;
@property (nonatomic) BOOL isDeleted;
@property (nonatomic) BOOL isUndeleted;
@property (nonatomic) BOOL isUndetached;

- (id)changedKeys;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)valueForSingleValueKey:(id)a0 basedOn:(id)a1 and:(id)a2;
- (void)addToChanges:(id)a0 forMultiValueKey:(id)a1 basedOn:(id)a2 and:(id)a3;
- (BOOL)hasChanges;
- (BOOL)isEffectivelyEqual:(id)a0;
- (id)_uniqueIdentifierToObjectMapForObjects:(id)a0 identifierBlock:(id /* block */)a1;
- (BOOL)hasUnsavedMultiValueRemovalForKey:(id)a0;
- (id)summary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_cleanupEmptySetsForMultiValueKey:(id)a0;
- (BOOL)_isNewAndUnsaved;
- (void)replaceMultiChangeAddedObject:(id)a0 withObject:(id)a1 forKey:(id)a2;
- (void)replaceUniqueMultiValueObjectsWithUpdatedObjects:(id)a0;
- (id)initWithChangeSet:(id)a0 changesToSkip:(id)a1;
- (id)initWithChangeSet:(id)a0 filter:(id /* block */)a1;
- (void)addChangesAndUpdateUniqueMultiValueObjects:(id)a0;
- (void)addChanges:(id)a0;
- (BOOL)hasUnsavedMultiValueAdditionForKey:(id)a0;
- (void)removeAllChangesExceptRemovals;
- (id)valuesForMultiValueKey:(id)a0 basedOn:(id)a1 and:(id)a2;
- (id)unsavedMultiValueAddedObjectsForKey:(id)a0;
- (id)initWithSingleValueChanges:(id)a0 multiValueAdditions:(id)a1 multiValueRemovals:(id)a2;
- (id)init;
- (void)changeSingleValue:(id)a0 forKey:(id)a1 basedOn:(id)a2;
- (void)rollbackChanges;
- (void)addToChanges:(id)a0 forMultiValueKey:(id)a1 basedOn:(id)a2 and:(id)a3 shouldCopyKeyCallback:(id /* block */)a4 objectIdentifierBlock:(id /* block */)a5;
- (void)setSkipsPersistentObjectCopy:(BOOL)a0;
- (BOOL)isUniqueAddedObject:(id)a0 forKey:(id)a1;
- (id)changedMultiValueKeys;
- (void)changeSingleValue:(id)a0 forKey:(id)a1 basedOn:(id)a2 and:(id)a3;
- (id)_initWithChangeSet:(id)a0 filter:(id /* block */)a1;
- (void)addChanges:(id)a0 shouldCopyKeyCallback:(id /* block */)a1 objectIdentifierBlock:(id /* block */)a2;
- (void)rollbackChangesForKeys:(id)a0;
- (void)addChanges:(id)a0 shouldCopyKeyCallback:(id /* block */)a1;
- (id)initWithChangeSet:(id)a0 changesToKeep:(id)a1;
- (void)markChangesAsSaved;
- (id)description;
- (id)unsavedMultiValueRemovedObjectsForKey:(id)a0;
- (id)valuesForMultiValueKey:(id)a0 basedOnSet:(id)a1;
- (BOOL)hasUnsavedChangeForKey:(id)a0;
- (BOOL)skipsPersistentObjectCopy;
- (id)initWithChangeSet:(id)a0;
- (id)changedSingleValueKeys;
- (BOOL)hasUnsavedChanges;
- (void)removeFromChanges:(id)a0 forMultiValueKey:(id)a1 basedOn:(id)a2 and:(id)a3;
- (id)valueForSingleValueKey:(id)a0 basedOn:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)removeFromChanges:(id)a0 forMultiValueKey:(id)a1 basedOn:(id)a2 and:(id)a3 objectIdentifierBlock:(id /* block */)a4;
- (void).cxx_destruct;
- (void)forceChangeValue:(id)a0 forKey:(id)a1;

@end
