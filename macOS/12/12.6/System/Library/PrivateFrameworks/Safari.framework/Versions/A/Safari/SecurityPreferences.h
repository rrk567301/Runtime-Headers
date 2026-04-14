@class NSTextField, NSView, NSTimer, NSButton;

@interface SecurityPreferences : PreferencesModule {
    BOOL _handlingChangedDefaults;
    NSTimer *_statusUpdateTimer;
}

@property (weak, nonatomic) NSView *mainContentView;
@property (weak, nonatomic) NSButton *javaScriptEnabledCheckbox;
@property (weak, nonatomic) NSButton *blockPopUpsCheckbox;
@property (weak, nonatomic) NSButton *antiPhishingCheckbox;
@property (weak, nonatomic) NSTextField *safeBrowsingExplanationLabel;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)moduleWillBeRemoved;
- (void)initializeFromDefaults;
- (void)moduleWasInstalled;
- (id)safariHelpAnchor;
- (void)_updateEverything;
- (void)_defaultsChanged:(id)a0;
- (void)_updateAntiPhishingViews;
- (void)_updateJavaScriptViews;
- (void)toggleAntiPhishingEnabled:(id)a0;
- (void)toggleJavaScriptEnabled:(id)a0;

@end
