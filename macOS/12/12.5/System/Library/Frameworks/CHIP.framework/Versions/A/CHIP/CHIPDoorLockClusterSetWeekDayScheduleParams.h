@class NSNumber;

@interface CHIPDoorLockClusterSetWeekDayScheduleParams : NSObject

@property (retain, nonatomic) NSNumber *weekDayIndex;
@property (retain, nonatomic) NSNumber *userIndex;
@property (retain, nonatomic) NSNumber *daysMask;
@property (retain, nonatomic) NSNumber *startHour;
@property (retain, nonatomic) NSNumber *startMinute;
@property (retain, nonatomic) NSNumber *endHour;
@property (retain, nonatomic) NSNumber *endMinute;

- (id)init;
- (void).cxx_destruct;

@end
