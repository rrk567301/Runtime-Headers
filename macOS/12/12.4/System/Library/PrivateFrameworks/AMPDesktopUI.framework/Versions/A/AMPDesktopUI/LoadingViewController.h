@class NSTimer, NSProgressIndicator, NSTextField;

@interface LoadingViewController : NSViewController

@property (retain, nonatomic) NSTimer *autoShowTimer;
@property (retain, nonatomic) NSTextField *label;
@property (retain, nonatomic) NSProgressIndicator *spinner;
@property (nonatomic) double autoShowDelay;

- (id)init;
- (void).cxx_destruct;
- (id)nibName;
- (id)nibBundle;
- (void)viewDidLoad;
- (void)showProgress:(id)a0;
- (void)hideProgress:(id)a0;

@end
