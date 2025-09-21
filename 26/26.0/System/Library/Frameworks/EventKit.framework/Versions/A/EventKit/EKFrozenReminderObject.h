@class NSArray, EKReminderStore, EKChangeSet;

@interface EKFrozenReminderObject : EKPersistentObject {
    EKChangeSet *_changeSet;
    EKReminderStore *_reminderStore;
    id _remObject;
}

@property (readonly, nonatomic) EKChangeSet *uncommittedChanges;
@property (copy, nonatomic) NSArray *path;

+ (Class)frozenClass;
+ (Class)meltedClass;
+ (BOOL)canCommitSelf;
+ (id)uniqueIdentifierForREMObject:(id)a0;

- (id)remObjectID;
- (id)changeSet;
- (BOOL)isNew;
- (int)entityType;
- (BOOL)isFrozen;
- (id)semanticIdentifier;
- (id)uniqueIdentifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)existsInStore;
- (id)REMObject;
- (BOOL)isPartialObject;
- (id)updatedFrozenObjectWithChanges:(id)a0;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (id)existingMeltedObject;
- (id)frozenObject;
- (id)initWithREMObject:(id)a0 inStore:(id)a1;
- (id)initWithREMObject:(id)a0 inStore:(id)a1 withChanges:(id)a2;
- (BOOL)isCompletelyEqual:(id)a0;
- (BOOL)isEqual:(id)a0 ignoringProperties:(id)a1;
- (BOOL)isPropertyUnavailable:(id)a0;
- (id)updateParentToCommitSelf:(id)a0;
- (id)updatedFrozenObjectWithChanges:(id)a0 updatedChildren:(id)a1;
- (id)valueForSingleValueKey:(id)a0 backingValue:(id /* block */)a1;

@end
