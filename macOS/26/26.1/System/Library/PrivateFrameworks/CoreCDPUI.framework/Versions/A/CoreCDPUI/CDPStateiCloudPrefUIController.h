@class CDPiCloudPrefRecoveryKeyController;
@protocol CDPiCloudPrefPaneDelegateProtocol;

@interface CDPStateiCloudPrefUIController : CDPStateBaseUIController

@property (retain, nonatomic) CDPiCloudPrefRecoveryKeyController *cdpiCloudPrefRecoveryKeyController;
@property (retain, nonatomic) id<CDPiCloudPrefPaneDelegateProtocol> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)cdpContext:(id)a0 presentRecoveryKeyWithValidator:(id)a1 completion:(id /* block */)a2;
- (void)cdpContext:(id)a0 promptForRecoveryKeyWithValidator:(id)a1 completion:(id /* block */)a2;
- (void)endCDPView;
- (void)changeView:(id)a0;
- (void)setupCDPView:(id)a0;

@end
