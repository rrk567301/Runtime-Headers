@class RTDefaultsManager, RTLearnedLocationManager, RTVisitManager, NSDate, RTMotionActivityManager;

@interface RTBluePOIMonitorEnabler : RTService {
    BOOL _isDriving;
    BOOL _atHomeOrWork;
}

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) NSDate *stationaryStartDate;
@property (readonly, nonatomic) BOOL enabled;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTVisitManager *visitManager;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;

- (void)onVisitManagerNotification:(id)a0;
- (void)_setup;
- (void)onVisitManagerVisitIncidentNotification:(id)a0;
- (id)init;
- (void)_onVisitManagerNotification:(id)a0;
- (void).cxx_destruct;
- (void)onMotionActivityManagerNotification:(id)a0;
- (id)initWithDefaultsManager:(id)a0;

@end
