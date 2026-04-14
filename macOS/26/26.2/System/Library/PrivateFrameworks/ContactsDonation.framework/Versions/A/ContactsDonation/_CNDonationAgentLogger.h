@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNDonationAgentLogger : NSObject <CNDonationAgentLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log_t;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)acceptingDonations:(id)a0;
- (void)willRejectDonationIdentifier:(id)a0;
- (void)agentWillStop;
- (void)didDiscoverUnexpectedExtensionType:(id)a0;
- (void)couldNotRenewBecauseLoadingError:(id)a0;
- (void)maintenanceServiceWillStop;
- (void)didListRejections;
- (void)beginRestorePersistedState;
- (void)willRemoveAllRejections;
- (void)maintenanceServiceWillStart;
- (void)couldNotRejectClusterIdentifier:(id)a0 error:(id)a1;
- (void)foundUnhashableValue:(id)a0;
- (void)agentDidHandleRequest:(SEL)a0;
- (void)featureDidDisable;
- (void)willDiscoverExtensions;
- (void)willRejectClusterIdentifier:(id)a0;
- (void)willRenewValues:(id)a0 withDonor:(id)a1;
- (void)featureNotEnabled:(SEL)a0;
- (void)willSaveExtensionVersions;
- (void)couldNotRejectDonationIdentifier:(id)a0 error:(id)a1;
- (void)denyingRequestFromProcess:(int)a0;
- (void).cxx_destruct;
- (void)preExpiredDonations:(id)a0;
- (void)maintenanceServiceDidStart;
- (void)donationServiceWillStop;
- (void)contactsChangedNotificationEmailAddressesChanged:(BOOL)a0;
- (void)endRestorePersistedState;
- (void)couldNotRenewBecauseNotADonorExtension:(id)a0;
- (void)willLoadExtensionVersions;
- (void)acceptingConnectionFromProcess:(int)a0;
- (void)didDiscoverExtensions;
- (void)featureWillDisable;
- (void)didRemoveAllRejections;
- (void)willListRejections;
- (void)agentWillHandleRequest:(SEL)a0;
- (void)couldNotRejectUnknownClusterIdentifier:(id)a0;
- (void)donationServiceWillStart;
- (void)agentDidStart;
- (void)didRenewValue:(id)a0 untilDate:(id)a1;
- (void)didRejectDonationIdentifier:(id)a0;
- (void)donationServiceDidStart;
- (void)contactsChangedNotificationFoundName:(BOOL)a0 nameChanged:(BOOL)a1;
- (id)init;
- (void)featureDidEnable;
- (void)featureWillEnable;
- (void)didFailToDiscoverExtensions:(id)a0;
- (void)didDiscoverExtension:(id)a0;
- (void)couldNotRenewBecauseDonorError:(id)a0;
- (void)couldNotRejectUnknownDonationIdentifier:(id)a0;
- (void)didRejectClusterIdentifier:(id)a0;
- (void)agentWillStart;

@end
