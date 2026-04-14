@class NSArray, OSIPersonalizedManifests;

@interface OSIUpdateFirmwareElement : OSIInstallQueueElement

@property (retain) NSArray *packageSpecifiers;
@property BOOL firmwareUpdatesQueued;
@property (retain) OSIPersonalizedManifests *personalizedManifests;
@property BOOL isMSUSpringboard;

+ (BOOL)shouldUpdateFirmware;
+ (BOOL)cookieExists;
+ (id)getFirmwareUpdateLauncherStatistics;
+ (BOOL)cookieExistsInProductAtURL:(id)a0;

- (void).cxx_destruct;
- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;
- (id)initWithOptions:(id)a0 packageSpecifiers:(id)a1 personalizedManifests:(id)a2;
- (BOOL)okayToSkip;
- (id)nextProgressPhaseAfterCompletion;
- (id)createTempDirectoryForMountPoint:(id)a0;
- (id)createTempDirectoryAtMutableProductURL:(id)a0;
- (BOOL)extractFirmwareUsingExpandedPackagePath:(id)a0 withFirmwareUpdatePkgURL:(id)a1 withError:(id *)a2;
- (void)cleanUpESP;
- (void)repairESP;
- (id)internalEFIDisk;
- (void)purgeCachesOnEFIDisk:(id)a0;
- (void)unmountESP:(id)a0;

@end
