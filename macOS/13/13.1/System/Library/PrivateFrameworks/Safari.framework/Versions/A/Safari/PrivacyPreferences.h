@class NSTextField, NSView, NSMenuItem, AcceptedSiteDataSheetController, NSStackView, NSPopUpButton, NSLayoutConstraint, NSButton;

@interface PrivacyPreferences : PreferencesModule {
    AcceptedSiteDataSheetController *_siteDataEditor;
    NSButton *_helpButton;
    NSTextField *applePayLabelTextField;
    NSButton *applePayCapabilityDisclosureAllowedCheckbox;
    NSTextField *_applePaySubtextTextField;
    NSStackView *_hideInternetAddressPreference;
    NSButton *_hideInternetAddressCheckbox;
    NSTextField *_hideInternetAddressSubtext;
    NSPopUpButton *_hideInternetAddressState;
    NSMenuItem *_trackersAndWebsitesPopUpItem;
    NSMenuItem *_onlyTrackersPopUpItem;
}

@property (weak) NSTextField *websiteTrackingLabel;
@property (weak, nonatomic) NSButton *policyEnabledButton;
@property (readonly, nonatomic) int currentBlockStoragePolicy;
@property (weak, nonatomic) NSButton *blockStorageAlwaysButton;
@property (weak) NSButton *manageWebsiteDataButton;
@property (retain, nonatomic) NSLayoutConstraint *applePayLabelTrailingAlignmentConstraint;
@property (retain, nonatomic) NSLayoutConstraint *applePayLabelTrailingHorizontalSpacingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *applePayLabelBottomAlignmentConstraint;
@property (retain, nonatomic) NSLayoutConstraint *applePayCheckboxTopVerticalSpacingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *applePayCheckboxBottomVerticalSpacingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *applePayCheckboxTrailingHorizontalSpacingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *applePayCheckboxLeadingAlignmentConstraint;
@property (retain, nonatomic) NSLayoutConstraint *applePaySubtextLeadingAlignmentConstraint;
@property (retain, nonatomic) NSLayoutConstraint *applePaySubtextBottomVerticalSpacingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *applePaySubtextTrailingHorizontalSpacingConstraint;
@property (weak, nonatomic) NSView *mainContentView;
@property (weak, nonatomic) NSButton *privateAttributionAllowedCheckbox;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)imageForPreferenceNamed:(id)a0;
- (void)moduleWillBeRemoved;
- (void)moduleWasInstalled;
- (void)willBeDisplayed;
- (id)safariHelpAnchor;
- (void)_takeHideInternetAddressPolicyFrom:(id)a0;
- (void)_privacyProxyTrackersAndWebsitesSelected;
- (void)_privacyProxyOnlyTrackersSelected;
- (void)_applePayAvailabilityChanged:(id)a0;
- (void)_updateStoragePolicyButtons;
- (void)_updateHideInternetAddressPreference;
- (void)_removeHideInternetAddressPreferenceIfNeeded;
- (void)_createHideInternetAddressPreferenceIfNeeded;
- (void)_createHideInternetAddressSubtextFieldIfNeeded;
- (void)_updateHideInternetAddressSubtextField;
- (void)_updateApplePayPreferenceVisibility;
- (void)_addApplePayPreferenceIfNecessary;
- (void)_removeApplePayPreferenceIfNecessary;
- (id)_applePayPreferencesConstraints;
- (void)_setApplePaySubtextString;
- (void)openAboutSafariAndPrivacy:(id)a0;
- (void)_openAboutSafariAndPrivacyWebPage;
- (void)showWebsiteDataDetails:(id)a0;
- (void)takeStoragePolicyFrom:(id)a0;
- (void)takePrivateAttributionPolicyFrom:(id)a0;
- (void)_updateBlockStoragePolicyIfNeeded;
- (void)takeApplePayCapabilityDisclosureAllowedFrom:(id)a0;
- (id)_blockStoragePolicyButtons;
- (void)_updateApplePayCapabilityDisclosureAllowedCheckbox;
- (void)_updatePrivateAdAttributionAllowedCheckbox;

@end
