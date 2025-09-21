@interface TSUFileProviderUtilities : NSObject

@property (class, readonly) BOOL isPauseSyncAPIAvailable;

+ (void)initialize;
+ (void)didUpdateAlternateContentsDocumentForSandboxedURL:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
+ (void)fetchLatestVersionURLOfPausedSandboxedURL:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
+ (BOOL)isPausedWithSandboxedURL:(id)a0 isPaused:(out BOOL *)a1 error:(id *)a2;
+ (void)pauseSyncOnSandboxedURL:(id)a0 completionQueue:(id)a1 completion:(id /* block */)a2;
+ (void)pauseSyncOnSandboxedURL:(id)a0 completionQueue:(id)a1 uuid:(id)a2 completion:(id /* block */)a3;
+ (BOOL)pauseSyncSynchronouslyOnSandboxedURL:(id)a0 error:(id *)a1;
+ (BOOL)pauseSyncSynchronouslyOnSandboxedURL:(id)a0 uuid:(id)a1 error:(id *)a2;
+ (void)resumeSyncOnSandboxedURL:(id)a0 preserveLocalChanges:(BOOL)a1 completionQueue:(id)a2 completion:(id /* block */)a3;
+ (void)resumeSyncOnSandboxedURL:(id)a0 preserveLocalChanges:(BOOL)a1 completionQueue:(id)a2 uuid:(id)a3 completion:(id /* block */)a4;
+ (void)setAlternateContentsURL:(id)a0 onSandboxedURL:(id)a1 completionQueue:(id)a2 completion:(id /* block */)a3;

- (id)init;

@end
