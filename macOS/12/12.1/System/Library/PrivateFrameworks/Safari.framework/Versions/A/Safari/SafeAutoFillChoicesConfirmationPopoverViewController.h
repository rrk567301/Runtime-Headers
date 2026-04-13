@class NSTextField, NSString, NSArray, NSStackView, NSDictionary, NSMutableDictionary, CNContact, NSMutableSet, NSImageView, NSButton;

@interface SafeAutoFillChoicesConfirmationPopoverViewController : NSViewController <NSPopoverDelegate, SafeAutoFillChoicesPopUpButtonViewControllerDelegate> {
    NSDictionary *_displayData;
    NSString *_contactName;
    NSTextField *_textFieldForFittingSize;
    NSArray *_popUpButtonViewControllers;
    BOOL _isNameFieldGoingToBeFilled;
    NSMutableDictionary *_initiallySelectedAddressBookPropertiesToIdentifiersMap;
    CNContact *_contact;
    NSMutableSet *_availableLabels;
    NSArray *_addressBookMatchesForContact;
    NSMutableDictionary *_addressBookLabelsToPropertyNamesToPropertyIndexes;
}

@property (weak, nonatomic) NSStackView *addressBookDisplayDataStackView;
@property (weak, nonatomic) NSButton *autoFillButton;
@property (weak, nonatomic) NSButton *cancelButton;
@property (weak, nonatomic) NSTextField *contactNameLabel;
@property (weak, nonatomic) NSImageView *contactImageView;
@property (nonatomic) void *safeAutoFillConfirmationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)test_sortKeysForDisplayOrder:(id)a0;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)popoverDidShow:(id)a0;
- (void)popoverWillClose:(id)a0;
- (void)_createAddressBookLabelsToPropertyNamesToPropertyIndexesMap;
- (id)_initialLabelForAddressBookDataInPopover;
- (void)_setDisplayDataAndContactNameFromArray:(id)a0;
- (void)_setContactImageViewPropertiesForCircularImage;
- (void)_addPopUpButtonsToStackView;
- (void)_alignSectionTitlesInPopUpButtons;
- (void)_constrainStackViewWithPopupButton;
- (void)_updateAutoFillButtonState;
- (id)preferredAddressBookDataFromArray:(id)a0;
- (void)_addPopUpButtonsToStackViewWithAddressBookDisplayData:(id)a0 popUpButtonViewControllers:(id)a1;
- (double)_maximumPopupMenuWidth;
- (id)_preferredIdentifiersFromSelectionsInPopover;
- (BOOL)_customizationsWereMadeInPopover;
- (id)_controlIDToAutoFillValues;
- (id)_addressBookMatchesToFillFromSelectionsInPopover;
- (id)_addressBookMatchesForDoNotFillFromSelectionsInPopover;
- (void)safeAutoFillChoicesPopUpButtonViewControllerDidChangeSelection:(id)a0;
- (id)initWithSafeAutoFillConfirmationController:(void *)a0 addressBookDisplayData:(id)a1 autoFillMatches:(id)a2;
- (void)_cancelAutoFill:(id)a0;
- (void)_acceptAutoFill:(id)a0;

@end
