@interface BrowserParentalControls : NSObject

@property (readonly, nonatomic) BOOL parentalControlsEnabled;
@property (readonly, nonatomic) BOOL isManagedUser;
@property (readonly, nonatomic) BOOL adultContentFilterEnabled;
@property (readonly, nonatomic) BOOL shouldFillWithBuiltInBookmarks;

+ (id)sharedParentalControls;

- (id)init;
- (void)dealloc;
- (BOOL)_adultContentFilterEnabled;
- (void)_mcxPreferencesChanged:(id)a0;
- (BOOL)_parentalControlsEnabled;
- (void)_updateAdultContentFilterEnabled;
- (void)_updateParentalControlsEnabled;
- (BOOL)_userHasWebSiteRestrictions;
- (void)notifyFamilyControlsParentChangedBookmarks:(id)a0;

@end
