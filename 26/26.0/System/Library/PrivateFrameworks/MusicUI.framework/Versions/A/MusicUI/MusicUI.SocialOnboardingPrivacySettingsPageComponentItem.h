@interface MusicUI.SocialOnboardingPrivacySettingsPageComponentItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ shouldDisplayUserSettings;
    void /* unknown type, empty encoding */ pageFooterPrimaryButtonClickedObserver;
    void /* unknown type, empty encoding */ topSeparatorView;
    void /* unknown type, empty encoding */ bottomSeparatorView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_everyoneRadioButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_peopleYouApproveRadioButton;
    void /* unknown type, empty encoding */ friendRecommendationsLabel;
    void /* unknown type, empty encoding */ allowContactsCheckSelector;
    void /* unknown type, empty encoding */ allowFindingUserSelector;
}

- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)viewWillLayout;
- (void)onRadioButtonClicked:(id)a0;

@end
