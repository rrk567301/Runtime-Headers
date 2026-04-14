@class NSString, NSDate, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SMMigrationActivity : NSObject

@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property (retain) NSMutableArray *childActivities;
@property (retain) NSObject<OS_dispatch_queue> *childActivitiesQueue;
@property (retain) NSString *name;
@property (retain) NSString *detail;
@property unsigned long long size;
@property double estimatedDuration;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)finish;
- (void)start;
- (BOOL)hasStarted;
- (BOOL)hasFinished;
- (double)activityLength;
- (void)addChildActivity:(id)a0;
- (id)initWithName:(id)a0 detail:(id)a1;

@end
