@interface BrowserParentalControls : NSObject

@property (readonly, nonatomic) char parentalControlsEnabled;
@property (readonly, nonatomic) char adultContentFilterEnabled;
@property (readonly, nonatomic) char shouldFillWithBuiltInBookmarks;

+ (id)sharedParentalControls;

- (void)dealloc;
- (id)init;
- (char)_adultContentFilterEnabled;
- (char)_isManagedUser;
- (void)_mcxPreferencesChanged:(id)a0;
- (char)_parentalControlsEnabled;
- (void)_updateAdultContentFilterEnabled;
- (void)_updateParentalControlsEnabled;
- (char)_userHasWebSiteRestrictions;
- (void)notifyFamilyControlsParentChangedBookmarks:(id)a0;

@end
