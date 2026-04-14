@class NSTextField, NSView, NSArray, NSProgressIndicator, NSString, PK2Printer, PMXPCSupport, NSButton;
@protocol PKServerQueueCreationDelegate;

@interface PKQueueCreationController : NSWindowController <PMXPCSupportDelegate>

@property NSView *progressView;
@property NSButton *cancelButton;
@property NSTextField *progressTextField;
@property NSProgressIndicator *progressIndicator;
@property (retain) NSArray *topLevelNibObjects;
@property (retain) PK2Printer *printer;
@property (retain) NSString *queueID;
@property id<PKServerQueueCreationDelegate> delegate;
@property BOOL isCancelled;
@property (retain) PMXPCSupport *xpc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)awakeFromNib;
- (void)cancel:(id)a0;
- (id)initWithPrinter:(id)a0 delegate:(id)a1;
- (void)switchPanelTo:(id)a0;
- (void)startQueueCreation;
- (void)notifyQueueCompleted:(long long)a0;
- (id)buildAnalyticsDict;
- (void)presentErrorWithMessageText:(id)a0 informativeTextWithFormat:(id)a1;
- (void)handleEventForCommand:(int)a0 status:(int)a1 event:(id)a2;
- (void)cancelErrorAlert:(id)a0;

@end
