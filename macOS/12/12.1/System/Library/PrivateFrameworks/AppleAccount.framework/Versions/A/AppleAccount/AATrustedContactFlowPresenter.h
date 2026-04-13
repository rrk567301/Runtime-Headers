@class NSXPCListener, NSString;

@interface AATrustedContactFlowPresenter : NSObject <TrustedContactFlowPresenterProtocol, AATrustedContactPresenterHostProtocol>

@property (retain, nonatomic) NSXPCListener *remoteListener;
@property (copy, nonatomic) id /* block */ presentationCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)trustedContactRequestFinishedWithError:(id)a0 completion:(id /* block */)a1;
- (void)_callCompletionBlockWithError:(id)a0;
- (void)presentModel:(id)a0 completion:(id /* block */)a1;
- (void)presentInvitationUIWithCustodianshipInfo:(id)a0 completion:(id /* block */)a1;

@end
