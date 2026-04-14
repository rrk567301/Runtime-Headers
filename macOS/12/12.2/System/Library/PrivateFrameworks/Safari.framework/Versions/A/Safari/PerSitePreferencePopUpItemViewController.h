@class WBSPerSitePreference, NSString, NSTextField, PerSitePreferencePopUpButton;
@protocol WBSPerSitePreferenceManager;

@interface PerSitePreferencePopUpItemViewController : PreferencesPopoverPopUpItemViewController <PerSitePreferencesPopoverItem> {
    WBSPerSitePreference *_perSitePreference;
    id<WBSPerSitePreferenceManager> _perSitePreferenceManager;
    NSString *_title;
    NSString *_domain;
    NSTextField *_preferenceTitleTextField;
    PerSitePreferencePopUpButton *_permissionsPopUpButton;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)updateStateForDomain:(id)a0;
- (id)initWithPreference:(id)a0 manager:(id)a1 title:(id)a2;
- (void)_updatePreferenceValue:(id)a0;
- (void)_populateMenu:(id)a0 withValuesForPerSitePreference:(id)a1 inManager:(id)a2 selector:(SEL)a3;
- (void)_updatePopUpStateForDomain:(id)a0;
- (void)updateToReflectPreferenceValue:(id)a0;
- (id)preferenceTitleTextField;
- (void)setPreferenceTitleTextField:(id)a0;
- (id)permissionsPopUpButton;
- (void)setPermissionsPopUpButton:(id)a0;

@end
