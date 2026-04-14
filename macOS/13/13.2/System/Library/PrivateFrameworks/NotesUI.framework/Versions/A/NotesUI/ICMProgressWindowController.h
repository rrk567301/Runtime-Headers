@class NSTextField, NSString, ICSelectorDelayer, NSProgressIndicator, NSButton, NSWindow;
@protocol ICMProgressWindowControllerDelegate;

@interface ICMProgressWindowController : NSWindowController

@property (nonatomic) BOOL isVisible;
@property (weak) NSProgressIndicator *progressIndicator;
@property (weak) NSTextField *progressLabel;
@property (weak) NSButton *stopButton;
@property (retain) NSWindow *containingWindow;
@property (retain, nonatomic) ICSelectorDelayer *showSelectorDelayer;
@property (weak, nonatomic) id<ICMProgressWindowControllerDelegate> delegate;
@property (nonatomic) double showHideThreshold;
@property (nonatomic) BOOL shouldShowSpinner;
@property (nonatomic, getter=isIndeterminate) BOOL indeterminate;
@property (retain, nonatomic) NSString *progressText;
@property (nonatomic) double progressValue;
@property (nonatomic) BOOL shouldHideStopButton;
@property (retain, nonatomic) NSString *stopButtonTitle;

+ (id)progressWindowControllerWithDelegate:(id)a0;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithWindow:(id)a0;
- (void)hide;
- (void)windowDidLoad;
- (void)commonInit;
- (void)didTapCancelButton:(id)a0;
- (void)showWithDelayInWindow;
- (void)hideStopButton;
- (void)showInWindow:(id)a0;

@end
