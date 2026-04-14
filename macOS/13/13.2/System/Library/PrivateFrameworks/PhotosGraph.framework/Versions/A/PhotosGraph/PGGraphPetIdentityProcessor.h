@class PGGraph, PHPhotoLibrary, NSObject, PGGraphPetIdentityProcessorCache;
@protocol OS_os_log;

@interface PGGraphPetIdentityProcessor : NSObject

@property (nonatomic) short detectionType;
@property (weak, nonatomic) PGGraph *graph;
@property (weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (readonly, nonatomic) PGGraphPetIdentityProcessorCache *cache;
@property (nonatomic) BOOL petPrintClusteringEnabled;

+ (id)fetchPetPersonsWithDetectionType:(short)a0 photoLibrary:(id)a1;
+ (double)petFaceClusteringThreshold;
+ (unsigned long long)petFaceClusterMinSize;
+ (unsigned long long)petFaceClusteringType;

- (void).cxx_destruct;
- (id)initWithDetectionType:(short)a0 photoLibrary:(id)a1 graph:(id)a2 loggingConnection:(id)a3 cache:(id)a4;
- (BOOL)updatePetIdentityWithError:(id *)a0 progressBlock:(id /* block */)a1;
- (id)momentNodesForFaces:(id)a0;
- (id)petFacesAtHome;
- (id)fetchPetPersons;
- (id)_fetchPetFaceGroups;
- (id)_createClustersFromPetFaces:(id)a0 withErrors:(id)a1 progressBlock:(id /* block */)a2;
- (void)_sortFaceClusters:(id)a0;
- (BOOL)updateFacesNameSourceToSourceGraphIfNeeded:(id)a0 error:(id *)a1;
- (BOOL)updatePetFaceGroupsForFaceClusters:(id)a0 error:(id *)a1;
- (BOOL)updatePetPersonsForFaceClusters:(id)a0 error:(id *)a1;
- (id)removeClusterMatchingPetEntityFaceSet:(id)a0 fromFaceClustersAtHome:(id)a1;

@end
