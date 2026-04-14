@class SiriUIBuddyController, NSArray, SSRVoiceProfile, NSString, VTUITrainingViewController;

@interface SiriUIBuddyVoiceTriggerController : NSViewController <VTUITrainingViewControllerDelegate, SiriUIBuddySubviewController> {
    VTUITrainingViewController *_trainingViewController;
    long long _targetDeviceType;
}

@property (weak) SiriUIBuddyController *parentController;
@property BOOL trainingStarted;
@property (copy, nonatomic) NSArray *remoteDarwinDeviceIdentifiersForTraining;
@property (retain, nonatomic) SSRVoiceProfile *voiceProfileForTraining;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) long long layoutStyle;
@property (readonly) NSString *templateTitle;
@property (readonly) NSString *templateBodyText;
@property (readonly) NSArray *privacyBundleIdentifiers;
@property (readonly) NSString *templateAlternateButtonTitle;
@property (readonly) id /* block */ templateAlternateActionBlock;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillLayout;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)trainingViewController:(id)a0 discardSiriEnrollmentForProfileId:(id)a1 forLanguageCode:(id)a2;
- (id)voiceProfileForTrainingViewController:(id)a0;
- (void)trainingViewController:(id)a0 markSATEnrollmentSuccessForVoiceProfile:(id)a1;
- (void)trainingViewController:(id)a0 setVoiceTriggerUserEnabled:(BOOL)a1;
- (void)trainingViewController:(id)a0 addUtterance:(id)a1 toProfile:(id)a2;
- (void)trainingViewControllerIsDisplayingTimeoutString:(id)a0;
- (void)cancelTraining;
- (BOOL)hasCompletedTraining;
- (void)trainingViewController:(id)a0 finishedTraining:(BOOL)a1;
- (id)initWithParentController:(id)a0;
- (void)skipVoiceTrigger:(id)a0;
- (void)didCloseLid;
- (BOOL)shouldCancelTrainingForLidClose;
- (void)setTrainingForVoiceTriggerDevice:(long long)a0 remoteDarwinDeviceIdentifiersForTraining:(id)a1;

@end
