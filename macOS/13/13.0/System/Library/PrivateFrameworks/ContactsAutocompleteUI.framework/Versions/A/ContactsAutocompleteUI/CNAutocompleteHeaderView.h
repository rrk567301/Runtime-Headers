@class NSTextField, NSArray, CNAutocompleteSeparatorView, NSString;

@interface CNAutocompleteHeaderView : NSTableCellView

@property (retain, nonatomic) NSTextField *label;
@property (retain, nonatomic) NSArray *headerConstraints;
@property (readonly, nonatomic) CNAutocompleteSeparatorView *dividerLine;
@property (nonatomic) BOOL showDividerLine;
@property (nonatomic) unsigned long long dividerType;
@property (nonatomic) NSString *labelString;

+ (id)label;

- (id)init;
- (void).cxx_destruct;
- (id)viewsByName;
- (id)initWithLabelString:(id)a0 showsDividerLine:(BOOL)a1;
- (void)updateHeaderConstraints;
- (id)constraintsForVisibleLabel;
- (id)constraintsForInvisibleLabel;
- (id)constraintsForVisibleLabelAndVisibleDividerLine;
- (id)constraintsForVisibleLabelAndInvisibleDividerLine;
- (id)constraintsForInvisibleLabelAndVisibleDividerLine;
- (id)constraintsForInvisibleLabelAndInvisibleDividerLine;
- (id)horizontalLabelConstraints;
- (id)horizontalDividerConstraints;
- (id)horizontalLabelMetrics;
- (id)dividerMetrics;
- (void)showDividerLine:(BOOL)a0;

@end
