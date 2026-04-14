@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SMSystem_Daemon_TimeMachineDisk : SMSystem_Daemon

@property (retain) NSMutableArray *availableBackups;
@property (retain) NSString *humanName;
@property (retain) NSObject<OS_dispatch_queue> *backupsQueue;

- (id)systemName;
- (id)description;
- (id)accessibilityDescription;
- (void).cxx_destruct;
- (unsigned long long)systemType;
- (id)initWithTMDataVolumeMountPoint:(id)a0;
- (void)addBackup:(id)a0;
- (id)childSystems;
- (double)estimatedTransferRate;
- (id)modelIcon;
- (BOOL)selectableSystem;

@end
