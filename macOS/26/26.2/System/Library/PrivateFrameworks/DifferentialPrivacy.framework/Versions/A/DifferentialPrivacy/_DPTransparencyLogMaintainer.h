@class NSString;

@interface _DPTransparencyLogMaintainer : NSObject <_DPMaintenance>

@property (copy, nonatomic) NSString *reportsDirectoryPath;

+ (double)lifetimeOfFile:(id)a0;
+ (BOOL)checkAndRemoveFile:(id)a0;

- (id)initWithDirectoryPath:(id)a0;
- (void).cxx_destruct;
- (BOOL)doMaintenance;
- (id)init;
- (void)scheduleMaintenanceWithName:(id)a0 database:(id)a1;

@end
