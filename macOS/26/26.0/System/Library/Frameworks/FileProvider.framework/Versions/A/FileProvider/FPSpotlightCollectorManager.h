@class NSSet, NSMutableDictionary, NSArray;

@interface FPSpotlightCollectorManager : NSObject <FPSpotlightCollectorDelegate>

@property (retain) id providerDomainChangesToken;
@property (retain) NSSet *currentMountPoints;
@property (readonly) NSSet *effectiveCurrentMountPoints;
@property (retain) NSMutableDictionary *collectorByDescriptor;
@property BOOL areMountQueriesEnabled;
@property (readonly, nonatomic) NSArray *collectors;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_recursiveDescription;
- (void)registerDataSource:(id)a0;
- (void)unregisterDataSource:(id)a0;
- (void)collectorDidFinish:(id)a0;
- (id)mountPointsForCollector:(id)a0;
- (void)resumeCollectors;
- (void)suspendCollectors;

@end
