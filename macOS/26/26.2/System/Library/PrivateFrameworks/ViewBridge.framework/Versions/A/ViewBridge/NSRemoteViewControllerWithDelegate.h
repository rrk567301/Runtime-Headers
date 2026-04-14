@protocol NSRemoteViewControllerDelegate;

@interface NSRemoteViewControllerWithDelegate : NSRemoteViewController

@property (weak) id<NSRemoteViewControllerDelegate> delegate;

+ (void)requestViewController:(id)a0 connectionHandler:(id /* block */)a1;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (id)exportedObject;
- (void).cxx_destruct;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;
- (BOOL)view:(id)a0 shouldResize:(struct CGSize { double x0; double x1; })a1;
- (void)aboutToAdvanceView:(id)a0 toRunPhaseWithParameters:(id)a1;

@end
