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

- (BOOL)hasChanges;
- (void)addChanges:(id)a0 shouldCopyKeyCallback:(id /* block */)a1 objectIdentifierBlock:(id /* block */)a2;
- (id)initWithChangeSet:(id)a0;
- (BOOL)isEffectivelyEqual:(id)a0;
- (void)replaceUniqueMultiValueObjectsWithUpdatedObjects:(id)a0;
- (id)_uniqueIdentifierToObjectMapForObjects:(id)a0 identifierBlock:(id /* block */)a1;
- (id)changedSingleValueKeys;
- (void)changeSingleValue:(id)a0 forKey:(id)a1 basedOn:(id)a2 and:(id)a3;
- (id)unsavedMultiValueAddedObjectsForKey:(id)a0;
- (id)changedKeys;
- (void)addChanges:(id)a0;
- (BOOL)hasUnsavedMultiValueAdditionForKey:(id)a0;
- (void)removeAllChangesExceptRemovals;
- (BOOL)hasUnsavedMultiValueRemovalForKey:(id)a0;
- (void)addToChanges:(id)a0 forMultiValueKey:(id)a1 basedOn:(id)a2 and:(id)a3 shouldCopyKeyCallback:(id /* block */)a4 objectIdentifierBlock:(id /* block */)a5;
- (id)initWithSingleValueChanges:(id)a0 multiValueAdditions:(id)a1 multiValueRemovals:(id)a2;
- (id)valuesForMultiValueKey:(id)a0 basedOnSet:(id)a1;
- (void)rollbackChanges;
- (id)description;
- (void)addChanges:(id)a0 shouldCopyKeyCallback:(id /* block */)a1;
- (void)rollbackChangesForKeys:(id)a0;
- (id)initWithChangeSet:(id)a0 filter:(id /* block */)a1;
- (id)init;
- (void)removeFromChanges:(id)a0 forMultiValueKey:(id)a1 basedOn:(id)a2 and:(id)a3;
- (id)unsavedMultiValueRemovedObjectsForKey:(id)a0;
- (void)markChangesAsSaved;
- (id)summary;
- (BOOL)isUniqueAddedObject:(id)a0 forKey:(id)a1;
- (BOOL)skipsPersistentObjectCopy;
- (void).cxx_destruct;
- (BOOL)hasUnsavedChangeForKey:(id)a0;
- (BOOL)_isNewAndUnsaved;
- (void)changeSingleValue:(id)a0 forKey:(id)a1 basedOn:(id)a2;
- (id)valueForSingleValueKey:(id)a0 basedOn:(id)a1 and:(id)a2;
- (void)_cleanupEmptySetsForMultiValueKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)forceChangeValue:(id)a0 forKey:(id)a1;
- (void)addChangesAndUpdateUniqueMultiValueObjects:(id)a0;
- (id)changedMultiValueKeys;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasUnsavedChanges;
- (id)_initWithChangeSet:(id)a0 filter:(id /* block */)a1;
- (void)replaceMultiChangeAddedObject:(id)a0 withObject:(id)a1 forKey:(id)a2;
- (void)setSkipsPersistentObjectCopy:(BOOL)a0;
- (void)removeFromChanges:(id)a0 forMultiValueKey:(id)a1 basedOn:(id)a2 and:(id)a3 objectIdentifierBlock:(id /* block */)a4;
- (id)valueForSingleValueKey:(id)a0 basedOn:(id)a1;
- (id)initWithChangeSet:(id)a0 changesToSkip:(id)a1;
- (id)valuesForMultiValueKey:(id)a0 basedOn:(id)a1 and:(id)a2;
- (void)addToChanges:(id)a0 forMultiValueKey:(id)a1 basedOn:(id)a2 and:(id)a3;
- (id)initWithChangeSet:(id)a0 changesToKeep:(id)a1;

@end
