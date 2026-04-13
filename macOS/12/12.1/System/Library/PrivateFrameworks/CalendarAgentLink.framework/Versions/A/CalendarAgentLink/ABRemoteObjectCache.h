@class NSMutableSet, NSMutableDictionary;

@interface ABRemoteObjectCache : NSObject <NSSecureCoding> {
    NSMutableSet *_addedCustomProperties;
    NSMutableDictionary *_addedMembers;
    NSMutableDictionary *_addedSubGroups;
    NSMutableSet *_addedRecords;
    NSMutableSet *_changedCustomProperties;
    NSMutableSet *_changedRecords;
    NSMutableSet *_deletedCustomProperties;
    NSMutableSet *_deletedRecords;
    NSMutableDictionary *_removedMembers;
    NSMutableDictionary *_removedSubGroups;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)description;
- (id)init;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)changedCustomProperties;
- (id)deletedRecords;
- (id)deletedGroups;
- (void)addMember:(id)a0 toGroup:(id)a1;
- (void)removeMember:(id)a0 fromGroup:(id)a1;
- (id)_allSets;
- (id)_allDictionaries;
- (id)changedRecords;
- (void)insertChangedRecord:(id)a0;
- (void)_mergeDictionary:(id)a0 withDictionary:(id)a1;
- (id)addedRecords;
- (id)_filterSet:(id)a0 forObjectsOfClass:(Class)a1;
- (void)_addObject:(id)a0 withGroup:(id)a1 toDictionary:(id)a2;
- (void)_removeObject:(id)a0 withGroup:(id)a1 fromDictionary:(id)a2;
- (void)_removeRecord:(id)a0 fromMemberDictionary:(id)a1;
- (void)mergeCache:(id)a0;
- (void)updateModificationDatesForRecords;
- (void)insertAddedCustomProperty:(id)a0;
- (void)insertChangedCustomProperty:(id)a0;
- (void)insertDeletedCustomProperty:(id)a0;
- (id)addedCustomProperties;
- (id)deletedCustomProperties;
- (id)addedGroups;
- (id)changedGroups;
- (id)addedMembers;
- (id)removedMembers;
- (id)addedSubGroups;
- (void)addSubGroup:(id)a0 toGroup:(id)a1;
- (id)removedSubGroups;
- (void)removeSubGroup:(id)a0 fromGroup:(id)a1;
- (id)addedPeople;
- (id)changedPeople;
- (id)deletedPeople;
- (void)insertAddedRecord:(id)a0 withAccountIdentifier:(id)a1;
- (void)insertDeletedRecord:(id)a0;

@end
