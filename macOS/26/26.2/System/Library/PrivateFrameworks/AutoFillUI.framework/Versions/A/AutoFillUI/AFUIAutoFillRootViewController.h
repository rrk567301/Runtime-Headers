@class AFUIMenuView;
@protocol AFUIAutoFillRootVCDelegate;

@interface AFUIAutoFillRootViewController : NSViewController <AFUIAutoFillContentController>

@property (weak, nonatomic) id<AFUIAutoFillRootVCDelegate> delegate;
@property (retain, nonatomic) AFUIMenuView *view;

- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)a0;

@end
