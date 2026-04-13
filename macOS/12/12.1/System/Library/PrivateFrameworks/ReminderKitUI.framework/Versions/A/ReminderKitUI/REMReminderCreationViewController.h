@class NSRemoteViewController, NSRemoteView;
@protocol REMReminderCreationDelegate;

@interface REMReminderCreationViewController : NSViewController <NSRemoteViewDelegate, REMReminderCreationPublicViewController>

@property (retain, nonatomic, setter=setChildViewController:) NSRemoteViewController *childViewController;
@property (readonly, nonatomic) id<REMReminderCreationDelegate> delegate;
@property (retain, nonatomic) NSRemoteView *remoteView;
@property (readonly) BOOL shouldRetainExportedObject;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)loadView;
- (void)viewDidLoad;
- (void)view:(id)a0 encounteredError:(id)a1;
- (void)viewServiceDidFailWithError:(id)a0;
- (void)viewServicePreferredSizeDidChange:(struct CGSize { double x0; double x1; })a0;
- (void)viewServiceDidCancel;
- (void)viewServiceDidFinish;
- (id)viewServiceViewController;

@end
