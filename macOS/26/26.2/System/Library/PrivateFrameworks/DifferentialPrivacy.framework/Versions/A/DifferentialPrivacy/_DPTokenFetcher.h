@class NSString;

@interface _DPTokenFetcher : NSObject <_DPMaintenance>

@property (readonly, copy, nonatomic) NSString *taskName;
@property (nonatomic) unsigned long long taskPeriodSeconds;

+ (unsigned long long)getTaskPeriodSeconds;

- (void).cxx_destruct;
- (void)doMaintenance;
- (void)scheduleMaintenanceWithName:(id)a0 database:(id)a1;
- (BOOL)cleanupStaleTokensInPath:(id)a0;
- (id)initWithTaskName:(id)a0;

@end
