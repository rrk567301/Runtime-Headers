@class PGCurationManager, PGMemoryGenerationContext, PGGraph, PHPhotoLibrary, NSObject, NSMutableDictionary;
@protocol OS_os_log;

@interface PGMemoryController : NSObject {
    PGGraph *_graph;
    NSMutableDictionary *_momentsByMomentIDs;
}

@property (readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) PGCurationManager *curationManager;
@property (readonly) NSObject<OS_os_log> *loggingConnection;
@property (retain, nonatomic) PGMemoryGenerationContext *memoryGenerationContext;

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0 loggingConnection:(id)a1;
- (id)assetCollectionWithAssetLocalIdentifiers:(id)a0;
- (id)initWithGraph:(id)a0 photoLibrary:(id)a1 loggingConnection:(id)a2;
- (id)momentForMomentID:(id)a0;

@end
