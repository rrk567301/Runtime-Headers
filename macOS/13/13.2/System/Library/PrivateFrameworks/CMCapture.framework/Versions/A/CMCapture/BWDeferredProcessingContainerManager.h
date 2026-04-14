@interface BWDeferredProcessingContainerManager : BWDeferredContainerManagerBase {
    struct OpaqueFigCaptureDeferredContainerManager { } *_xpcContainerManager;
}

+ (id)sharedInstance;

- (id)init;
- (id)manifestsForApplicationID:(id)a0 err:(int *)a1;
- (int)deleteContainerForApplicationID:(id)a0 captureRequestIdentifier:(id)a1;
- (id)createProcessingContainerWithApplicationID:(id)a0 captureRequestIdentifier:(id)a1 openForPeeking:(BOOL)a2 err:(int *)a3;
- (void)releaseProcessingContainer:(id)a0;
- (int)waitForShaderCompilation;

@end
