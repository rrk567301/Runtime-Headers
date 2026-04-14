@class NSString;

@interface _DPTokenFetcher : NSObject <_DPMaintenance>

@property (readonly, copy, nonatomic) NSString *taskName;
@property (nonatomic) unsigned long long taskPeriodSeconds;

+ (unsigned long long)getTaskPeriodSeconds;

- (void)scheduleMaintenanceWithName:(id)a0 database:(id)a1;
- (void)doMaintenance;
- (void).cxx_destruct;
- (BOOL)cleanupStaleTokensInPath:(id)a0;
- (id)initWithTaskName:(id)a0;

@end
