@class NSArray, NSTimer, MNActiveRouteInfo, MNLocation;
@protocol MNTimeAndDistanceUpdaterDelegate;

@interface MNTimeAndDistanceUpdater : NSObject {
    MNLocation *_location;
    NSArray *_routes;
    NSTimer *_minuteTimer;
    MNActiveRouteInfo *_mainRoute;
    unsigned long long _currentLogType;
}

@property (weak, nonatomic) id<MNTimeAndDistanceUpdaterDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startUpdating;
- (void)stopUpdating;
- (void)setLocation:(id)a0 notificationType:(unsigned long long)a1;
- (void)setRoutes:(id)a0 mainRoute:(id)a1 location:(id)a2 notificationType:(unsigned long long)a3;
- (void)updateDisplayETAForRoute:(id)a0 notificationType:(unsigned long long)a1;
- (id)_displayETAInfoForRoute:(id)a0 routeCoordinate:(struct { unsigned int x0; float x1; })a1;
- (id)_routeDistanceInfoForRoute:(id)a0 routeCoordinate:(struct { unsigned int x0; float x1; })a1;
- (id)_batteryChargeInfoForRoute:(id)a0 routeCoordinate:(struct { unsigned int x0; float x1; })a1;
- (void)_startTimerToNextMinute;
- (void)_logDisplayETAInfo:(id)a0 logType:(unsigned long long)a1;

@end
