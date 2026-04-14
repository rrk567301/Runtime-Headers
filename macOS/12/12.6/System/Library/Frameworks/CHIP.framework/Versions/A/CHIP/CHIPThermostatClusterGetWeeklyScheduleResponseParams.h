@class NSNumber, NSArray;

@interface CHIPThermostatClusterGetWeeklyScheduleResponseParams : NSObject

@property (retain, nonatomic) NSNumber *numberOfTransitionsForSequence;
@property (retain, nonatomic) NSNumber *dayOfWeekForSequence;
@property (retain, nonatomic) NSNumber *modeForSequence;
@property (retain, nonatomic) NSArray *payload;

- (id)init;
- (void).cxx_destruct;

@end
