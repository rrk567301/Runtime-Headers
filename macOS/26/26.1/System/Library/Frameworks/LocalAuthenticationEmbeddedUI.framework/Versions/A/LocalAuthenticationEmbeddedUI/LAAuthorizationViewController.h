@class NSString, LACUIAuthenticatorServiceConfiguration, NSViewController;
@protocol LACUIAuthenticatorUI, LAAuthorizationViewControllerDelegate;

@interface LAAuthorizationViewController : NSViewController <LACUIAuthenticatorUIDelegate> {
    NSViewController<LACUIAuthenticatorUI> *_remoteVC;
    BOOL _isRemoteVCPrepared;
    id /* block */ _completion;
    LACUIAuthenticatorServiceConfiguration *_configuration;
}

@property (readonly, nonatomic) BOOL active;
@property (weak, nonatomic) id<LAAuthorizationViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_applicationDidEnterBackground:(id)a0;
- (void)loadView;
- (void)dismiss;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)didProvideAuthorizationRequirementWithReply:(id /* block */)a0;
- (void)presentInContainerViewController:(id)a0;
- (void)sheetDidFinishWithError:(id)a0;

@end
