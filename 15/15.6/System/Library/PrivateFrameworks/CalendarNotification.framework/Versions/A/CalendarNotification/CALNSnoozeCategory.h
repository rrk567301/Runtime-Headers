@class NSString, NSArray;

@interface CALNSnoozeCategory : NSObject {
    double _timedExpirationInterval;
    char _relativeToEnd;
    char _validForAllDay;
}

@property (readonly, nonatomic) NSString *suffix;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) double leeway;

+ (id)snoozeCategories;
+ (id)snoozeCategoryForEventWithStartDate:(id)a0 endDate:(id)a1 now:(id)a2 isAllDay:(char)a3;

- (void).cxx_destruct;
- (id)expirationDateForEventWithStartDate:(id)a0 endDate:(id)a1 isAllDay:(char)a2;
- (id)initWithSuffix:(id)a0 timedExpirationInterval:(double)a1 leeway:(double)a2 relativeToEnd:(char)a3 validForAllDay:(char)a4 actions:(id)a5;

@end
