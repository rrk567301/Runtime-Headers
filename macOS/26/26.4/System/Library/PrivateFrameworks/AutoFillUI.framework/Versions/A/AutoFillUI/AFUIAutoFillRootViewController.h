@class AFUIMenuView;
@protocol AFUIAutoFillRootVCDelegate;

@interface AFUIAutoFillRootViewController : NSViewController <AFUIAutoFillContentController>

@property (weak, nonatomic) id<AFUIAutoFillRootVCDelegate> delegate;
@property (retain, nonatomic) AFUIMenuView *view;

- (id)initWithDelegate:(id)a0;
- (void)loadView;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
