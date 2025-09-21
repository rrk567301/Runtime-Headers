@class OS_os_log, CLSServiceManager, PGGraph, PHPhotoLibrary, CLSPublicEventManager, CLSSceneTaxonomyHierarchy;

@interface PGPhotosChallengeEvaluationContext : NSObject

@property (nonatomic, readonly) PGGraph *graph;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) CLSSceneTaxonomyHierarchy *sceneTaxonomy;
@property (nonatomic, readonly) CLSServiceManager *serviceManager;
@property (nonatomic, readonly) CLSPublicEventManager *publicEventManager;
@property (nonatomic, readonly) OS_os_log *loggingConnection;

- (id)init;
- (void).cxx_destruct;

@end
