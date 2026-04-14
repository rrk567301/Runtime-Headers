@class NSString, MKQuadTrie, NSMutableSet, NSHashTable, GEOFeatureStyleAttributes;
@protocol MKCustomFeatureStoreDelegate;

@interface _MKCustomFeatureStore : NSObject <VKCustomFeatureDataSource> {
    MKQuadTrie *_annotationsTrie;
    NSMutableSet *_globalAnnotations;
    NSHashTable *_observers;
    NSString *_annotationText;
    NSString *_annotationLocale;
    unsigned char _sceneState;
}

@property (weak, nonatomic) id<MKCustomFeatureStoreDelegate> delegate;
@property (readonly, nonatomic) BOOL isClusteringEnabled;
@property (copy, nonatomic) GEOFeatureStyleAttributes *clusterStyleAttributes;
@property (nonatomic) unsigned char sceneID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)setAnnotations:(id)a0;
- (void)addAnnotations:(id)a0;
- (void)removeAnnotations:(id)a0;
- (void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)a0 text:(id *)a1 locale:(id *)a2;
- (void)getClusterImageTextForClusterFeatureCount:(unsigned long long)a0 text:(id *)a1 locale:(id *)a2;
- (unsigned char)sceneState;
- (id)annotationsInMapRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (id)globalAnnotations;
- (id)initWithClustering:(BOOL)a0;
- (void)showScene;
- (void)hideScene;
- (void)setClusterAnnotationText:(id)a0 locale:(id)a1;
- (void)_clearTileAnnotations;
- (void)_clearGlobalAnnotations;
- (unsigned long long)annotationCount;
- (id)allAnnotations;
- (void)_invalidateRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (void)_invalidateGlobalAnnotations;
- (void)_setSceneState:(unsigned char)a0;

@end
