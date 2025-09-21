@class NSObject, NSString, PKPackageReference, MSUProduct, MSUProductManager, NSMutableArray, NSError;
@protocol OS_dispatch_semaphore;

@interface MSDCOnDemandUpdateController : NSObject

@property char isCalledByMacBuddy;
@property (retain) NSString *workDirectoryPath;
@property (retain) NSMutableArray *localInstallablePackages;
@property (retain) NSString *cookieFilePath;
@property (retain) MSUProductManager *msuManager;
@property (retain) MSUProduct *remoteInstallableProduct;
@property (retain) NSString *installableProductVersion;
@property (retain) NSError *scanError;
@property char downloadComplete;
@property (retain) PKPackageReference *downloadPackage;
@property (retain) NSError *downloadError;
@property long long downloadRetryCount;
@property double downloadProgress;
@property (retain) NSObject<OS_dispatch_semaphore> *installSemaphore;
@property (retain) NSError *installError;
@property double installProgress;

+ (id)sharedInstance;
+ (id)versionOfCurrentInstalledPkg;

- (id)init;
- (void).cxx_destruct;
- (void)installClient:(id)a0 didFailWithError:(id)a1;
- (void)installClient:(id)a0 currentState:(int)a1 package:(id)a2 progress:(double)a3 timeRemaining:(double)a4;
- (void)installClientDidFinish:(id)a0;
- (void)packageDownloader:(id)a0 didDownloadInvalidDataForPackageReference:(id)a1;
- (void)packageDownloader:(id)a0 didFailOnPackageReference:(id)a1 withError:(id)a2;
- (void)packageDownloader:(id)a0 didFinishPackageReference:(id)a1 localPackageReference:(id)a2;
- (void)packageDownloader:(id)a0 didStartDownloadingPackageWithReference:(id)a1;
- (char)packageDownloader:(id)a0 shouldRetryFailedPackageReference:(id)a1 previousError:(id)a2;
- (void)packageDownloaderDidStart:(id)a0;
- (void)packageDownloaderDidStop:(id)a0;
- (void)installClientDidBegin:(id)a0;
- (void)packageDownloader:(id)a0 didChangeProgress:(double)a1;
- (void)cleanupWorkDirectory;
- (char)createCookieFileWithExpectedOSBuild:(id)a0 error:(id *)a1;
- (char)downloadPackagesForRemoteInstallableProduct;
- (void)downloadUpdateWithCompletion:(id /* block */)a0;
- (char)findRemoteInstallableProductForOSVersion:(id)a0;
- (void)findUpdateForOSVersion:(id)a0 withCompletion:(id /* block */)a1;
- (id)getMostFeasibleProductFromInstallableProducts:(id)a0;
- (void)installAvailableUpdateAtBootTimeWithCompletion:(id /* block */)a0;
- (char)installPackagesFromLocalInstallableProduct;
- (char)isOSUpdateSuccessful;
- (char)isUpdateAvailableToInstall;
- (char)loadBootTimeInstallableProductFromCookie;
- (void)markUpdateAsToBeInstalledOnNextBootWithExpectedOSBuild:(id)a0 withCompletion:(id /* block */)a1;
- (void)purgeUpdateToBeInstalled;
- (char)removeCookieFile:(id *)a0;
- (char)setupAsDemoDevice:(id *)a0;
- (void)setupWorkDirectoryForCurrentUser;

@end
