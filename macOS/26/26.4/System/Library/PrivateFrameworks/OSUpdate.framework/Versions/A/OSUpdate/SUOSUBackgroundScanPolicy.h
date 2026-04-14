@class SUSharedPrefs, SUOSUServiceClientManager, SUOSUInstallTonightManager, SUOSUMobileSoftwareUpdateController;

@interface SUOSUBackgroundScanPolicy : NSObject

@property (readonly) SUSharedPrefs *sharedPrefs;
@property (readonly) SUOSUServiceClientManager *clientManager;
@property (readonly) SUOSUMobileSoftwareUpdateController *msuController;
@property (readonly) SUOSUInstallTonightManager *installTonightManager;

- (void).cxx_destruct;
- (id)initWithSharedPrefs:(id)a0 clientManager:(id)a1 msuController:(id)a2 installTonightManager:(id)a3;
- (void)isBackgroundScanAllowed:(id /* block */)a0;
- (void)recordSuccessfulBackgroundScan;

@end
