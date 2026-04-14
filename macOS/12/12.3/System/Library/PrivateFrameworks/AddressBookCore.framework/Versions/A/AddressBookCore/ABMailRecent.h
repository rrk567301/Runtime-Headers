@interface ABMailRecent : ABRecord

- (id)description;
- (id)valueForProperty:(id)a0;
- (id)account;
- (id)parentGroups;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (BOOL)setValue:(id)a0 forProperty:(id)a1 error:(id *)a2 account:(id)a3;
- (id)initWithDictionaryRepresentation:(id)a0 addressBook:(id)a1;
- (BOOL)setValue:(id)a0 forProperty:(id)a1 error:(id *)a2;
- (id)parentGroupsIncludingSubscriptions;

@end
