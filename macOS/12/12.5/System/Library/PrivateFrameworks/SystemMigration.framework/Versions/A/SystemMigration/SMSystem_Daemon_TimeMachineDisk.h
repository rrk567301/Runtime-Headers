@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SMSystem_Daemon_TimeMachineDisk : SMSystem_Daemon

@property (retain) NSMutableArray *availableBackups;
@property (retain) NSString *humanName;
@property (retain) NSObject<OS_dispatch_queue> *backupsQueue;

- (id)description;
- (void).cxx_destruct;
- (id)accessibilityDescription;
- (id)systemName;
- (unsigned long long)systemType;
- (id)childSystems;
- (id)modelIcon;
- (BOOL)selectableSystem;
- (double)estimatedTransferRate;
- (id)initWithTMDataVolumeMountPoint:(id)a0;
- (void)addBackup:(id)a0;

@end
