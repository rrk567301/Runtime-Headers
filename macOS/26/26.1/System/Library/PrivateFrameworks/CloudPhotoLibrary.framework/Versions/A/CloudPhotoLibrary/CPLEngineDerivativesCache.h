@class NSURL, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CPLEngineDerivativesCache : NSObject {
    NSURL *_cacheMappingURL;
    BOOL _tryCreatingCacheFolder;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isGeneratingDerivatives;
    NSMutableArray *_delayedGeneratedDerivativesCalls;
}

@property (readonly, copy, nonatomic) NSURL *cacheURL;
@property (retain, nonatomic) Class derivativeGeneratorClass;

- (void)_createCacheFolderIfNecessary;
- (BOOL)_checkResource:(id)a0 name:(id)a1 error:(id *)a2;
- (id)initWithCacheURL:(id)a0;
- (void)_noteGeneratedResources:(id)a0 haveBeenGeneratedForReferenceResource:(id)a1 adjustment:(id)a2 includePosterFrame:(BOOL)a3;
- (id)_finalFolderURLForGeneratedResourcesWithReferenceResource:(id)a0 adjustment:(id)a1 includePosterFrame:(BOOL)a2;
- (id)_cachedResourcesForReferenceResource:(id)a0 adjustment:(id)a1 includePosterFrame:(BOOL)a2;
- (id)_folderNameForReferenceResource:(id)a0 adjustment:(id)a1 includePosterFrame:(BOOL)a2;
- (BOOL)_isUnsupportedFormatError:(id)a0;
- (void)_updateChange:(id *)a0 fromOldChange:(id)a1 withResources:(id)a2 excludeImages:(BOOL)a3;
- (BOOL)_checkGeneratedResources:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (void)_generateDerivativesForChange:(id)a0 derivativesFilter:(id)a1 fingerprintScheme:(id)a2 completionHandler:(id /* block */)a3;
- (id)_cacheKeyForReferenceResource:(id)a0 adjustments:(id)a1 includePosterFrame:(BOOL)a2;
- (id)_cleanTempFolderURLForGeneratedResourcesWithReferenceResource:(id)a0 adjustment:(id)a1 includePosterFrame:(BOOL)a2;
- (void)discardCache;
- (void)generateDerivativesForChange:(id)a0 derivativesFilter:(id)a1 fingerprintScheme:(id)a2 completionHandler:(id /* block */)a3;
- (id)_tempFolderURLForGeneratedResourcesWithReferenceResource:(id)a0 adjustment:(id)a1 includePosterFrame:(BOOL)a2;

@end
