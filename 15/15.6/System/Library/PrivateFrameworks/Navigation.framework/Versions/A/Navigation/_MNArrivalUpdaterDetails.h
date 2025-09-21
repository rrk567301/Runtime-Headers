@class MNEVChargingStateMonitor, MNNavigationSessionState;

@interface _MNArrivalUpdaterDetails : NSObject

@property (retain, nonatomic) MNNavigationSessionState *navigationSessionState;
@property (nonatomic) char isEVCharging;
@property (retain, nonatomic) MNEVChargingStateMonitor *evChargingStateMonitor;
@property (nonatomic) char isInParkingDetectionRegion;

- (void).cxx_destruct;

@end
