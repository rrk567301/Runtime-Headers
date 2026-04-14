@class NSTextField, NSTimer, NSString, VTUITickMarkView, VTUIPagedLabel, NSArray, SSRVoiceProfile, SiriUIOrbView, NSButton, AFMyriadCoordinator, SSRVTUITrainingManager;
@protocol VTUITrainingViewControllerDelegate;

@interface VTUITrainingViewController : NSViewController <SSRVTUITrainingManagerDelegate, AFMyriadDelegate> {
    NSTextField *_statusLabel;
    NSButton *_endpointButton;
    VTUITickMarkView *_tickMark;
    SSRVTUITrainingManager *_trainingManager;
    SSRVoiceProfile *_voiceProfile;
    NSArray *_trainingPageInstructions;
    unsigned long long _sessionId;
    unsigned long long _retries;
    BOOL _hasRetriedTraining;
    long long _badMicRetryCount;
    long long _AVVCRetryCount;
    long long _timeoutRetryCount;
    BOOL _hasCancelledTraining;
    BOOL _waitingForSpeechNotification;
    AFMyriadCoordinator *_myriadCoordinator;
    double _voiceOverCompletionTimeout;
}

@property (nonatomic) long long currentTrainingState;
@property (copy) id /* block */ voiceOverCompletionBlock;
@property (retain) NSTimer *voiceOverCompletionTimer;
@property (retain) VTUIPagedLabel *instructionPagedLabel;
@property (retain, nonatomic) SiriUIOrbView *orbView;
@property (copy, nonatomic) NSString *siriLanguageCode;
@property (weak) id<VTUITrainingViewControllerDelegate> delegate;
@property BOOL hasCompletedTraining;
@property (nonatomic, getter=isInBuddy) BOOL inBuddy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)_startListening;
- (void)loadView;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)_stopListening;
- (void)advance;
- (void)shouldContinue:(id)a0;
- (void)shouldAbortAnotherDeviceBetter:(id)a0;
- (void)VTUITrainingManagerFeedLevel:(float)a0;
- (void)VTUITrainingManagerStopListening;
- (BOOL)VTUITrainingManagerHasTrainUtterance:(id)a0 languageCode:(id)a1;
- (void)voiceOverFinishedSpeaking;
- (void)_cleanupTrainingManagerWithCompletion:(id /* block */)a0;
- (void)_triggerEndpoint:(id)a0;
- (void)_setVoiceTriggerUserEnabled:(BOOL)a0;
- (void)_stopTraining:(id /* block */)a0;
- (void)_setPHSEnrollmentPrefEnabled:(BOOL)a0;
- (id)currentInstructionString;
- (void)slideInText:(id)a0 afterDelay:(double)a1 completion:(id /* block */)a2;
- (void)_updateOrbForStatus:(int)a0;
- (void)_handleTrainingResultWithStatus:(int)a0;
- (id)_keyForAudioSource:(unsigned long long)a0;
- (BOOL)canRetryCurrentInstruction;
- (void)_retryInstruction;
- (void)abortTraining;
- (void)_showBadMicAlertWithCompletion:(id /* block */)a0;
- (void)_displayTimeoutInstruction;
- (id)_trainingPageInstructions;
- (void)_postAccessibilityNotificationWithMessage:(id)a0;
- (id)_getWindowOrView;
- (void)VTUITrainingManagerAudioSessionTerminatedInStatus:(int)a0;
- (void)VTUITrainingManagerAudioSessionRouteChange;
- (void)beginTraining;
- (void)cancelTraining;

@end
