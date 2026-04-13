@class SHInsightsPersistenceController;

@interface SHAffinityGroupQuery : NSObject

@property (retain) SHInsightsPersistenceController *dataManager;

+ (void)affinityGroupsForLocation:(id)a0 atDate:(id)a1 completionHandler:(id /* block */)a2;
+ (void)affinityGroupsFromReferenceProductIDs:(id)a0 filteredByTasteProductIDs:(id)a1 completionHandler:(id /* block */)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDataManager:(id)a0;
- (void)affinityGroupsForLocation:(id)a0 atDate:(id)a1 completionHandler:(id /* block */)a2;
- (void)affinityGroupsFromReferenceProductIDs:(id)a0 filteredByTasteProductIDs:(id)a1 completionHandler:(id /* block */)a2;
- (id)affinityGroupsAtCohesionLevel:(long long)a0 forQuery:(id)a1 tracks:(id)a2 filteredBy:(id)a3;
- (id)filterQueryTracks:(id)a0 byTracksWithinCluster:(id)a1;

@end
