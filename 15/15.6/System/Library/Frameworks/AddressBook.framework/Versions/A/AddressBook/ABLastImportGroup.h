@interface ABLastImportGroup : ABSpecialGroup

+ (id)specialGroupForAddressBook:(id)a0;
+ (id)sharedLastImportGroup;

- (char)isDeletable;
- (id)members;
- (id)subgroups;
- (id)valueForProperty:(id)a0;
- (id)contactMembershipPredicate;
- (char)canDeletePeople;
- (char)removeSubgroup:(id)a0;
- (id)uniqueIdForDrag;
- (char)addSubgroup:(id)a0;
- (char)isRenamable;
- (id)membersAndSubgroups;

@end
