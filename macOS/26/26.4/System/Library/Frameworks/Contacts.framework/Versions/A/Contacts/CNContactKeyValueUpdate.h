@class CNPropertyDescription;

@interface CNContactKeyValueUpdate : CNContactUpdate

@property (readonly) CNPropertyDescription *property;
@property (readonly) id value;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (void)applyToABCDContact:(id)a0;
- (void)applyToMutableContact:(id)a0 withIdentifierMap:(id)a1;
- (id)initWithProperty:(id)a0 value:(id)a1;
- (id)posterDataChangeRequestsWithContactIdentifier:(id)a0;

@end
