@class NSArray, PKPaymentAuthorizationDataModel, NSMenu, PKContactFormatValidator, NSMenuItem;

@interface PKPaymentPreferenceController : NSObject

@property (retain, nonatomic) NSMenu *menu;
@property (copy, nonatomic) id /* block */ handler;
@property (retain, nonatomic) PKPaymentAuthorizationDataModel *model;
@property (retain, nonatomic) NSArray *preferences;
@property (retain, nonatomic) PKContactFormatValidator *contactFormatValidator;
@property (readonly, nonatomic) NSMenuItem *selectedMenuItem;

- (void).cxx_destruct;
- (id)titleForSection:(long long)a0;
- (void)updatePreferences;
- (void)invalidateMenu;
- (long long)numberOfMenuItemsInSection:(long long)a0;
- (BOOL)canSelectPreference:(id)a0 preferenceIndex:(unsigned long long)a1 subItemIndex:(unsigned long long)a2;
- (long long)numberOfSubItemInPreference:(id)a0 preferenceIndex:(long long)a1;
- (id)titleForSubItemInPreference:(id)a0 preferenceIndex:(long long)a1 subItemIndex:(long long)a2;
- (BOOL)shouldEnableSubItemInPreference:(id)a0 preferenceIndex:(long long)a1 subItemIndex:(long long)a2;
- (void)_handlePreferenceSelectionMenuItemIndex:(long long)a0 subMenuItemIndex:(long long)a1;
- (long long)numberOfSectionsInMenu;
- (BOOL)shouldAddSeparatorForSection:(long long)a0;
- (id)preferenceViewForTitleOfSection:(long long)a0;
- (id)_menuItemWithPreferenceView:(id)a0;
- (id)preferenceViewForPreference:(id)a0 atIndex:(long long)a1;
- (void)handleSubmenuSelection:(id)a0;
- (void)handleMenuSelection:(id)a0;

@end
