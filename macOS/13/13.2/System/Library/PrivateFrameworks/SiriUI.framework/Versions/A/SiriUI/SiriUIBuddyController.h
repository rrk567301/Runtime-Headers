@class NSDictionary, SiriUIBuddyEnableSiriController, NSImageView, AFVoiceInfo, SiriUIBuddyVoiceTriggerController, OBTemplateView, NSString, NSSet, NSLayoutConstraint, SiriUIBuddyVoiceTriggerIntroController, SiriUIBuddyChooseVoiceController, SiriUIRemoteDeviceBrowser, SSRVoiceProfile, NSViewController, SiriUIBuddyVoiceTriggerOutroController, SiriUIBuddyChooseLanguageController, SiriUIBuddyImproveSiriController;
@protocol SiriUIBuddyDelegate, SiriUIBuddySubviewController, MBSecondPartyHost;

@interface SiriUIBuddyController : NSViewController <SiriUIBuddyControllerEmptyProtocol, SiriUIRemoteDeviceBrowserDelegate> {
    long long _state;
    NSViewController<SiriUIBuddySubviewController> *_currentPanelController;
    SiriUIBuddyEnableSiriController *_enableSiriController;
    SiriUIBuddyChooseLanguageController *_chooseLanguageController;
    SiriUIBuddyChooseVoiceController *_chooseVoiceController;
    SiriUIBuddyVoiceTriggerController *_voiceTriggerController;
    SiriUIBuddyVoiceTriggerIntroController *_voiceTriggerIntroController;
    SiriUIBuddyVoiceTriggerOutroController *_voiceTriggerOutroController;
    SiriUIBuddyImproveSiriController *_improveSiriController;
    OBTemplateView *_templateView;
}

@property (retain) NSDictionary *userInfo;
@property (weak) NSLayoutConstraint *viewHeightConstraint;
@property (readonly) BOOL siriEnabled;
@property (readonly) BOOL siriPreviouslyEnabled;
@property (readonly) BOOL siriNewlyEnabled;
@property (readonly) BOOL dataSharingPreviouslySpecified;
@property (retain, nonatomic) SSRVoiceProfile *voiceProfileForTraining;
@property (retain, nonatomic) SiriUIRemoteDeviceBrowser *remoteDeviceBrowser;
@property (retain, nonatomic) NSSet *connectedDeviceIdentifiers;
@property BOOL enableSiri;
@property BOOL skippedVoiceTrigger;
@property (retain) NSString *userChosenSiriLanguageCode;
@property (retain) AFVoiceInfo *userChosenVoice;
@property (retain) NSString *effectiveSiriLanguageCode;
@property (readonly) OBTemplateView *templateView;
@property (readonly, weak) NSImageView *orbImageView;
@property (readonly, weak) id<MBSecondPartyHost> host;
@property (weak) id<SiriUIBuddyDelegate> delegate;

+ (void)initialize;
+ (id)_stateMachineDispatchQueue;

- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (long long)initialState;
- (id)initWithHost:(id)a0 userInfo:(id)a1;
- (void)setLoadingSpinnerHidden:(BOOL)a0;
- (void)didOpenLid:(id)a0;
- (void)didCloseLid:(id)a0;
- (void)remoteDeviceBrowserDidChange:(id)a0 connectedDeviceIdentifiers:(id)a1;
- (void)_setupDeviceBrowser;
- (id)_configurationRecognitionLanguageCodes;
- (void)updateOnBoardingKitTemplate;
- (id)enableSiriController;
- (id)chooseLanguageController;
- (id)chooseVoiceController;
- (id)voiceTriggerIntroController;
- (id)voiceTriggerController;
- (id)voiceTriggerOutroController;
- (id)improveSiriController;
- (void)currentPaneWillExit;
- (BOOL)shouldShowState:(long long)a0 context:(struct { id x0; })a1;
- (void)moveToPreviousPanel;
- (void)moveToNextPanel;
- (void)_mbuaSetEnablementLanguages:(id)a0;
- (BOOL)_mbuaRandomVoice;
- (BOOL)_mbuaRequiresVoiceSelection;
- (id)_fetchUserContextVoiceProfileForTraining;
- (BOOL)_mbuaIsSiriEnabled;
- (long long)_mbuaGetDataSharingOptInStatus;

@end
