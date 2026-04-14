@class NSTimer, NSProgressIndicator, NSTextField;

@interface LoadingViewController : NSViewController

@property (retain, nonatomic) NSTimer *autoShowTimer;
@property (retain, nonatomic) NSTextField *label;
@property (retain, nonatomic) NSProgressIndicator *spinner;
@property (nonatomic) double autoShowDelay;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)init;
- (id)nibName;
- (id)nibBundle;
- (void)hideProgress:(id)a0;
- (void)showProgress:(id)a0;

@end
