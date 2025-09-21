@class NSTimer, NSXPCConnection;

@interface CLMapsXPCServiceManager : NSObject {
    NSTimer *fInactivityTimer;
    double fTimerUpdateMachContTime;
}

@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)updateTimer;
- (void)createConnection;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)cancelRoadDataRequest;
- (void)clearMemoryAndExitHelperProcessCleanly;
- (void)collectMapDataOfType:(long long)a0 aroundCoordinate:(struct CLLocationCoordinate2D { double x0; double x1; })a1 inRadius:(double)a2 allowNetwork:(BOOL)a3 preferCachedTiles:(BOOL)a4 isPedestrianOrCycling:(BOOL)a5 clearTiles:(BOOL)a6 callSynchronously:(BOOL)a7 WithReply:(id /* block */)a8;
- (void)constructRouteFromLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a0 roadID:(unsigned long long)a1 clRoadID:(unsigned long long)a2 projection:(double)a3 toLocation:(struct CLLocationCoordinate2D { double x0; double x1; })a4 toRoadID:(unsigned long long)a5 toCLRoadID:(unsigned long long)a6 toProjection:(double)a7 maxRouteLength:(double)a8 allowNetwork:(BOOL)a9 preferCachedTiles:(BOOL)a10 isPedestrianOrCycling:(BOOL)a11 clearTiles:(BOOL)a12 iOSTime:(double)a13 familiarityData:(id)a14 useMapsAPIForIntersectionQuery:(BOOL)a15 withReply:(id /* block */)a16;
- (void)onTimerFire:(id)a0;
- (void)releaseMapHelperServiceOSTransaction;
- (void)stopConstructRouteFromLocation;

@end
