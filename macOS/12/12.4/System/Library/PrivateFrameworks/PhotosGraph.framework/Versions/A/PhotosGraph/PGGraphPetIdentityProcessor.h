@class PGGraph, PHPhotoLibrary, NSObject;
@protocol OS_os_log;

@interface PGGraphPetIdentityProcessor : NSObject

@property (nonatomic) short detectionType;
@property (weak, nonatomic) PGGraph *graph;
@property (weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (retain, nonatomic) NSObject<OS_os_log> *loggingConnection;
@property (nonatomic) BOOL petPrintClusteringEnabled;

+ (double)petFaceClusteringThreshold;
+ (unsigned long long)petFaceClusteringType;
+ (unsigned long long)petFaceClusterMinSize;

- (void).cxx_destruct;
- (id)initWithDetectionType:(short)a0 photoLibrary:(id)a1 graph:(id)a2 loggingConnection:(id)a3;
- (BOOL)updatePetIdentityWithError:(id *)a0 progressBlock:(id /* block */)a1;
- (id)momentNodesForFaces:(id)a0;
- (id)_fetchPetFacesInMomentsForUUIDs:(id)a0;
- (id)petFacesAtHome;
- (id)_createClustersFromPetFaces:(id)a0 withErrors:(id)a1 progressBlock:(id /* block */)a2;
- (BOOL)updatePetFaceGroupsForFaceClusters:(id)a0 error:(id *)a1;
- (BOOL)updatePetPersonsForFaceClusters:(id)a0 error:(id *)a1;
- (BOOL)updateFacesNameSourceToSourceGraphIfNeeded:(id)a0 error:(id *)a1;
- (id)_fetchPetFaceGroups;
- (void)_sortFaceClusters:(id)a0;
- (id)removeClusterMatchingPetEntityFaceSet:(id)a0 fromFaceClustersAtHome:(id)a1;
- (id)fetchPetPersons;

@end
