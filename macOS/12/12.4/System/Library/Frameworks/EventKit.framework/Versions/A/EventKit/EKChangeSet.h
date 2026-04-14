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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)addChanges:(id)a0;
- (BOOL)hasChanges;
- (id)changedKeys;
- (id)summary;
- (BOOL)hasUnsavedChanges;
- (BOOL)hasUnsavedChangeForKey:(id)a0;
- (id)initWithChangeSet:(id)a0;
- (id)initWithSingleValueChanges:(id)a0 multiValueAdditions:(id)a1 multiValueRemovals:(id)a2;
- (id)_initWithChangeSet:(id)a0 filter:(id /* block */)a1;
- (void)rollbackChanges;
- (id)changedSingleValueKeys;
- (id)changedMultiValueKeys;
- (BOOL)_isNewAndUnsaved;
- (id)valueForSingleValueKey:(id)a0 basedOn:(id)a1 and:(id)a2;
- (void)changeSingleValue:(id)a0 forKey:(id)a1 basedOn:(id)a2 and:(id)a3;
- (void)forceChangeValue:(id)a0 forKey:(id)a1;
- (id)valuesForMultiValueKey:(id)a0 basedOnSet:(id)a1;
- (void)removeFromChanges:(id)a0 forMultiValueKey:(id)a1 basedOn:(id)a2;
- (void)addToChanges:(id)a0 forMultiValueKey:(id)a1 basedOn:(id)a2;
- (id)_semanticIdentifierToObjectMapForObjects:(id)a0;
- (void)_cleanupEmptySetsForMultiValueKey:(id)a0;
- (void)replaceUniqueMultiValueObjectsWithUpdatedObjects:(id)a0;
- (id)initWithChangeSet:(id)a0 changesToSkip:(id)a1;
- (id)initWithChangeSet:(id)a0 changesToKeep:(id)a1;
- (void)markChangesAsSaved;
- (BOOL)hasUnsavedMultiValueAdditionForKey:(id)a0;
- (id)unsavedMultiValueAddedObjectsForKey:(id)a0;
- (BOOL)hasUnsavedMultiValueRemovalForKey:(id)a0;
- (id)unsavedMultiValueRemovedObjectsForKey:(id)a0;
- (id)valueForSingleValueKey:(id)a0 basedOn:(id)a1;
- (void)changeSingleValue:(id)a0 forKey:(id)a1 basedOn:(id)a2;
- (id)valuesForMultiValueKey:(id)a0 basedOn:(id)a1;
- (BOOL)isUniqueAddedObject:(id)a0 forKey:(id)a1;
- (void)replaceMultiChangeAddedObject:(id)a0 withObject:(id)a1 forKey:(id)a2;
- (void)addChangesAndUpdateUniqueMultiValueObjects:(id)a0;
- (BOOL)skipsPersistentObjectCopy;
- (void)setSkipsPersistentObjectCopy:(BOOL)a0;
- (BOOL)isEffectivelyEqual:(id)a0;

@end
