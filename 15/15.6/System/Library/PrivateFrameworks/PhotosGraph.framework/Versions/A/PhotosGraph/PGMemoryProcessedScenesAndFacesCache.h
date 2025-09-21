@class PGGraphMomentNodeCollection, NSMutableDictionary, PHPhotoLibrary, NSNumber;

@interface PGMemoryProcessedScenesAndFacesCache : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSMutableDictionary *_scenesAreProcessedEnoughByYear;
    NSMutableDictionary *_scenesAreProcessedWithMinimumSceneAnalysisVersion;
    NSMutableDictionary *_facesAreProcessedEnoughByYear;
    PGGraphMomentNodeCollection *_momentNodesWithEnoughScenesProcessed;
    PGGraphMomentNodeCollection *_momentNodesWithEnoughFacesProcessed;
    NSNumber *_petVIPModelExistsAsNumber;
}

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (char)petVIPModelExists;
- (char)libraryHasEnoughScenesProcessedWithMinimumSceneAnalysisVersion:(unsigned long long)a0;
- (char)allMomentNodesHaveScenesProcessed:(id)a0 inGraph:(id)a1;
- (char)allMomentNodesInCollectionHaveFacesProcessed:(id)a0;
- (char)allMomentNodesInCollectionHaveScenesProcessed:(id)a0;
- (char)libraryHasEnoughScenesProcessed:(char)a0 andProcessedFaces:(char)a1;
- (char)libraryHasEnoughScenesProcessed:(char)a0 andProcessedFaces:(char)a1 forYear:(long long)a2 inGraph:(id)a3;
- (id)momentNodesWithEnoughFacesProcessedInGraph:(id)a0;
- (id)momentNodesWithEnoughScenesProcessedInGraph:(id)a0;
- (void)setFacesAreProcessedEnoughInYear:(id)a0;
- (void)setScenesAreProcessedEnoughInYear:(id)a0;

@end
