@class NSString;

@interface _DPTransparencyLogMaintainer : NSObject <_DPMaintenance>

@property (copy, nonatomic) NSString *reportsDirectoryPath;

+ (double)lifetimeOfFile:(id)a0;
+ (BOOL)checkAndRemoveFile:(id)a0;

- (void)scheduleMaintenanceWithName:(id)a0 database:(id)a1;
- (id)init;
- (BOOL)doMaintenance;
- (id)initWithDirectoryPath:(id)a0;
- (void).cxx_destruct;

@end
