@class SCROBrailleUIIntelligenceManager, SCROBrailleUILiveCaptionsManager, SCROBrailleUIListView, SCROBrailleUIDynamicBrailleView, SCROBrailleUILiveSpeechManager, NSString;

@interface SCROBrailleUILiveCaptionsApp : SCROBrailleUIApp <SCROBrailleUILiveSpeechClient>

@property (retain, nonatomic) SCROBrailleUIDynamicBrailleView *transcriptionView;
@property (retain, nonatomic) SCROBrailleUIListView *speechView;
@property (nonatomic) BOOL isSpeaking;
@property (nonatomic) BOOL isTranscriptionPaused;
@property (retain, nonatomic) SCROBrailleUILiveCaptionsManager *liveCaptionsManager;
@property (retain, nonatomic) SCROBrailleUILiveSpeechManager *liveSpeechManager;
@property (retain, nonatomic) SCROBrailleUIListView *contextMenuView;
@property (retain, nonatomic) SCROBrailleUIListView *summaryView;
@property (retain, nonatomic) SCROBrailleUIIntelligenceManager *intelligenceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)identifier;
- (id)initWithDelegate:(id)a0;
- (void)open;
- (id)views;
- (void)close;
- (void).cxx_destruct;
- (void)handleAction:(id)a0;
- (BOOL)_isOpen;
- (void)_openSpeechView;
- (void)_closeContextMenu;
- (void)_closeSpeechView;
- (void)_closeSummary;
- (void)_handleActionInContextMenu:(id)a0;
- (void)_handleActionInSummary:(id)a0;
- (void)_handleActionInTranscription:(id)a0;
- (void)_handleActionInTypeToSpeak:(id)a0;
- (BOOL)_isShowingContextMenu;
- (BOOL)_isShowingSpeechView;
- (BOOL)_isShowingSummary;
- (void)_openContextMenu;
- (void)_openSummary;
- (void)_refreshSummaryWith:(id)a0;
- (void)didSpeechEnd;
- (void)handleResponse:(id)a0 forRequest:(id)a1;

@end
