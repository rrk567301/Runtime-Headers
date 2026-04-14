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
- (id)constraintsForInvisibleLabel;
- (id)constraintsForVisibleLabel;
- (id)horizontalDividerConstraints;
- (id)constraintsForVisibleLabelAndInvisibleDividerLine;
- (id)constraintsForVisibleLabelAndVisibleDividerLine;
- (id)constraintsForInvisibleLabelAndInvisibleDividerLine;
- (id)constraintsForInvisibleLabelAndVisibleDividerLine;
- (id)horizontalLabelConstraints;
- (id)horizontalLabelMetrics;
- (id)dividerMetrics;
- (void)updateHeaderConstraints;
- (void)showDividerLine:(BOOL)a0;

@end
