@class RolloverImageButton, NSTextField;

@interface PrivateBrowsingExplanationBanner : Banner

@property (weak, nonatomic) NSTextField *titleText;
@property (weak, nonatomic) NSTextField *descriptionText;
@property (weak, nonatomic) RolloverImageButton *closeButton;

+ (int)bannerSortOrder;

- (id)init;
- (void).cxx_destruct;
- (id)bannerNibName;

@end
