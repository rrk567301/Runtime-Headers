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
+ (id)uniqueIdentifierForREMObject:(id)a0;
+ (BOOL)canCommitSelf;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0;
- (id)uniqueIdentifier;
- (id)changeSet;
- (BOOL)isFrozen;
- (BOOL)existsInStore;
- (BOOL)isNew;
- (int)entityType;
- (BOOL)isPartialObject;
- (id)initWithREMObject:(id)a0 inStore:(id)a1 withChanges:(id)a2;
- (id)remObjectID;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;
- (id)existingMeltedObject;
- (id)frozenObject;
- (BOOL)isPropertyUnavailable:(id)a0;
- (BOOL)isCompletelyEqual:(id)a0;
- (BOOL)isEqual:(id)a0 ignoringProperties:(id)a1;
- (id)semanticIdentifier;
- (id)updateParentToCommitSelf:(id)a0;
- (id)initWithREMObject:(id)a0 inStore:(id)a1;
- (id)REMObject;
- (id)updatedFrozenObjectWithChanges:(id)a0;
- (id)updatedFrozenObjectWithChanges:(id)a0 updatedChildren:(id)a1;
- (id)valueForSingleValueKey:(id)a0 backingValue:(id /* block */)a1;

@end
