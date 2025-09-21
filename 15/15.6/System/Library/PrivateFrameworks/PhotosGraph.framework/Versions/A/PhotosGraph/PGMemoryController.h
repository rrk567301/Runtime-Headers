@class PGCurationManager, PGMemoryGenerationContext, PGGraph, PHPhotoLibrary, NSObject, NSMutableDictionary;
@protocol OS_os_log;

@interface PGMemoryController : NSObject {
    PGGraph *_graph;
    NSMutableDictionary *_momentsByMomentIDs;
}

@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) PGCurationManager *curationManager;
@property (readonly) NSObject<OS_os_log> *loggingConnection;
@property (copy) id /* block */ progressBlock;
@property (retain, nonatomic) PGMemoryGenerationContext *memoryGenerationContext;

+ (id)_localIdentifierOfMainPersonInEvent:(id)a0 prominentOnly:(char)a1;
+ (char)anyBlockedFeatureIn:(id)a0 isHitByEvent:(id)a1;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0 loggingConnection:(id)a1;
- (char)anyBlockedFeatureIsHitByEvent:(id)a0;
- (id)assetCollectionWithAssetLocalIdentifiers:(id)a0;
- (id)initWithGraph:(id)a0 photoLibrary:(id)a1 loggingConnection:(id)a2;
- (char)libraryHasEnoughProcessedScenes:(char)a0 andProcessedFaces:(char)a1;
- (char)libraryHasEnoughScenesProcessed:(char)a0 haveFacesProcessed:(char)a1 forYear:(id)a2 withGraph:(id)a3;
- (id)momentForMomentID:(id)a0;
- (char)momentNodesHaveScenesProcessed:(id)a0 inGraph:(id)a1;

@end
