@protocol AOSUIProfileRemoteViewControllerDelegate;

@interface AOSUIProfileRemoteViewController : NSRemoteViewController <AOSUIProfileViewHostDelegate>

@property (weak, nonatomic) id<AOSUIProfileRemoteViewControllerDelegate> delegate;

+ (void)requestViewControllerWithCompletion:(id /* block */)a0;

- (id)exportedInterface;
- (void).cxx_destruct;
- (id)serviceViewControllerInterface;
- (void)viewHost_updateOverlayPrefPane:(BOOL)a0 prefPanesToHide:(id)a1;

@end
