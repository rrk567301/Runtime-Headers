@class NSString, NSTextField;

@interface AggregatedPasswordsTableCellView : ColorInvertingTableCellView

@property (weak, nonatomic) NSTextField *domainLabel;
@property (weak, nonatomic) NSTextField *moreSitesLabel;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) unsigned long long numberOfSites;
@property (copy, nonatomic) NSString *customTitle;

- (void).cxx_destruct;
- (id)accessibilityChildren;
- (id)accessibilityLabel;
- (id)accessibilityRole;
- (void)awakeFromNib;
- (BOOL)isAccessibilityElement;
- (void)_updateMoreSitesLabel;

@end
