@class CNMultiValueDiff, CNMultiValuePropertyDescription;

@interface CNContactMultiValueDiffUpdate : CNContactUpdate

@property (readonly) CNMultiValuePropertyDescription *property;
@property (readonly) CNMultiValueDiff *diff;

- (void).cxx_destruct;
- (id)description;
- (void)applyToABCDContact:(id)a0;
- (void)applyToMutableContact:(id)a0 withIdentifierMap:(id)a1;
- (id)initWithProperty:(id)a0 diff:(id)a1;

@end
