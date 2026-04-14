@class NSUserDefaults, NSDate;
@protocol ATXLocationManagerProtocol, ATXUpdatePredictionsDelegate;

@interface ATXEnterLOIUpdateSource : NSObject <ATXUpdatePredictionsSource>

@property (retain, nonatomic) NSDate *now;
@property (weak, nonatomic) id<ATXUpdatePredictionsDelegate> delegate;
@property (readonly, nonatomic) id<ATXLocationManagerProtocol> locationManager;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;

- (void)_registerNotificationListeners;
- (id)_regionIdentifierForLocationOfInterestType:(long long)a0;
- (void)locationManagerDidEnterRegion:(id)a0;
- (void).cxx_destruct;
- (void)updateMonitoredRegionsIfNecessaryWithReply:(id /* block */)a0;
- (void)_start;
- (void)locationManagerDidExitRegion:(id)a0;
- (id)initWithLocationManager:(id)a0 userDefaults:(id)a1;
- (id)init;
- (void)dealloc;

@end
