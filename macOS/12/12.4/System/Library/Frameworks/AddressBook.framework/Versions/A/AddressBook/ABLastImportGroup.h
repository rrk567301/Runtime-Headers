@interface ABLastImportGroup : ABSpecialGroup

+ (id)specialGroupForAddressBook:(id)a0;
+ (id)sharedLastImportGroup;

- (BOOL)isDeletable;
- (id)members;
- (id)subgroups;
- (id)valueForProperty:(id)a0;
- (id)contactMembershipPredicate;
- (id)membersAndSubgroups;
- (BOOL)addSubgroup:(id)a0;
- (BOOL)removeSubgroup:(id)a0;
- (BOOL)canDeletePeople;
- (id)uniqueIdForDrag;
- (BOOL)isRenamable;

@end
