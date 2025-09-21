@interface ABSpecialGroup : ABGroup

+ (id)_table;

- (id)contactMembershipPredicate;
- (char)doesPropertyExist:(id)a0;
- (id)initWithAddressBook:(id)a0;
- (id)initWithUniqueId:(id)a0 addressBook:(id)a1;
- (char)isSpecialGroup;

@end
