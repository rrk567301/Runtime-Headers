@class NSString, TUIKTLearnMoreViewController;

@interface TUIKTLearnMoreRemoteViewControllerHost : NSRemoteViewController <TUIKTLearnMoreRemoteViewControllerHostProtocol>

@property (retain, nonatomic) TUIKTLearnMoreViewController *hostViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)exportedInterface;
- (void)loadView;
- (void)dealloc;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (void).cxx_destruct;
- (id)serviceViewControllerInterface;
- (void)privacySheetDidDismissWithError:(id)a0 reply:(id /* block */)a1;

@end
