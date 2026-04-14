@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SMSystem_Daemon_TimeMachineDisk : SMSystem_Daemon

@property (retain) NSMutableArray *availableBackups;
@property (retain) NSString *humanName;
@property (retain) NSObject<OS_dispatch_queue> *backupsQueue;

- (id)description;
- (void).cxx_destruct;
- (id)systemName;
- (id)accessibilityDescription;
- (unsigned long long)systemType;
- (id)childSystems;
- (BOOL)selectableSystem;
- (double)estimatedTransferRate;
- (id)modelIcon;
- (id)initWithTMDataVolumeMountPoint:(id)a0;
- (void)addBackup:(id)a0;

@end
