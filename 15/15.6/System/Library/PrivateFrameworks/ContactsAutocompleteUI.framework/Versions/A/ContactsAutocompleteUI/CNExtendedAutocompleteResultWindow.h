@class NSArray;

@interface CNExtendedAutocompleteResultWindow : CNMixedModelAutocompleteResultWindow

@property (retain, nonatomic) NSArray *columnNames;
@property (nonatomic) char iconInColumn;
@property (nonatomic) char hideAccountColumn;

+ (id)columnNames;

- (id)init;
- (void).cxx_destruct;
- (void)setMaxWidth:(double)a0;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)setAutocompleteResults:(id)a0;
- (char)includeAddressForPrefixMatching;
- (id)autocompleteHeaderViewForResult:(id)a0 forTableColumnWithIdentifier:(id)a1;
- (double)defaultWindowWidth;
- (char)isIconInColumn;
- (void)refreshAutocompleteResult:(id)a0;
- (void)updateSizes;
- (id)viewForResult:(id)a0 forTableColumnIdentifier:(id)a1;
- (double)windowWidthForContentWidth:(double)a0;

@end
