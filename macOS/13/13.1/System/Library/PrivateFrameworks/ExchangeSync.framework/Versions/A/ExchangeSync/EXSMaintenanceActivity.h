@class EXSSyncEngine, NSBackgroundActivityScheduler;

@interface EXSMaintenanceActivity : NSObject

@property (retain, nonatomic) EXSSyncEngine *syncEngine;
@property (retain, nonatomic) NSBackgroundActivityScheduler *scheduler;

+ (id)log;

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithSyncEngine:(id)a0;
- (void)scheduleMaintenanceActivity;
- (id /* block */)_doMaintenanceActivity;

@end
