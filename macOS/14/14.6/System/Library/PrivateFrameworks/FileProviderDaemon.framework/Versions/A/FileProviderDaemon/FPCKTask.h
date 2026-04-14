@class NSObject;
@protocol OS_dispatch_queue;

@interface FPCKTask : NSObject {
    NSObject<OS_dispatch_queue> *workQueue;
}

+ (id)sharedManager;
+ (id)xpcServiceProxy;
+ (id)buildPauseResult:(BOOL)a0 semaphore:(id)a1;
+ (void)runFPCKForDomain:(id)a0 domainUserInfo:(id)a1 domainRootURL:(id)a2 databaseBackupPath:(id)a3 urls:(id)a4 volumeRole:(unsigned int)a5 options:(unsigned long long)a6 reason:(unsigned long long)a7 fpfs:(BOOL)a8 iCDPackageDetection:(BOOL)a9 shouldPause:(id /* block */)a10 completionHandler:(id /* block */)a11;

- (id)init;
- (void).cxx_destruct;
- (void)dumpDatabaseAt:(id)a0 fullDump:(BOOL)a1 writeTo:(id)a2 completionHandler:(id /* block */)a3;
- (void)_launchXPCServiceWithPauseChecker:(id)a0 proxy:(id)a1 completionHandler:(id /* block */)a2;
- (void)_prepareXPCService:(id)a0 domainUserInfo:(id)a1 domainRootURL:(id)a2 databaseBackupPath:(id)a3 urls:(id)a4 volumeRole:(unsigned int)a5 options:(unsigned long long)a6 reason:(unsigned long long)a7 fpfs:(BOOL)a8 iCDPackageDetection:(BOOL)a9 completionHandler:(id /* block */)a10;
- (unsigned long long)_resolveLaunchType:(unsigned long long)a0;
- (void)prepareFPCKRun:(id)a0 domainUserInfo:(id)a1 domainRootURL:(id)a2 databaseBackupPath:(id)a3 urls:(id)a4 volumeRole:(unsigned int)a5 options:(unsigned long long)a6 reason:(unsigned long long)a7 fpfs:(BOOL)a8 iCDPackageDetection:(BOOL)a9 launchType:(unsigned long long)a10 runOnWorkQueue:(BOOL)a11 completionHandler:(id /* block */)a12;
- (void)scheduleFPCKRun:(id)a0 domainUserInfo:(id)a1 domainRootURL:(id)a2 databaseBackupPath:(id)a3 urls:(id)a4 volumeRole:(unsigned int)a5 options:(unsigned long long)a6 reason:(unsigned long long)a7 fpfs:(BOOL)a8 iCDPackageDetection:(BOOL)a9 launchType:(unsigned long long)a10 pauseChecker:(id)a11 shouldPause:(id /* block */)a12 proxy:(id)a13 completionHandler:(id /* block */)a14;

@end
