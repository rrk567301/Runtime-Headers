@class NSImageView, NSArray, ResponsiveDesignPresetConfiguration, NSString, ResponsiveDesignPresetCollectionView, AccessibleGroupedTextFieldWithVibrancy, NSPopUpButton;

@interface ResponsiveDesignShelfViewController : NSViewController {
    ResponsiveDesignPresetCollectionView *_presetCollectionView;
    AccessibleGroupedTextFieldWithVibrancy *_widthTextField;
    AccessibleGroupedTextFieldWithVibrancy *_heightTextField;
    AccessibleGroupedTextFieldWithVibrancy *_zoomLevelLabel;
    NSPopUpButton *_pixelRatioButton;
    NSPopUpButton *_userAgentButton;
    NSImageView *_warningIcon;
    BOOL _ignoreSelectedPresetConfigurationChange;
    BOOL _ignoreSelectionIndexesChange;
    BOOL _ignoreBrowserSizeChange;
    BOOL _doNotUpdatePresetConfigurationBrowserSize;
    BOOL _savingLastConfigurationSoon;
    BOOL _savingCustomPresetConfigurationsSoon;
}

@property (readonly, nonatomic) NSArray *presetConfigurations;
@property (retain, nonatomic) ResponsiveDesignPresetConfiguration *selectedPresetConfiguration;
@property (nonatomic) struct CGSize { double width; double height; } displayBrowserSize;
@property (nonatomic) double displayZoomLevel;
@property (nonatomic) unsigned long long displayPixelRatio;
@property (copy, nonatomic) NSString *displayUserAgent;

+ (id)keyPathsForValuesAffectingPresetConfigurations;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)loadView;
- (void)viewDidLoad;
- (void)_pixelRatioButtonChanged:(id)a0;
- (void)_userAgentButtonChanged:(id)a0;
- (void)_documentUserAgentChanged:(id)a0;
- (void)webViewDidNavigateOrReload;
- (void)_saveLastConfigurationSoon;
- (void)_saveCustomPresetConfigurationsSoon;

@end
