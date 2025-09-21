@class NSArray, EKReminderStore, EKChangeSet;

@interface EKFrozenReminderObject : EKPersistentObject {
    EKChangeSet *_changeSet;
    EKReminderStore *_reminderStore;
    id _remObject;
}

@property (readonly, nonatomic) EKChangeSet *uncommittedChanges;
@property (copy, nonatomic) NSArray *path;

+ (char)canCommitSelf;
+ (Class)frozenClass;
+ (Class)meltedClass;
+ (id)uniqueIdentifierForREMObject:(id)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)changeSet;
- (char)isFrozen;
- (char)isNew;
- (char)existsInStore;
- (int)entityType;
- (id)REMObject;
- (char)isPartialObject;
- (id)updatedFrozenObjectWithChanges:(id)a0;
- (char)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (id)existingMeltedObject;
- (id)frozenObject;
- (id)initWithREMObject:(id)a0 inStore:(id)a1;
- (id)initWithREMObject:(id)a0 inStore:(id)a1 withChanges:(id)a2;
- (char)isCompletelyEqual:(id)a0;
- (char)isEqual:(id)a0 ignoringProperties:(id)a1;
- (char)isPropertyUnavailable:(id)a0;
- (id)remObjectID;
- (id)semanticIdentifier;
- (id)updateParentToCommitSelf:(id)a0;
- (id)updatedFrozenObjectWithChanges:(id)a0 updatedChildren:(id)a1;
- (id)valueForSingleValueKey:(id)a0 backingValue:(id /* block */)a1;

@end
