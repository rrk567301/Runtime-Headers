@class NSTextField;

@interface WebCrashBanner : Banner

@property (weak, nonatomic) NSTextField *descriptionTextField;

+ (int)bannerSortOrder;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)bannerNibName;
- (void)displayBannerType:(long long)a0;
- (void)_showDefaultDescriptionText;

@end
