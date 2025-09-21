@interface ABMailRecent : ABRecord

- (id)description;
- (id)account;
- (id)valueForProperty:(id)a0;
- (id)parentGroups;
- (char)setValue:(id)a0 forProperty:(id)a1;
- (id)initWithDictionaryRepresentation:(id)a0 addressBook:(id)a1;
- (id)parentGroupsIncludingSubscriptions;
- (char)setValue:(id)a0 forProperty:(id)a1 error:(id *)a2;
- (char)setValue:(id)a0 forProperty:(id)a1 error:(id *)a2 account:(id)a3;

@end
