@class NSString, CKRecordID, NSCloudKitMirroringDelegateOptions, CKAccountInfo, NSObject, CKContainer;
@protocol PFCKAccountMonitorDelegate;

@interface PFCKAccountMonitor : NSObject

@property (readonly, nonatomic) NSCloudKitMirroringDelegateOptions *options;
@property (readonly, nonatomic) NSString *storeIdentifier;
@property (weak, nonatomic) NSObject<PFCKAccountMonitorDelegate> *delegate;
@property (readonly, nonatomic) CKContainer *container;
@property (readonly) CKAccountInfo *currentAccountInfo;
@property (readonly) CKRecordID *currentUserRecordID;
@property (readonly, nonatomic) BOOL observingNotifications;
@property (readonly, nonatomic) BOOL registeredForAccountChangeNotifications;
@property (readonly, nonatomic) BOOL registeredForIdentityUpdateNotifications;

+ (BOOL)canEnableSyncWithAccountInfo:(id)a0 requireDeviceToDeviceEncryption:(BOOL)a1;
+ (BOOL)shouldNotifyForChangeFromAccountInfo:(id)a0 toAccountInfo:(id)a1 requireDeviceToDeviceEncryption:(BOOL)a2;

- (void)setContainer:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)accountOrIdentityChanged:(id)a0;
- (void)beginMonitoringNotifications;
- (void)clearEstablishedAccountInfoAndUserRecordID;
- (void)establishCurrentAccountInfoWithCompletionHandler:(id /* block */)a0;
- (void)establishCurrentUserRecordIDWithCompletionHandler:(id /* block */)a0;
- (id)initWithOptions:(id)a0 forStoreWithIdentifier:(id)a1;
- (void)stopMonitoringNotifications;

@end
