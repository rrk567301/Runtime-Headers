@class GSSyncedDirectoryState, NSWindow;

@interface GSSyncedDirectory : NSObject {
    void /* unknown type, empty encoding */ directory;
}

@property (nonatomic, readonly) GSSyncedDirectoryState *directoryState;

+ (void)cleanupDirectoryForContainerIdentifier:(id)a0;
+ (void)closeAllDirectories;
+ (id)openDirectoryForContainerIdentifier:(id)a0;

- (id)init:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)close;
- (void)finishSyncing:(NSWindow *)a0 completionHandler:(void (^)(void))a1;
- (void)finishSyncingWithCompletionHandler:(void (^)(void))a0;
- (void)resolveConflictsWithVersion:(id)a0;
- (void)triggerPendingUploadWithCompletionHandler:(void (^)(BOOL))a0;

@end
