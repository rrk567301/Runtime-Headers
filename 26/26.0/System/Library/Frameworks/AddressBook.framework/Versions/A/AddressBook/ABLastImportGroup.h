@interface ABLastImportGroup : ABSpecialGroup

+ (id)specialGroupForAddressBook:(id)a0;
+ (id)sharedLastImportGroup;

- (id)valueForProperty:(id)a0;
- (id)members;
- (BOOL)isDeletable;
- (id)subgroups;
- (id)contactMembershipPredicate;
- (BOOL)canDeletePeople;
- (BOOL)removeSubgroup:(id)a0;
- (id)uniqueIdForDrag;
- (BOOL)addSubgroup:(id)a0;
- (BOOL)isRenamable;
- (id)membersAndSubgroups;

@end
