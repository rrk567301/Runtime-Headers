@class NSString, NSTextField;

@interface AggregatedPasswordsTableCellView : ColorInvertingTableCellView

@property (weak, nonatomic) NSTextField *domainLabel;
@property (weak, nonatomic) NSTextField *moreSitesLabel;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) unsigned long long numberOfSites;

- (void).cxx_destruct;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)awakeFromNib;
- (void)_updateMoreSitesLabel;

@end
