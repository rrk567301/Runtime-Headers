@class NSString;

@interface AATrustedContactFlowPresenter : AAFlowPresenter <TrustedContactFlowPresenterProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)presentModel:(id)a0 completion:(id /* block */)a1;
- (void)presentInvitationUIWithCustodianshipInfo:(id)a0 completion:(id /* block */)a1;

@end
