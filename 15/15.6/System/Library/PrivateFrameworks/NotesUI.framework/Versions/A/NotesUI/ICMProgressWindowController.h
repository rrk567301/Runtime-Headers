@class NSTextField, NSString, ICSelectorDelayer, NSProgressIndicator, NSButton, NSWindow;
@protocol ICMProgressWindowControllerDelegate;

@interface ICMProgressWindowController : NSWindowController

@property (nonatomic) char isVisible;
@property (weak) NSProgressIndicator *progressIndicator;
@property (weak) NSTextField *progressLabel;
@property (weak) NSButton *stopButton;
@property (retain) NSWindow *containingWindow;
@property (retain, nonatomic) ICSelectorDelayer *showSelectorDelayer;
@property (weak, nonatomic) id<ICMProgressWindowControllerDelegate> delegate;
@property (nonatomic) double showHideThreshold;
@property (nonatomic) char shouldShowSpinner;
@property (nonatomic, getter=isIndeterminate) char indeterminate;
@property (retain, nonatomic) NSString *progressText;
@property (nonatomic) double progressValue;
@property (nonatomic) char shouldHideStopButton;
@property (retain, nonatomic) NSString *stopButtonTitle;

+ (id)progressWindowControllerWithDelegate:(id)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithWindow:(id)a0;
- (void)commonInit;
- (void)hide;
- (void)windowDidLoad;
- (void)didTapCancelButton:(id)a0;
- (void)hideStopButton;
- (void)showInWindow:(id)a0;
- (void)showWithDelayInWindow;

@end
