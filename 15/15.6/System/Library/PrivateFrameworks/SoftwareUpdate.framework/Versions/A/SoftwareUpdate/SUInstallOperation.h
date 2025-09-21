@class NSDate, NSString, NSArray, NSError, PKInstallRequest, NSMutableDictionary, NSMutableArray, NSObject, PKInstallClient;
@protocol SUInstallOperationDelegate, OS_os_activity, NSObject;

@interface SUInstallOperation : NSOperation {
    NSArray *_localProducts;
    PKInstallRequest *_request;
    char _isStaging;
    struct AuthorizationOpaqueRef { } *_overrideAuthorization;
    char _didPreflight;
    char _isInstalling;
    int _state;
    unsigned long long _totalSize;
    double _progressPercent;
    double _estimatedTimeRemaining;
    NSString *_firmwareStatus;
    double _lastFirmwareUpdateProgress;
    NSDate *_firmwareUpdateStalledAt;
    NSString *_activeSpecialStatus;
    char _isDoingIndeterminateFirmwareUpdate;
    NSError *_nonSpecificError;
    NSMutableDictionary *_errorByProductKey;
    char _didInstallSuccessfully;
    NSMutableArray *_productKeysToDelete;
    id /* block */ _finishBlock;
    id /* block */ _progressBlock;
    NSObject<OS_os_activity> *_activity;
    PKInstallClient *_installClient;
    id /* block */ _bundleRegistrationBlock;
}

@property id<SUInstallOperationDelegate, NSObject> delegate;
@property char clientBlocksRestart;
@property char holdBoostDuringInstall;
@property unsigned int packageScriptUserID;
@property double estimatedTimeForPostLogoutCommit;

+ (void)_enumerateProducts:(id)a0 usingBlock:(id /* block */)a1;
+ (char)_isCurrentlyStagedWithLocalProducts:(id)a0 purgeableSize:(id *)a1;
+ (unsigned long long)_spaceRequiredForPossiblyStagedLocalProducts:(id)a0;
+ (unsigned long long)adjustedInstallSize:(unsigned long long)a0 forLocalProducts:(id)a1;
+ (id)installOperationsWithLocalProducts:(id)a0 forStaging:(char)a1;
+ (unsigned long long)workingSpaceForInstallSize:(unsigned long long)a0;

- (void)dealloc;
- (double)estimatedTimeRemaining;
- (void)main;
- (void)installClient:(id)a0 didFailWithError:(id)a1;
- (double)progressPercent;
- (void)_dispatchStatus:(id)a0 progress:(float)a1 timeRemaining:(double)a2;
- (id)_initWithLocalProducts:(id)a0 stageOnly:(char)a1 spaceRequired:(unsigned long long)a2;
- (char)_performInstallTimeChecks;
- (id)_productFromPackageKitError:(id)a0;
- (id)activeSpecialStatus;
- (char)didInstallSuccessfully;
- (id)errorForProductKey:(id)a0;
- (id)errorProductKeys;
- (void)installClient:(id)a0 currentState:(int)a1 package:(id)a2 progress:(double)a3 timeRemaining:(double)a4;
- (char)installClient:(id)a0 registerBundlesWithLaunchServices:(id)a1;
- (void)installClientDidFinish:(id)a0;
- (char)isDoingIndeterminateFirmwareUpdate;
- (char)isStaging;
- (id)localProducts;
- (char)performPreflightChecks;
- (void)removeInstalledOrInapplicableProducts;
- (void)setAuthorizationRef:(struct AuthorizationOpaqueRef { } *)a0;
- (void)setBundleRegistrationBlock:(id /* block */)a0;
- (void)setProgressBlock:(id /* block */)a0 andFinishBlock:(id /* block */)a1;
- (unsigned long long)totalInstallSize;

@end
