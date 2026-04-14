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
@property (readonly) BOOL shouldPresentDisclosureForCompactVoiceTrigger;

+ (void)initialize;
+ (id)_stateMachineDispatchQueue;

- (void).cxx_destruct;
- (void)setState:(long long)a0;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (long long)initialState;
- (id)initWithHost:(id)a0 userInfo:(id)a1;
- (void)moveToNextPanel;
- (id)_configurationRecognitionLanguageCodes;
- (id)_fetchUserContextVoiceProfileForTraining;
- (long long)_mbuaGetDataSharingOptInStatus;
- (BOOL)_mbuaIsSiriEnabled;
- (BOOL)_mbuaRandomVoice;
- (BOOL)_mbuaRequiresVoiceSelection;
- (void)_mbuaSetEnablementLanguages:(id)a0;
- (void)_setupDeviceBrowser;
- (id)chooseLanguageController;
- (id)chooseVoiceController;
- (void)currentPaneWillExit;
- (void)didCloseLid:(id)a0;
- (void)didOpenLid:(id)a0;
- (id)enableSiriController;
- (id)improveSiriController;
- (void)moveToPreviousPanel;
- (void)remoteDeviceBrowserDidChange:(id)a0 connectedDeviceIdentifiers:(id)a1;
- (void)setLoadingSpinnerHidden:(BOOL)a0;
- (BOOL)shouldShowState:(long long)a0 context:(struct { id x0; })a1;
- (void)updateOnBoardingKitTemplate;
- (id)voiceTriggerController;
- (id)voiceTriggerIntroController;
- (id)voiceTriggerOutroController;

@end
