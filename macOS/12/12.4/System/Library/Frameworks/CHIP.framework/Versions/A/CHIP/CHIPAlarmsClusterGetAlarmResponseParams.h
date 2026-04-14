@class NSNumber;

@interface CHIPAlarmsClusterGetAlarmResponseParams : NSObject

@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSNumber *alarmCode;
@property (retain, nonatomic) NSNumber *clusterId;
@property (retain, nonatomic) NSNumber *timeStamp;

- (id)init;
- (void).cxx_destruct;

@end
