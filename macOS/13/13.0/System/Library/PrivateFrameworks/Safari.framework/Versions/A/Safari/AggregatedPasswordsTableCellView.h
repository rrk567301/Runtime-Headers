@class NSString, NSTextField;

@interface AggregatedPasswordsTableCellView : ColorInvertingTableCellView

@property (weak, nonatomic) NSTextField *domainLabel;
@property (weak, nonatomic) NSTextField *moreSitesLabel;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) unsigned long long numberOfSites;

- (void).cxx_destruct;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (id)accessibilityChildren;
- (void)awakeFromNib;
- (void)_updateMoreSitesLabel;

@end
