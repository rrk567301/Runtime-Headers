@class NSTextField;

@interface WebCrashBanner : Banner

@property (weak, nonatomic) NSTextField *descriptionTextField;

+ (int)bannerSortOrder;

- (void).cxx_destruct;
- (id)init;
- (void)awakeFromNib;
- (void)_showDefaultDescriptionText;
- (id)bannerNibName;
- (void)displayBannerType:(long long)a0;

@end
