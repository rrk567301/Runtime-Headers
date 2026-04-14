@class NSString, TMSession, NSArray, NSDate, NSURL;
@protocol TMMachineStoreInfo, TMVolumeStoreInfo;

@interface SMSystem_Daemon_TimeMachineBased : SMSystem_Daemon

@property (retain) NSDate *backupCompletedDate;
@property (retain) NSString *machineName;
@property (retain) NSString *storageVolume;
@property (getter=isCaseSensitive) BOOL caseSensitive;
@property unsigned long long filesystemType;
@property (retain) TMSession *timeMachineSession;
@property (retain) id<TMMachineStoreInfo> machineStoreInfo;
@property (retain) id<TMVolumeStoreInfo> volumeStoreInfo;
@property (retain, nonatomic) NSArray *backups;
@property (retain) NSString *backupsDescription;
@property (retain) NSURL *mountPoint;
@property (retain) NSString *daDisk_ID;
@property BOOL isLiteBackup;
@property BOOL isLatestBackup;

+ (unsigned long long)requiredScannerState;

- (id)description;
- (void).cxx_destruct;
- (id)systemVersion;
- (id)accessibilityDescription;
- (id)productVersion;
- (id)buildVersion;
- (BOOL)isInternal;
- (void)unmount;
- (unsigned long long)systemType;
- (id)displayState;
- (id)volumeIcon;
- (BOOL)isOverNetworkedFS;
- (id)getTypeDescription;
- (id)getVersionDescription;
- (double)estimatedTransferRate;
- (id)retrieveBackups;
- (void)determineEnrolledBetaProgram;
- (id)initWithTimeMachineSession:(id)a0 volumeStoreInfo:(id)a1 machineStoreInfo:(id)a2 mountPoint:(id)a3 daDiskID:(id)a4 remoteDiskID:(id)a5 isFinalSelectedSystem:(BOOL)a6 isLatestBackup:(BOOL)a7;

@end
