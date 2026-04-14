@interface ABSpecialGroup : ABGroup

+ (id)_table;

- (id)contactMembershipPredicate;
- (id)initWithAddressBook:(id)a0;
- (BOOL)isSpecialGroup;
- (id)initWithUniqueId:(id)a0 addressBook:(id)a1;
- (BOOL)doesPropertyExist:(id)a0;

@end
