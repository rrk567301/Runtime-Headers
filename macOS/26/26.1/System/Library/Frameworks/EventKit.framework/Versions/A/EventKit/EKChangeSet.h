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

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEffectivelyEqual:(id)a0;
- (BOOL)hasChanges;
- (id)initWithChangeSet:(id)a0 changesToKeep:(id)a1;
- (void)_cleanupEmptySetsForMultiValueKey:(id)a0;
- (void)addChanges:(id)a0 shouldCopyKeyCallback:(id /* block */)a1;
- (id)changedKeys;
- (id)summary;
- (BOOL)isUniqueAddedObject:(id)a0 forKey:(id)a1;
- (void)replaceMultiChangeAddedObject:(id)a0 withObject:(id)a1 forKey:(id)a2;
- (id)changedSingleValueKeys;
- (void)changeSingleValue:(id)a0 forKey:(id)a1 basedOn:(id)a2 and:(id)a3;
- (id)valuesForMultiValueKey:(id)a0 basedOn:(id)a1 and:(id)a2;
- (void)removeFromChanges:(id)a0 forMultiValueKey:(id)a1 basedOn:(id)a2 and:(id)a3;
- (id)valueForSingleValueKey:(id)a0 basedOn:(id)a1;
- (void)forceChangeValue:(id)a0 forKey:(id)a1;
- (void)rollbackChangesForKeys:(id)a0;
- (id)unsavedMultiValueRemovedObjectsForKey:(id)a0;
- (void)replaceUniqueMultiValueObjectsWithUpdatedObjects:(id)a0;
- (void)addChanges:(id)a0;
- (void)removeAllChangesExceptRemovals;
- (id)_initWithChangeSet:(id)a0 filter:(id /* block */)a1;
- (id)initWithChangeSet:(id)a0;
- (id)valueForSingleValueKey:(id)a0 basedOn:(id)a1 and:(id)a2;
- (id)description;
- (id)valuesForMultiValueKey:(id)a0 basedOnSet:(id)a1;
- (BOOL)hasUnsavedChanges;
- (id)initWithChangeSet:(id)a0 filter:(id /* block */)a1;
- (void)rollbackChanges;
- (id)changedMultiValueKeys;
- (void)markChangesAsSaved;
- (void)addToChanges:(id)a0 forMultiValueKey:(id)a1 basedOn:(id)a2 and:(id)a3 shouldCopyKeyCallback:(id /* block */)a4 objectIdentifierBlock:(id /* block */)a5;
- (void).cxx_destruct;
- (void)changeSingleValue:(id)a0 forKey:(id)a1 basedOn:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addToChanges:(id)a0 forMultiValueKey:(id)a1 basedOn:(id)a2 and:(id)a3;
- (id)unsavedMultiValueAddedObjectsForKey:(id)a0;
- (BOOL)hasUnsavedMultiValueAdditionForKey:(id)a0;
- (BOOL)skipsPersistentObjectCopy;
- (id)_uniqueIdentifierToObjectMapForObjects:(id)a0 identifierBlock:(id /* block */)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithSingleValueChanges:(id)a0 multiValueAdditions:(id)a1 multiValueRemovals:(id)a2;
- (void)removeFromChanges:(id)a0 forMultiValueKey:(id)a1 basedOn:(id)a2 and:(id)a3 objectIdentifierBlock:(id /* block */)a4;
- (id)initWithChangeSet:(id)a0 changesToSkip:(id)a1;
- (void)addChanges:(id)a0 shouldCopyKeyCallback:(id /* block */)a1 objectIdentifierBlock:(id /* block */)a2;
- (void)setSkipsPersistentObjectCopy:(BOOL)a0;
- (BOOL)_isNewAndUnsaved;
- (id)init;
- (BOOL)hasUnsavedChangeForKey:(id)a0;
- (void)addChangesAndUpdateUniqueMultiValueObjects:(id)a0;
- (BOOL)hasUnsavedMultiValueRemovalForKey:(id)a0;

@end
