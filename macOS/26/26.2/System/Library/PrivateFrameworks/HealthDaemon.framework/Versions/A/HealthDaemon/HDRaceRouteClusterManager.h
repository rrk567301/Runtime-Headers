@class HDProfile;

@interface HDRaceRouteClusterManager : NSObject {
    HDProfile *_profile;
}

- (id)raceRouteClustersForActivityType:(unsigned long long)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)generateRaceRouteClustersWithLimit:(unsigned long long)a0 error:(id *)a1;
- (id)initWithProfile:(id)a0;

@end
