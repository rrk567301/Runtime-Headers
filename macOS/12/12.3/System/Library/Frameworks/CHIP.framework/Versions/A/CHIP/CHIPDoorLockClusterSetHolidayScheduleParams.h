@class NSNumber;

@interface CHIPDoorLockClusterSetHolidayScheduleParams : NSObject

@property (retain, nonatomic) NSNumber *holidayIndex;
@property (retain, nonatomic) NSNumber *localStartTime;
@property (retain, nonatomic) NSNumber *localEndTime;
@property (retain, nonatomic) NSNumber *operatingMode;

- (id)init;
- (void).cxx_destruct;

@end
