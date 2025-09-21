@class NSString;

@interface PTDefaults : BSAbstractDefaultDomain

@property (retain, nonatomic) NSString *testRecipeIdentifier;
@property (retain, nonatomic) NSString *testRecipeDescription;
@property (nonatomic) char testRecipeEatsVolumeUp;
@property (nonatomic) char testRecipeEatsVolumeDown;
@property (nonatomic) char testRecipeEatsRingerSwitch;
@property (nonatomic) char testRecipeEatsRingerButton;
@property (nonatomic) char shouldClearSettingsArchivesForMigration;
@property (nonatomic) char shouldClearPrototypeCachesForMigration;
@property (nonatomic) char ringerButtonShowsUI;
@property (nonatomic) char ringerSwitchShowsUI;
@property (nonatomic) char volumeUpShowsUI;
@property (nonatomic) char volumeDownShowsUI;
@property (nonatomic) char prototypeSettingsEnabled;
@property (nonatomic) char activePrototypingEnabled;
@property (nonatomic) char remotePrototypingEnabled;
@property (nonatomic) char multiWindowEnabled;

+ (id)sharedInstance;

- (void)_bindAndRegisterDefaults;
- (id)_eventDefaults;
- (char)_eventShowsUI:(long long)a0;
- (id)_testRecipeDefaults;
- (id)activeTestRecipeDescription;
- (char)activeTestRecipeEatsEvent:(long long)a0;
- (id)activeTestRecipeEventDescription;
- (id)activeTestRecipeIdentifier;
- (char)canEditShowsUIForEvent:(long long)a0;
- (void)deactivateTestRecipe;
- (char)displayedShowsUIValueForEvent:(long long)a0;
- (id)observeEventDefaultsOnQueue:(id)a0 withBlock:(id /* block */)a1;
- (id)observeShowUISwitchDefaultsOnQueue:(id)a0 withBlock:(id /* block */)a1;
- (id)observeTestRecipeDefaultsOnQueue:(id)a0 withBlock:(id /* block */)a1;
- (char)prototypingServerWantsEvent:(long long)a0;
- (void)setShowsUI:(char)a0 forEvent:(long long)a1;
- (char)testRecipeIsActive;

@end
