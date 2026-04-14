@class NSView, NSString, SORecipientBarViewController, NSURL, GKTournament, NSMutableDictionary, NSArray, GKChatDisplayController, SOInputLineViewController, NSMutableArray, NSButton;
@protocol GKMessageComposeViewControllerDelegate, GKDashboardNearbyBrowserDelegate;

@interface GKMessageComposeViewController : UXViewController <SOInputLineViewControllerDelegate>

@property NSView *recipientView;
@property NSButton *sendButton;
@property NSView *messageBodyView;
@property (retain, nonatomic) NSString *inviteMessage;
@property (retain, nonatomic) SORecipientBarViewController *recipientBarViewController;
@property (retain, nonatomic) GKChatDisplayController *chatDisplayController;
@property (retain, nonatomic) SOInputLineViewController *inputLineViewController;
@property (retain, nonatomic) NSMutableArray *messageRecipients;
@property (retain, nonatomic) NSMutableArray *legacyPlayers;
@property (retain, nonatomic) NSMutableArray *messageSendRecipients;
@property (retain, nonatomic) NSMutableDictionary *addedGKPlayers;
@property long long maxNumberPlayers;
@property (retain, nonatomic) NSURL *shareURL;
@property (weak, nonatomic) id<GKMessageComposeViewControllerDelegate> delegate;
@property (weak, nonatomic) id<GKDashboardNearbyBrowserDelegate> nearbyDelegate;
@property (retain, nonatomic) GKTournament *tournament;
@property (nonatomic) long long maximumSelectablePlayersForPicker;
@property (retain, nonatomic) NSArray *currentlySelectedPlayersForPicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canSendText;

- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)sendAction:(id)a0;
- (void)cancelAction:(id)a0;
- (void)connectToAgent;
- (void)_recipientsSelected:(id)a0;
- (void)addRecipientButtonPressed:(id)a0;
- (id)initWithMessage:(id)a0 maxNumberOfPlayers:(long long)a1;
- (void)preparePresentationForMinPlayers:(long long)a0 maxPlayers:(long long)a1 shareURL:(id)a2 completionHandler:(id /* block */)a3;
- (void)addPlayersToMessageCompose:(id)a0;
- (id)addedGKPlayerForIMHandle:(id)a0;
- (id)getHiddenPlayers;
- (void)pickerDidFinishWithPlayers:(id)a0;
- (void)checkAndUpdateLegacyPlayers:(id)a0 withHandler:(id /* block */)a1;
- (void)_sendMessageWithCompletionBlock:(id /* block */)a0;
- (void)_sendMessage:(id)a0 withChat:(id)a1 completionBlock:(id /* block */)a2;

@end
