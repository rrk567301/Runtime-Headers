@class SUOSUUpdateController;
@protocol SUOSUInBoxUpdateControllerDelegate;

@interface SUOSUInBoxUpdateController : NSObject

@property (retain) SUOSUUpdateController *updateController;
@property (weak) id<SUOSUInBoxUpdateControllerDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)rebootToFinishInstallingUpdate:(id)a0;
- (void)_configureTelemetry;
- (void)scanForUpdatesWithCompletion:(id /* block */)a0;
- (void)startDownloadingUpdate:(id)a0 completion:(id /* block */)a1;
- (void)startInstallingUpdate:(id)a0 completion:(id /* block */)a1;

@end
