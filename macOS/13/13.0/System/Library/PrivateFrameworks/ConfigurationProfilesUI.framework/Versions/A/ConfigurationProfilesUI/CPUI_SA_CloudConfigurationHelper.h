@class NSDictionary, NSMutableSet, NSError, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, CPUI_SA_CloudConfigurationManagerDelegate;

@interface CPUI_SA_CloudConfigurationHelper : NSObject

@property (retain) id<CPUI_SA_CloudConfigurationManagerDelegate> delegate;
@property (retain) NSMutableSet *blockNotificationObservers;
@property (retain) NSObject<OS_dispatch_queue> *mcxQueue;
@property int deviceRegisteredWithDEP;
@property BOOL enrolledWithMDM;
@property (retain) NSDictionary *cloudConfiguration;
@property (retain) NSError *cloudConfigurationError;
@property BOOL waitForCloudConfigCompleted;
@property unsigned long long depConfigStatus;
@property (retain) NSObject<OS_dispatch_semaphore> *readySemaphore;
@property BOOL displayManagementPanePending;

+ (id)helperWithDelegate:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isManaged;
- (id)cloudConfigurationStatusDesc;
- (void)commonStart;
- (void)startForMiniBuddyWithOptions:(id)a0;
- (void)startForMacBuddyWithOptions:(id)a0;
- (void)_getCachedSetupInfo;
- (void)_getCachedCloudConfiguration;
- (BOOL)isManagedForMode:(unsigned long long)a0;
- (BOOL)shouldShowRemoteManagementPane;
- (BOOL)waitForManagementStatusUntilInterval:(double)a0 force:(BOOL)a1;
- (BOOL)waitForManagementStatusUntilInterval:(double)a0;
- (void)enrollWithMDMInWindow:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)recordManualAccountCreation:(id)a0;
- (void)_startGetActivationRecordIfNeeded;
- (void)_APNSCheckForDEPStatusCompleted:(BOOL)a0;
- (void)networkBecameAvailable;
- (void)networkBecameUnavailable;
- (void)startFetchCloudConfigurationInWindow:(id)a0 options:(id)a1;
- (void)_receivedCloudConfiguration:(id)a0 error:(id)a1;
- (BOOL)shouldSkipOptionalSoftwareUpdate;

@end
