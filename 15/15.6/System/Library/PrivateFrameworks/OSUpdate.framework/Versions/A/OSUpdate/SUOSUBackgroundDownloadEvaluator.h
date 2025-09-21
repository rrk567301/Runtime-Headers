@class NSSet;

@interface SUOSUBackgroundDownloadEvaluator : NSObject

@property (readonly) char backgroundDownloadsEnabled;
@property (readonly) NSSet *productKeysToAutoInstall;

- (void).cxx_destruct;
- (char)_enabledForAutoInstallTonight:(id)a0;
- (char)_isProductEligibleForBackgroundDownload:(id)a0;
- (id)backgroundDownloadEligibleProductFromProduct:(id)a0 majorProduct:(id)a1;
- (id)initWithBackgroundDownloadsEnabled:(char)a0 productKeysToAutoInstall:(id)a1;

@end
