@class NSMutableDictionary;

@interface _AXFResourceMonitor : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
@property (retain, nonatomic) NSMutableDictionary *resourceMonitoringList;
@property (retain, nonatomic) NSMutableDictionary *monitoringResourceExceedingTimestamp;

+ (id)processNameFromProcessID:(int)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_processInfoForPID:(int)a0;
- (BOOL)_checkResourceExceedLimitForProcess:(id)a0 criteria:(id)a1;
- (BOOL)_resourceExceedLimitForProcess:(id)a0 criteria:(id)a1;
- (BOOL)_resourceExceedDuration:(double)a0 criteria:(id)a1;
- (void)startObserveringPID:(int)a0 criteria:(id)a1;
- (void)stopObservingPID:(int)a0;
- (void)stopObservingAllProcess;
- (id)processesExceedingResourceLimit;

@end
