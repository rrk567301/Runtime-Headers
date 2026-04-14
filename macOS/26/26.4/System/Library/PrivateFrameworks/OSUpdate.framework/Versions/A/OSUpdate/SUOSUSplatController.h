@class NSString, SUOSUUpdateController, NSDate, SUOSUClient;
@protocol SUOSUSplatControllerDelegate;

@interface SUOSUSplatController : NSObject <SUOSUClientDelegate>

@property (retain) SUOSUUpdateController *updateController;
@property (retain) SUOSUClient *client;
@property (weak) id<SUOSUSplatControllerDelegate> delegate;
@property (readonly) BOOL autoUpdateEnabled;
@property (readonly) BOOL autoUpdateManaged;
@property (readonly) BOOL ddmDeclarationPresent;
@property (readonly) NSDate *enforcedDDMDeclarationDate;
@property (readonly) NSDate *enforcedDDMDeclarationPaddedPastDueDate;
@property (readonly) BOOL rollbackAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)restart;
- (void).cxx_destruct;
- (id)init;
- (void)client:(id)a0 installDidBeginForUpdates:(id)a1 progress:(id)a2 mdmInitiated:(BOOL)a3;
- (void)client:(id)a0 installDidFinishSuccessfullyForUpdates:(id)a1 mdmInitiated:(BOOL)a2;
- (void)client:(id)a0 installDidFinishWithError:(id)a1 forUpdates:(id)a2 mdmInitiated:(BOOL)a3;
- (void)client:(id)a0 installRequiresUserAction:(unsigned long long)a1 details:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)ddmDeclarationValidForSplatProduct:(id)a0;
- (void)fetchInstalledProduct:(id /* block */)a0;
- (void)osUpdateAvailable:(id /* block */)a0;
- (void)scanForAvailableProduct:(id /* block */)a0;
- (void)setAutoUpdate:(BOOL)a0 completion:(id /* block */)a1;
- (void)startInstall:(id)a0;
- (void)startObservingInProgressInstallForProduct:(id)a0;
- (void)startObservingInProgressRollback;
- (void)startRollback;

@end
