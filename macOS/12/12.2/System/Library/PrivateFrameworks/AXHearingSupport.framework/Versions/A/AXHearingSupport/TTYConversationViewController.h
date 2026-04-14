@class TTYConversation, NSString, NSScrollView, TUCall, NSLock, CAShapeLayer, TTYUtterance, NSMutableArray, NSTextView, NSImageView, NSObject, NSTableView;
@protocol OS_dispatch_queue;

@interface TTYConversationViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource, TTYUtteranceCellDelegate, NSTextViewDelegate> {
    NSTextView *_textView;
    CAShapeLayer *_bubbleLayer;
    id _keyboardEventMonitor;
    NSImageView *_gaButton;
    NSLock *_realtimeSendLock;
    NSObject<OS_dispatch_queue> *_utteranceRequestQueue;
}

@property (retain, nonatomic) NSScrollView *scrollView;
@property (retain, nonatomic) NSTableView *tableView;
@property (retain, nonatomic) TTYConversation *conversation;
@property (retain, nonatomic) TTYUtterance *currentUtterance;
@property (retain, nonatomic) TUCall *call;
@property (retain, nonatomic) NSMutableArray *utteranceBuffer;
@property (nonatomic) BOOL processingUtteranceBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewControllerForCall:(id)a0;
+ (id)viewControllerForConversation:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (long long)numberOfRowsInTableView:(id)a0;
- (id)tableView:(id)a0 objectValueForTableColumn:(id)a1 row:(long long)a2;
- (id)tableView:(id)a0 viewForTableColumn:(id)a1 row:(long long)a2;
- (BOOL)tableView:(id)a0 shouldSelectRow:(long long)a1;
- (double)tableView:(id)a0 heightOfRow:(long long)a1;
- (double)tableView:(id)a0 sizeToFitWidthOfColumn:(long long)a1;
- (void)textDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (void)setupTableView;
- (void)updateMuteButton;
- (id)cellAtIndexPath:(id)a0;
- (void)callDidConnect:(id)a0;
- (id)addUtterance:(id)a0;
- (id)cannedResponses;
- (void)setTextViewUtterance:(id)a0;
- (void)deviceDidReceiveCharacter:(unsigned short)a0 forUtterance:(id)a1;
- (void)processUtteranceQueue;
- (void)_sendNewUtteranceString:(id)a0 atIndex:(unsigned long long)a1 forCellPath:(id)a2;
- (id)currentContactPath;
- (void)updateTableViewSizeAnimated:(BOOL)a0;
- (void)sendNewUtteranceString:(id)a0;
- (id)textViewUtterance;
- (void)utteranceCellDidUpdateContent:(id)a0;
- (void)realtimeTextDidChange;
- (void)gaButtonPressed:(id)a0;
- (id)callContainingUtterance;
- (id)inputTextView;
- (void)toggleMute:(id)a0;

@end
