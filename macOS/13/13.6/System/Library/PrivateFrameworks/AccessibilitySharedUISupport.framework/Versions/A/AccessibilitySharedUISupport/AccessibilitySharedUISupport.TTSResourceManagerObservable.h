@interface AccessibilitySharedUISupport.TTSResourceManagerObservable : NSObject <TTSAXResourceManagerObserver> {
    void /* unknown type, empty encoding */ _groupedResources;
    void /* unknown type, empty encoding */ _idIndexMap;
    void /* unknown type, empty encoding */ shouldIncludeResource;
    void /* unknown type, empty encoding */ initiallySelectedIdentifier;
    void /* unknown type, empty encoding */ syntheticResourceIdentifier;
    void /* unknown type, empty encoding */ loadingQueue;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)downloadProgressForVoiceId:(id)a0 progress:(float)a1 storageSize:(long long)a2 requiredDiskSpace:(BOOL)a3;
- (void)finishedDeletingResource:(id)a0;
- (void)finishedDownloadingResource:(id)a0 wasCancelled:(BOOL)a1;
- (void)resourceCacheDidReceiveUpdate;
- (void)loadResourcesWithCompletion:(id /* block */)a0;
- (void)removeResourceWithId:(id)a0;
- (void)removeSyntheticResource;

@end
