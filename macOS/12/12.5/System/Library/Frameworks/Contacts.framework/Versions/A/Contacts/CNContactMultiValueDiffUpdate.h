@class CNMultiValueDiff, CNMultiValuePropertyDescription;

@interface CNContactMultiValueDiffUpdate : CNContactUpdate

@property (readonly) CNMultiValuePropertyDescription *property;
@property (readonly) CNMultiValueDiff *diff;

- (id)description;
- (void).cxx_destruct;
- (void)applyToMutableContact:(id)a0 withIdentifierMap:(id)a1;
- (void)applyToABCDContact:(id)a0;
- (id)initWithProperty:(id)a0 diff:(id)a1;

@end
