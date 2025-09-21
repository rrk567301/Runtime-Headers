@class NSView, NSString, OpenPageWithSimulatorMenuController, ResponsiveDesignViewportPresetMenuController, NSPopUpButton, TextFieldWithVibrancy, ResponsiveDesignPresetConfiguration, NSButton;

@interface ResponsiveDesignShelfViewController : NSViewController <NSTextFieldDelegate, ResponsiveDesignViewportPresetMenuDelegate> {
    TextFieldWithVibrancy *_widthTextField;
    TextFieldWithVibrancy *_heightTextField;
    TextFieldWithVibrancy *_zoomLevelLabel;
    NSPopUpButton *_pixelRatioButton;
    NSPopUpButton *_openPageWithSimulatorPopupMenuButton;
    OpenPageWithSimulatorMenuController *_openPageWithSimulatorMenuController;
    NSPopUpButton *_viewportPresetPopUpMenuButton;
    ResponsiveDesignViewportPresetMenuController *_viewportPresetMenuController;
    NSButton *_rotateViewportButton;
    char _doNotUpdateBrowserSizeTextFields;
    char _isApplyingPreset;
    char _doNotUpdatePresetConfigurationBrowserSize;
    char _savingLastConfigurationSoon;
    char _savingCustomPresetConfigurationsSoon;
}

@property (retain, nonatomic) ResponsiveDesignPresetConfiguration *selectedPresetConfiguration;
@property (readonly, nonatomic) NSView *lastKeyView;
@property (nonatomic) struct CGSize { double width; double height; } displayBrowserSize;
@property (nonatomic) double displayZoomLevel;
@property (nonatomic) unsigned long long displayPixelRatio;
@property (copy, nonatomic) NSString *displayUserAgent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)controlTextDidChange:(id)a0;
- (void)controlTextDidEndEditing:(id)a0;
- (void)loadView;
- (void)viewDidLoad;
- (void)_applyPresetConfigurationValues:(id)a0;
- (char)_isValidViewportDimension:(long long)a0;
- (void)_markTextField:(id)a0 valid:(char)a1;
- (void)_pixelRatioButtonChanged:(id)a0;
- (void)_rotateViewportButtonChanged:(id)a0;
- (void)_saveLastConfigurationSoon;
- (void)_selectViewportPresetMenuItemWithKey:(id)a0;
- (void)_updateSelectedPresetConfiguration;
- (long long)_validatedViewportDimension:(long long)a0;
- (void)setSelectedPresetConfiguration:(id)a0 skipApplyingPresetValues:(char)a1;

@end
