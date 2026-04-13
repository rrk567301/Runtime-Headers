@class TUCall, RTTUtterance, RTTUIServiceUpdateCell, NSMutableString, NSScrollView, NSButton, NSMutableArray, NSTableView, NSString, AXDispatchTimer, CAShapeLayer, NSTextView, RTTConversation;

@interface RTTUIConversationViewController : NSViewController <NSTableViewDelegate, NSTableViewDataSource, RTTUIUtteranceCellDelegate, NSTextViewDelegate, RTTUIServiceCellDelegate> {
    NSTextView *_textView;
    CAShapeLayer *_bubbleLayer;
    RTTUIServiceUpdateCell *_serviceCell;
    id _keyboardEventMonitor;
    NSButton *_gaButton;
    AXDispatchTimer *_voAnnouncementTimer;
    AXDispatchTimer *_realTimeTimeout;
    NSMutableString *_voAnnouncementBuffer;
    NSMutableArray *_serviceUpdates;
}

@property (retain, nonatomic) NSScrollView *scrollView;
@property (retain, nonatomic) NSTableView *tableView;
@property (retain, nonatomic) RTTConversation *conversation;
@property (retain, nonatomic) RTTUtterance *currentUtterance;
@property (retain, nonatomic) TUCall *call;
@property (copy, nonatomic) id /* block */ rttConversationAvailabilityCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewControllerForCall:(id)a0;
+ (id)viewControllerForConversation:(id)a0;
+ (BOOL)_validRectangle:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

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
- (void)viewWillAppear;
- (void)viewDidAppear;
- (BOOL)_canShowWhileLocked;
- (void)setupTableView;
- (void)callDidConnect:(id)a0;
- (id)addUtterance:(id)a0;
- (id)cannedResponses;
- (void)setTextViewUtterance:(id)a0;
- (id)currentContactPath;
- (void)updateTableViewSizeAnimated:(BOOL)a0;
- (id)textViewUtterance;
- (void)utteranceCellDidUpdateContent:(id)a0;
- (void)realtimeTextDidChange;
- (void)gaButtonPressed:(id)a0;
- (id)inputTextView;
- (id)utteranceCellAtIndexPath:(id)a0;
- (void)deviceDidReceiveString:(id)a0 forUtterance:(id)a1;
- (void)addServiceCellWithUpdate:(id)a0 options:(id)a1;
- (void)removeServiceCellWithUpdate:(id)a0;
- (void)updateCallHold:(id)a0;
- (void)didBecomeKey:(id)a0;
- (void)updateGAButton;
- (BOOL)isCurrentCallConnected;
- (BOOL)currentCallIsDowngraded;
- (void)updateInputEnabled;
- (void)updateCallDowngradeStatus;
- (BOOL)isCurrentCallReceivingOnHold;
- (id)contactDisplayString;
- (BOOL)isCurrentCallOnHold;
- (void)_addServiceCellWithUpdate:(id)a0 options:(id)a1;
- (void)_removeServiceCellWithUpdate:(id)a0;
- (void)_replaceServiceCellWithOldUpdate:(id)a0 withNewUpdate:(id)a1 options:(id)a2;
- (void)updateVoiceOverAnnouncement:(id)a0;
- (id)lastCellRowPathForUtterance:(id)a0;
- (id)lastConversationRowPathForUtterance:(id)a0;
- (void)_processRealtimeTimeout;
- (id)currentCall;
- (void)showCallEnded;
- (void)replaceServiceCellWithOldUpdate:(id)a0 withNewUpdate:(id)a1 options:(id)a2;
- (void)updateUtterance:(id)a0 forIndexPath:(id)a1;
- (id)serviceUpdateCellAtIndexPath:(id)a0;
- (void)_scrollToIndexPathIfNecessary:(id)a0 animated:(BOOL)a1;

@end
