@class NSMutableArray;

@interface GEORouteTrafficBuilder : NSObject {
    NSMutableArray *_trafficColors;
    NSMutableArray *_trafficOffsets;
    double _trafficDistance;
}

- (id)init;
- (void).cxx_destruct;
- (id)trafficColors;
- (void)buildTrafficForRoute:(id)a0;
- (void)buildTrafficForRoute:(id)a0 etaRoute:(id)a1;
- (void)_buildTrafficForRoute:(id)a0 etaRoute:(id)a1;
- (void)_buildTrafficForRoute:(id)a0 toDistance:(double)a1;
- (void)addTrafficFromRoute:(id)a0 withStepRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)addTrafficFromRoute:(id)a0 from:(unsigned int)a1 to:(unsigned int)a2;
- (void)addTrafficFromETARoute:(id)a0;
- (void)_removeDuplicateTraffic;
- (void)copyTrafficToRoute:(id)a0;
- (id)trafficOffsets;

@end
