@class NSString, TUIKTLearnMoreViewController;

@interface TUIKTLearnMoreRemoteViewControllerHost : NSRemoteViewController <TUIKTLearnMoreRemoteViewControllerHostProtocol>

@property (retain, nonatomic) TUIKTLearnMoreViewController *hostViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)dealloc;
- (id)serviceViewControllerInterface;
- (void)privacySheetDidDismissWithError:(id)a0 reply:(id /* block */)a1;

@end
