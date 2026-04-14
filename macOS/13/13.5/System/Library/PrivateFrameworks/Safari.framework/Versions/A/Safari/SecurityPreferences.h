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
@property (weak, nonatomic) NSView *safeBrowsingExplanationView;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)initializeFromDefaults;
- (void)moduleWasInstalled;
- (void)moduleWillBeRemoved;
- (void)_defaultsChanged:(id)a0;
- (void)_updateAntiPhishingViews;
- (void)_updateEverything;
- (void)_updateJavaScriptViews;
- (id)safariHelpAnchor;
- (void)toggleAntiPhishingEnabled:(id)a0;
- (void)toggleJavaScriptEnabled:(id)a0;

@end
