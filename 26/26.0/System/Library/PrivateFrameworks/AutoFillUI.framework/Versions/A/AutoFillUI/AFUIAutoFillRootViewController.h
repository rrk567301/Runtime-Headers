@class AFUIMenuView;
@protocol AFUIAutoFillRootVCDelegate;

@interface AFUIAutoFillRootViewController : NSViewController <AFUIAutoFillContentController>

@property (weak, nonatomic) id<AFUIAutoFillRootVCDelegate> delegate;
@property (retain, nonatomic) AFUIMenuView *view;

- (void)viewDidLoad;
- (void)loadView;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
