@class MABrainScanner, MABrainBundle, NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MABrainUpdater : NSObject {
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    MABrainScanner *_scanner;
    NSDictionary *_info;
    NSString *_stagedRestoreVersion;
    int _waitForAppleConnectToken;
    id /* block */ _waitForAppleConnectAction;
}

@property (readonly, nonatomic) NSDictionary *info;
@property (readonly, nonatomic) MABrainBundle *bundle;

+ (id)sharedInstance;

- (void)commit;
- (void)start:(id)a0;
- (BOOL)backgroundBrainScansEnabled;
- (void)callback:(id /* block */)a0 error:(id)a1;
- (BOOL)stage:(id)a0 error:(id *)a1;
- (void)purge:(id)a0 completion:(id /* block */)a1;
- (void)garbageCollect;
- (void)install:(id)a0 asset:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)schedule:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)hasAppleConnect;
- (void)installAndConnectToServiceForAsset:(id)a0 withSessionID:(id)a1 options:(id)a2 updateCompletedCompletion:(id /* block */)a3;
- (id)init;
- (void)downloadInstallAndConnectToServiceForAsset:(id)a0 withSessionID:(id)a1 options:(id)a2 updateCompletedCompletion:(id /* block */)a3;
- (void)update:(id)a0 completion:(id /* block */)a1;
- (BOOL)writePlist:(id)a0 path:(id)a1 error:(id *)a2;
- (BOOL)brainUpdatesEnabled;

@end
