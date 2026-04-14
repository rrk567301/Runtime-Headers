@class CNPropertyDescription;

@interface CNContactKeyValueUpdate : CNContactUpdate

@property (readonly) CNPropertyDescription *property;
@property (readonly) id value;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)applyToABCDContact:(id)a0;
- (void)applyToMutableContact:(id)a0 withIdentifierMap:(id)a1;
- (id)initWithProperty:(id)a0 value:(id)a1;
- (id)posterDataChangeRequestsWithContactIdentifier:(id)a0;

@end
