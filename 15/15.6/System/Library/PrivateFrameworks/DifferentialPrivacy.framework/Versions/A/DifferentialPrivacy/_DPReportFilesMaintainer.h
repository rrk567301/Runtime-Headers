@class NSString;

@interface _DPReportFilesMaintainer : NSObject <_DPMaintenance>

@property (copy, nonatomic) NSString *reportsDirectoryPath;

+ (char)removeFilesFrom:(id)a0 olderThanSecond:(double)a1;
+ (id)reportsInDirectory:(id)a0;
+ (char)retireFiles:(id)a0 toDirectory:(id)a1;
+ (id)retiredReportsPath:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDirectoryPath:(id)a0;
- (char)doMaintenance;
- (void)scheduleMaintenanceWithName:(id)a0 database:(id)a1;

@end
