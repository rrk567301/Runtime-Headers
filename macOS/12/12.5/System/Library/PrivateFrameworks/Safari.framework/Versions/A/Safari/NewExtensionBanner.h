@class NSImageView, NSTextField, NSArray, NSButton;

@interface NewExtensionBanner : Banner {
    NSArray *_extensionWrappers;
    long long _extensionEnablementMode;
}

@property (weak, nonatomic) NSTextField *titleLabel;
@property (weak, nonatomic) NSTextField *descriptionLabel;
@property (weak) NSButton *extensionPreferencesButton;
@property (weak) NSImageView *extensionsPuzzlePieceImageView;
@property (weak) NSButton *dismissBannerButton;

- (id)init;
- (void).cxx_destruct;
- (id)bannerNibName;
- (void)setUpForExtensions:(id)a0;
- (void)dismissBanner:(id)a0;
- (long long)_extensionEnablementModeForExtensions:(id)a0;
- (id)_buttonTitleForExtensionCount:(unsigned long long)a0 enablementMode:(long long)a1;
- (void)_turnOnOrOpenPreferences:(id)a0;

@end
