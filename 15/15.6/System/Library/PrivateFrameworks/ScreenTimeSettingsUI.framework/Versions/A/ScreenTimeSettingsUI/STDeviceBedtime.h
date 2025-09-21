@class NSString, STBlueprintScheduleSimpleItem, NSDictionary;

@interface STDeviceBedtime : NSObject <NSCopying>

@property (class, readonly) STBlueprintScheduleSimpleItem *defaultBedtimeSchedule;

@property (nonatomic) char deviceBedtimeEnabled;
@property (nonatomic) char askForMoreTime;
@property (nonatomic) char shouldAllowEditing;
@property (readonly, copy) NSString *scheduleText;
@property (copy) STBlueprintScheduleSimpleItem *simpleSchedule;
@property (copy) NSDictionary *scheduleByWeekdayIndex;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBlueprint:(id)a0;

@end
