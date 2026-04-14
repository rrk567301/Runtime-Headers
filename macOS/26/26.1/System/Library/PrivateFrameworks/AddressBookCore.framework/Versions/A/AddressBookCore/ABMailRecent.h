@interface ABMailRecent : ABRecord

- (id)account;
- (id)description;
- (id)valueForProperty:(id)a0;
- (id)parentGroups;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (id)initWithDictionaryRepresentation:(id)a0 addressBook:(id)a1;
- (id)parentGroupsIncludingSubscriptions;
- (BOOL)setValue:(id)a0 forProperty:(id)a1 error:(id *)a2;
- (BOOL)setValue:(id)a0 forProperty:(id)a1 error:(id *)a2 account:(id)a3;

@end
