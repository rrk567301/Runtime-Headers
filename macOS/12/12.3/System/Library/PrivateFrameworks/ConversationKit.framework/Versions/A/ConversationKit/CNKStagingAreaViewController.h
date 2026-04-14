@interface CNKStagingAreaViewController : ConversationKit.PlatformViewController <CNKFaceTimeInCallControlsViewControllerDelegate> {
    void /* unknown type, empty encoding */ videoDeviceController;
    void /* unknown type, empty encoding */ wantsVideo;
    void /* unknown type, empty encoding */ countdownController;
    void /* unknown type, empty encoding */ conversationController;
    void /* unknown type, empty encoding */ inCallControlsDismissTimer;
    void /* unknown type, empty encoding */ viewContent;
    void /* unknown type, empty encoding */ isHandlingMouseEnteredEvent;
    void /* unknown type, empty encoding */ gridLayoutStyle;
}

@property (nonatomic, readonly) BOOL isPresentingEffectsBrowser;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ call;

- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (id)audioRouteMenu;
- (id)audioRouteGlyphFor:(id)a0 buttonStyle:(long long)a1;
- (void)inCallControlsViewController:(id)a0 didTap:(long long)a1 from:(id)a2;
- (void)didCreateCollectionViewForInCallControlsViewController:(id)a0;
- (void)resetEffectsState;
- (void)inCallControlsViewController:(id)a0 didAdd:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (id)initWithActiveCall:(id)a0;
- (void)toggleAudioMute;
- (void)toggleVideoMute;
- (void)openMessagesConversation;

@end
