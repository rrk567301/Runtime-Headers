@class NSNumber, NSUUID, NSError, NSDate, ULOdometryStatus;

@interface ULOdometryMonitorEventCMOdometryStatus : ULEvent

@property (retain, nonatomic) ULOdometryStatus *odometryStatus;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSUUID *trajectoryUUID;
@property (retain, nonatomic) NSNumber *isRunning;

- (void).cxx_destruct;

@end
