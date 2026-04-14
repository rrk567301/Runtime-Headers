@class AISSetupContext, NSMenuItem, __AISSetupViewController;

@interface AISSetupViewController : NSViewController

@property (retain, nonatomic) __AISSetupViewController *viewController;
@property (retain, nonatomic) AISSetupContext *context;
@property (copy, nonatomic) id /* block */ reportHandler;
@property (nonatomic) BOOL shouldAutoDismiss;
@property (copy, nonatomic) NSMenuItem *dontSuggestUserAction;
@property (copy, nonatomic) NSMenuItem *skipAction;

- (id)initWithContext:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_updateAutoDismissal;

@end
