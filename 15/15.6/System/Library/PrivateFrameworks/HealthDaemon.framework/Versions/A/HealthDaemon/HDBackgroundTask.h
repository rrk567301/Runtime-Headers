@class NSDictionary, NSObject, NSDate;
@protocol OS_xpc_object;

@interface HDBackgroundTask : NSObject {
    NSObject<OS_xpc_object> *_job;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSDictionary *userContext;
@property (nonatomic) char shiftsDatesWithSystemClockChanges;
@property (nonatomic) char allowsPowerOptimizedScheduling;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)taskExpired;
- (char)taskSatisfied;
- (char)taskValid;

@end
