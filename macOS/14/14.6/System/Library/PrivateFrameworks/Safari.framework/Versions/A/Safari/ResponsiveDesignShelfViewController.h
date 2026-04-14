@class NSString, NSView, TextFieldWithVibrancy, NSPopUpButton, OpenPageWithSimulatorMenuController;

@interface ResponsiveDesignShelfViewController : NSViewController <NSTextFieldDelegate> {
    TextFieldWithVibrancy *_widthTextField;
    TextFieldWithVibrancy *_heightTextField;
    TextFieldWithVibrancy *_zoomLevelLabel;
    NSPopUpButton *_pixelRatioButton;
    NSPopUpButton *_openPageWithSimulatorPopupMenuButton;
    OpenPageWithSimulatorMenuController *_openPageWithSimulatorMenuController;
    BOOL _doNotUpdateBrowserSizeTextFields;
    BOOL _doNotUpdatePresetConfigurationBrowserSize;
    BOOL _savingLastConfigurationSoon;
    BOOL _savingCustomPresetConfigurationsSoon;
}

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
- (BOOL)_isValidViewportDimension:(long long)a0;
- (void)_markTextField:(id)a0 valid:(BOOL)a1;
- (void)_pixelRatioButtonChanged:(id)a0;
- (void)_saveLastConfigurationSoon;
- (long long)_validatedViewportDimension:(long long)a0;

@end
