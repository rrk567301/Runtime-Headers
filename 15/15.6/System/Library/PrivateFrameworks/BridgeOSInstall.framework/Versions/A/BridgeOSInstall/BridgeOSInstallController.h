@class NSString;

@interface BridgeOSInstallController : NSObject

@property (retain) NSString *client;

+ (char)currentHardwareHasBridgeOS;

- (void).cxx_destruct;
- (id)initWithClient:(id)a0;
- (char)checkForUpdateFailureWithError:(id *)a0;
- (char)checkForPendingUpdateWithError:(id *)a0;
- (id)_queryCurrentStateWithError:(id *)a0;
- (id)cancelPendingUpdate;
- (char)checkForPreparedUpdateWithError:(id *)a0;
- (double)estimatedTimeRequiredForPrepareWithApply:(char)a0 options:(id)a1;
- (void)prepareUpdateWithPackageSpecifiers:(id)a0 apply:(char)a1 options:(id)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (char)updateAvailableForPackageSpecifiers:(id)a0;
- (char)updatePreparedForPackageSpecifiers:(id)a0;

@end
