@class NSArray, NSDictionary;

@interface HDSleepPeriodInfo : NSObject

@property (readonly, copy, nonatomic) NSArray *userSetSchedules;
@property (readonly, copy, nonatomic) NSArray *incompleteSessions;
@property (readonly, copy, nonatomic) NSDictionary *mappedTimezones;

- (id)init;
- (void).cxx_destruct;
- (id)initWithUserSetSchedules:(id)a0 incompleteSessions:(id)a1 mappedTimezones:(id)a2;

@end
