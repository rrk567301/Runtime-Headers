@class HDProfile, HDAssertion;

@interface HDWorkoutClusterManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HDAssertion *_accessibilityAssertion;
}

@property (weak, nonatomic) HDProfile *profile;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0;
- (id)accessibilityAssertion;
- (id)allWorkoutClustersWithError:(id *)a0;
- (id)allWorkoutUUIDsForClusterUUID:(id)a0 error:(id *)a1;
- (char)createWorkoutCluster:(id)a0 error:(id *)a1;
- (char)deleteWorkoutClusterWithUUID:(id)a0 error:(id *)a1;
- (char)enumerateRouteLocationsForWorkoutUUID:(id)a0 startDate:(id)a1 limit:(unsigned long long)a2 error:(id *)a3 handler:(id /* block */)a4;
- (char)performUsingAccessibilityAssertionWithError:(id *)a0 block:(id /* block */)a1;
- (void)takeAccessibilityAssertionIfNeeded;
- (char)updateWorkoutClusterWithUUID:(id)a0 newRelevance:(id)a1 newLastWorkoutUUID:(id)a2 newBestWorkoutUUID:(id)a3 newWorkoutAssociations:(id)a4 workoutAssociationsToRemove:(id)a5 error:(id *)a6;
- (char)updateWorkoutClusterWithUUID:(id)a0 newRouteLabel:(id)a1 error:(id *)a2;
- (char)updateWorkoutClusterWithUUID:(id)a0 newRouteSnapshot:(id)a1 error:(id *)a2;
- (id)workoutClusterContainingWorkoutUUID:(id)a0 error:(id *)a1;
- (id)workoutClustersContainingWorkoutUUIDs:(id)a0 error:(id *)a1;
- (id)workoutCountWithFilter:(id)a0 error:(id *)a1;
- (id)workoutRouteSnapshotForClusterUUID:(id)a0 error:(id *)a1;
- (id)workoutsWithFilter:(id)a0 anchor:(id)a1 limit:(unsigned long long)a2 newAnchor:(id *)a3 error:(id *)a4;
- (id)workoutsWithFilter:(id)a0 limit:(unsigned long long)a1 sortDescriptors:(id)a2 error:(id *)a3;

@end
