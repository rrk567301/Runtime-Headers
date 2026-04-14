@class NSTextField, NSString, VTUITrainingViewController, NSArray, NSLayoutConstraint, NSButton;

@interface SiriUIVoiceTriggerController : NSViewController <VTUITrainingViewControllerDelegate> {
    id /* block */ _completionBlock;
    NSTextField *_titleLabel;
    NSTextField *_subtitleLabel;
    NSButton *_continueButton;
    NSButton *_skipButton;
    long long _state;
    VTUITrainingViewController *_trainingViewController;
    BOOL _bottomButtonConstraintEnabled;
    NSLayoutConstraint *_singleSkipButtonConstraint;
    NSLayoutConstraint *_multipleSkipButtonConstraint;
    NSArray *_remoteDarwinDeviceIdentifiersForTraining;
    BOOL _trainingForRemoteDarwinVoiceTrigger;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)runWithCompletion:(id /* block */)a0;
- (void)loadView;
- (void)cancel:(id)a0;
- (void)viewWillAppear;
- (void)setButtonConstraints:(id)a0;
- (void)trainingViewController:(id)a0 setVoiceTriggerUserEnabled:(BOOL)a1;
- (void)didOpenLid:(id)a0;
- (void)didCloseLid:(id)a0;
- (void)trainingViewController:(id)a0 finishedTraining:(BOOL)a1;
- (void)startTraining:(id)a0;
- (void)finishTraining:(id)a0;
- (void)_updateButtonConstraints:(id)a0;
- (void)_transitionToIntro;
- (void)setTrainingForRemoteDarwinVoiceTrigger:(BOOL)a0 remoteDarwinDeviceIdentifiersForTraining:(id)a1;
- (void)_transitionToTraining;
- (void)_transitionToDone;
- (void)_updateViewForClamshellMode:(BOOL)a0;
- (void)offerUserActionButtonsAtBottomOfView;

@end
