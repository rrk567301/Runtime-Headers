@class NSSet, NSDate;

@interface MADManagedBackgroundActivitySchedule : NSManagedObject

@property (nonatomic) int activityID;
@property (nonatomic) double duration;
@property (nonatomic) int pid;
@property (nonatomic) short initialQoS;
@property (copy, nonatomic) NSDate *startTimestamp;
@property (copy, nonatomic) NSDate *lastUpdateTimestamp;
@property (nonatomic) int exitStatus;
@property (retain, nonatomic) NSSet *sessionLog;

+ (id)fetchRequest;
+ (int)_querySchedulingHistoryRecords:(id *)a0 predicate:(id)a1 sortDescriptors:(id)a2 managedObjectContext:(id)a3;
+ (id)activityIDColumnName;
+ (id)durationColumnName;
+ (id)exitStatusColumnName;
+ (int)fetchMostRecentSessionLogs:(id *)a0 forActivityID:(unsigned long long)a1 managedObjectContext:(id)a2;
+ (id)initialQoSColumnName;
+ (BOOL)isMACDPersistEnabled;
+ (BOOL)isMACDReadEnabled;
+ (id)lastUpdateTimestampColumnName;
+ (BOOL)migrateDataWithManagedObjectContext:(id)a0;
+ (id)pidColumnName;
+ (int)querySchedulingHistoryRecords:(id *)a0 forActivityID:(unsigned long long)a1 sinceDate:(id)a2;
+ (int)querySchedulingHistoryRecords:(id *)a0 forActivityID:(unsigned long long)a1 startDate:(id)a2 endDate:(id)a3 managedObjectContext:(id)a4;
+ (int)querySchedulingHistoryRecords:(id *)a0 startDate:(id)a1 endDate:(id)a2 managedObjectContext:(id)a3;
+ (id)sessionLogColumnName;
+ (id)startTimestampColumnName;
+ (void)updateSessionLogWithTaskID:(unsigned long long)a0 startTime:(id)a1 duration:(double)a2 exitStatus:(int)a3;

- (id)description;

@end
