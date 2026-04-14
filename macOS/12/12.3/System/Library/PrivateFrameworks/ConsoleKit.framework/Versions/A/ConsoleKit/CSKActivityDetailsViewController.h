@class CSKStreamMessagesObserver, CSKMessagesViewController, CSKStream, NSFont, CSKActivity;

@interface CSKActivityDetailsViewController : CSKDetailsViewController

@property (retain, nonatomic) CSKMessagesViewController *messagesViewController;
@property (retain, nonatomic) CSKStreamMessagesObserver *messagesObserver;
@property (retain, nonatomic) CSKActivity *activity;
@property (weak, nonatomic) CSKStream *stream;
@property (retain, nonatomic) NSFont *defaultFont;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)viewDidLoad;
- (id)tabViewController:(id)a0 viewForTabItemAtIndex:(unsigned long long)a1;
- (void)_updateObserverWithActivity:(id)a0;
- (void)_updateActivityDetailsWithCurrentActivity;
- (void)_updateMessagesViewControllerDefaultFont:(id)a0;
- (id /* block */)_messagesObserverAdditionCompletion;
- (id /* block */)_messagesObserverResetCompletion;
- (id /* block */)_messagesObserverRemovalCompletion;

@end
