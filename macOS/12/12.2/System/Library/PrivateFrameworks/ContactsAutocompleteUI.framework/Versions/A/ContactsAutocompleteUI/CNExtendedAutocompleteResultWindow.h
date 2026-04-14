@class NSArray;

@interface CNExtendedAutocompleteResultWindow : CNMixedModelAutocompleteResultWindow

@property (retain, nonatomic) NSArray *columnNames;
@property (nonatomic) BOOL iconInColumn;
@property (nonatomic) BOOL hideAccountColumn;

+ (id)columnNames;

- (id)init;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (void)setMaxWidth:(double)a0;
- (void)setAutocompleteResults:(id)a0;
- (double)defaultWindowWidth;
- (void)updateSizes;
- (BOOL)includeAddressForPrefixMatching;
- (void)refreshAutocompleteResult:(id)a0;
- (BOOL)isIconInColumn;
- (id)viewForResult:(id)a0 forTableColumnIdentifier:(id)a1;
- (id)autocompleteHeaderViewForResult:(id)a0 forTableColumnWithIdentifier:(id)a1;
- (double)windowWidthForContentWidth:(double)a0;

@end
