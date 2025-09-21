@class NSString, KHProductFamilyItem, KHUXProductFamilyView;

@interface KHUXProductFamilyViewController : UXViewController

@property (readonly, nonatomic) KHProductFamilyItem *familyItem;
@property (readonly, nonatomic) KHUXProductFamilyView *productFamilyView;
@property (copy, nonatomic) id /* block */ productSubgroupSelectionHandler;
@property (copy, nonatomic) NSString *countryCode;
@property (nonatomic) char selected;
@property (nonatomic) char compactMode;

+ (id)newLabel;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)setSelected:(char)a0 animated:(char)a1;
- (id)containerViewForProductSubgroups:(id)a0 maxSubgroupCount:(unsigned long long)a1;
- (id)initWithFamilyItem:(id)a0;
- (void)productSubgroupSelected:(id)a0;

@end
