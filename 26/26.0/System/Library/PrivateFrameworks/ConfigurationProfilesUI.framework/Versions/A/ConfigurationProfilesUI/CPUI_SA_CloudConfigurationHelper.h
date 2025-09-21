@class NSISO8601DateFormatter, NSDictionary, NSMutableSet, NSError, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, CPUI_SA_CloudConfigurationManagerDelegate;

@interface CPUI_SA_CloudConfigurationHelper : NSObject

@property (retain) id<CPUI_SA_CloudConfigurationManagerDelegate> delegate;
@property (retain) NSMutableSet *blockNotificationObservers;
@property (retain) NSObject<OS_dispatch_queue> *mcxQueue;
@property int deviceRegisteredWithDEP;
@property BOOL enrolledWithMDM;
@property (retain) NSDictionary *cloudConfiguration;
@property (retain) NSError *cloudConfigurationError;
@property (retain) NSError *cloudConfigurationErrorForMacBuddy;
@property BOOL waitForCloudConfigCompleted;
@property unsigned long long depConfigStatus;
@property (retain) NSObject<OS_dispatch_semaphore> *readySemaphore;
@property BOOL displayManagementPanePending;
@property BOOL depNagMode;
@property BOOL mdmMigrationMode;
@property (retain) NSDictionary *setupInfoForBuddy;
@property (retain) NSDictionary *pssoDetailsFrom403;
@property (retain) NSISO8601DateFormatter *iso8601DateFormatter;

+ (id)sharedHelper;
+ (id)helperWithDelegate:(id)a0;
+ (BOOL)shouldShowDEPNagUI;

- (BOOL)isManaged;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_APNSCheckForDEPStatusCompleted:(BOOL)a0;
- (void)_getCachedCloudConfiguration;
- (void)_getCachedSetupInfo;
- (void)_receivedCloudConfiguration:(id)a0 error:(id)a1;
- (void)_startGetActivationRecordIfNeeded;
- (BOOL)canDeferMDMEnrollment;
- (void)clearPSSOConfigForMacBuddy;
- (id)cloudConfig;
- (id)cloudConfigErrorForMacBuddy;
- (BOOL)cloudConfigFetchAttempted;
- (id)cloudConfigurationStatusDesc;
- (void)commonStart;
- (unsigned long long)depNagOptions;
- (void)enrollWithMDMInWindow:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (BOOL)flowItemAllowsNavigatingBackForPhase:(long long)a0;
- (BOOL)flowItemNeedsToRunForPhase:(long long)a0;
- (BOOL)inDEPNagMode;
- (BOOL)isManagedForMode:(unsigned long long)a0;
- (BOOL)isUpdateFromFactoryVersionRequired;
- (void)networkBecameAvailable;
- (void)networkBecameUnavailable;
- (void)notifyBuddyDEPEnrollmentCompleted;
- (void)recordManualAccountCreation:(id)a0;
- (void)setCurrentViewControllerPhase:(long long)a0;
- (void)setHelperProcessesAllowed:(BOOL)a0;
- (id)setupInfoForMacBuddy;
- (BOOL)shouldShowRemoteManagementPane;
- (BOOL)shouldSkipOptionalSoftwareUpdate;
- (void)startFetchCloudConfigurationInWindow:(id)a0 options:(id)a1;
- (void)startForDEPNagModeWithOptions:(id)a0;
- (void)startForMDMMigrationModeWithOptions:(id)a0;
- (void)startForMacBuddyWithOptions:(id)a0;
- (void)startForMiniBuddyWithOptions:(id)a0;
- (void)unenrollFromMDMInWindow:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)userSnoozedDEPNag;
- (BOOL)waitForManagementStatusUntilInterval:(double)a0;
- (BOOL)waitForManagementStatusUntilInterval:(double)a0 force:(BOOL)a1;

@end
