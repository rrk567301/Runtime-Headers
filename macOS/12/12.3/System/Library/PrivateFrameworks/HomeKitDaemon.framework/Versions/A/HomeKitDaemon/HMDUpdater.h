@class NSString, NSBackgroundActivityScheduler;

@interface HMDUpdater : HMFObject <HMFLogging>

@property (retain, nonatomic) NSBackgroundActivityScheduler *backgroundScheduler;
@property (retain, nonatomic) NSString *model;
@property (retain, nonatomic) NSString *targetKitUUID;
@property (retain, nonatomic) NSString *targetKitURLString;
@property (retain, nonatomic) NSString *targetKitDateString;
@property (retain, nonatomic) NSString *currentKitUUID;
@property (retain, nonatomic) NSString *platformString;
@property (retain, nonatomic) NSString *buildid;
@property (nonatomic) BOOL internal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sharedInstance;
+ (id)logCategory;

- (void)dealloc;
- (id)init;
- (void)_info;
- (void).cxx_destruct;
- (int)_uninstall;
- (id)_downloadURL;
- (int)_install;
- (void)updateWithCompletion:(id /* block */)a0;
- (int)_download;
- (id)logIdentifier;
- (int)_executeScript:(const char *)a0;
- (int)_clean;
- (void)_scheduleUpdateCheck;
- (void)_handleServerResponse:(id)a0 withData:(id)a1 error:(id)a2;
- (void)_clearInstalledRootUUID;
- (int)_rebuild;
- (int)_reboot;
- (void)_fetchManifestWithCompletion:(id /* block */)a0;

@end
