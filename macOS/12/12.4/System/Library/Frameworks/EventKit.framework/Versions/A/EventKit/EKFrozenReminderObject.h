@class NSArray, EKReminderStore, EKChangeSet;

@interface EKFrozenReminderObject : EKFrozenObject {
    EKChangeSet *_changeSet;
    EKReminderStore *_reminderStore;
    id _remObject;
}

@property (readonly, nonatomic) EKChangeSet *uncommittedChanges;
@property (copy, nonatomic) NSArray *path;

+ (Class)meltedClass;
+ (id)propertiesUnavailableForPartialObjects;
+ (Class)frozenClass;
+ (id)frozenObjectForObject:(id)a0;
+ (BOOL)canCommitSelf;
+ (id)uniqueIdentifierForREMObject:(id)a0;

- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)changeSet;
- (BOOL)isFrozen;
- (BOOL)isNew;
- (BOOL)isPartialObject;
- (BOOL)canBeConvertedToFullObject;
- (BOOL)isPropertyUnavailable:(id)a0;
- (id)preFrozenRelationshipObjects;
- (id)semanticIdentifier;
- (id)frozenObject;
- (id)remObjectID;
- (BOOL)isCompletelyEqual:(id)a0;
- (id)updatedFrozenObjectWithChanges:(id)a0;
- (id)existingMeltedObject;
- (BOOL)isEqual:(id)a0 ignoringProperties:(id)a1;
- (id)initWithREMObject:(id)a0 inStore:(id)a1 withChanges:(id)a2;
- (id)valueForSingleValueKey:(id)a0 backingValue:(id /* block */)a1;
- (id)initWithREMObject:(id)a0 inStore:(id)a1;
- (id)updateParentToCommitSelf:(id)a0;
- (id)updatedFrozenObjectWithChanges:(id)a0 updatedChildren:(id)a1;
- (id)REMObject;
- (BOOL)_applyChangesToSaveRequest:(id)a0 error:(id *)a1;

@end
