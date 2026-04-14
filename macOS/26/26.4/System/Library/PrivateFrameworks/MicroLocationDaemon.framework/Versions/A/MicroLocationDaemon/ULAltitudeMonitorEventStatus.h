@class NSUUID, ULAltitudeStatus, NSError, NSDate, NSNumber;

@interface ULAltitudeMonitorEventStatus : ULEvent

@property (retain, nonatomic) ULAltitudeStatus *altitudeStatus;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDate *errorDate;
@property (retain, nonatomic) NSUUID *altitudeSessionUUID;
@property (retain, nonatomic) NSNumber *isRunning;

- (void).cxx_destruct;

@end
