@class CAPackage, NSArray, NSString, NSMutableDictionary, NSDictionary, NSMutableArray, UINSGameModuleEducationView;

@interface UINSInputAlternativesEducationViewController : NSViewController <CALayerDelegate> {
    char _showAllOnboarding;
    char _enabled;
    NSArray *_moduleClasses;
    NSMutableDictionary *_onboardingTextViews;
    NSMutableArray *_onboardingConstraints;
    CAPackage *_onboardingAssetsPackage;
    NSString *_attachedPointingDevice;
    NSDictionary *_devicesDictionary;
    UINSGameModuleEducationView *_educationView;
}

@property (retain, nonatomic) NSArray *moduleClasses;
@property (nonatomic) char showAllOnboarding;
@property (getter=isEnabled) char enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)addOnboardingWithName:(id)a0 title:(id)a1 description:(id)a2 guideLayer:(id)a3 rightAlign:(char)a4;
- (id)attachedPointingDeviceString;
- (id)initWithModules:(id)a0;
- (id)keyboardLayoutName;
- (id)onboardingAssetsFileName;
- (void)refreshDisplayedOnboarding;
- (void)refreshEnabledOnboarding;
- (void)setupOnboardingViews;
- (void)toggleVisibility:(id)a0;

@end
