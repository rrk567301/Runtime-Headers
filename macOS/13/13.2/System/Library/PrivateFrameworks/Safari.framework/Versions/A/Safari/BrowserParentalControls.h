@interface BrowserParentalControls : NSObject

@property (readonly, nonatomic) BOOL parentalControlsEnabled;
@property (readonly, nonatomic) BOOL adultContentFilterEnabled;
@property (readonly, nonatomic) BOOL shouldFillWithBuiltInBookmarks;

+ (id)sharedParentalControls;

- (void)dealloc;
- (id)init;
- (BOOL)_parentalControlsEnabled;
- (void)_mcxPreferencesChanged:(id)a0;
- (void)notifyFamilyControlsParentChangedBookmarks:(id)a0;
- (void)_updateParentalControlsEnabled;
- (BOOL)_adultContentFilterEnabled;
- (void)_updateAdultContentFilterEnabled;
- (BOOL)_isManagedUser;
- (BOOL)_userHasWebSiteRestrictions;

@end
