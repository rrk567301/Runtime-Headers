@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNDonationAgentLogger : NSObject <CNDonationAgentLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log_t;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willListRejections;
- (void)denyingRequestFromProcess:(int)a0;
- (void)willLoadExtensionVersions;
- (void)agentDidStart;
- (void)willSaveExtensionVersions;
- (void)featureDidDisable;
- (void)didDiscoverUnexpectedExtensionType:(id)a0;
- (void)willRemoveAllRejections;
- (void)didFailToDiscoverExtensions:(id)a0;
- (void)contactsChangedNotificationEmailAddressesChanged:(BOOL)a0;
- (void)didRenewValue:(id)a0 untilDate:(id)a1;
- (void)didDiscoverExtension:(id)a0;
- (void)willRejectClusterIdentifier:(id)a0;
- (void)agentWillHandleRequest:(SEL)a0;
- (void)willRenewValues:(id)a0 withDonor:(id)a1;
- (void)beginRestorePersistedState;
- (void)couldNotRejectUnknownDonationIdentifier:(id)a0;
- (void)agentWillStop;
- (id)init;
- (void)featureWillEnable;
- (void)featureNotEnabled:(SEL)a0;
- (void)willRejectDonationIdentifier:(id)a0;
- (void)donationServiceWillStart;
- (void)couldNotRenewBecauseDonorError:(id)a0;
- (void)couldNotRejectUnknownClusterIdentifier:(id)a0;
- (void)agentDidHandleRequest:(SEL)a0;
- (void)contactsChangedNotificationFoundName:(BOOL)a0 nameChanged:(BOOL)a1;
- (void)didRemoveAllRejections;
- (void)didDiscoverExtensions;
- (void)couldNotRenewBecauseNotADonorExtension:(id)a0;
- (void)donationServiceDidStart;
- (void)didRejectDonationIdentifier:(id)a0;
- (void)foundUnhashableValue:(id)a0;
- (void)preExpiredDonations:(id)a0;
- (void)willDiscoverExtensions;
- (void)acceptingDonations:(id)a0;
- (void)couldNotRejectDonationIdentifier:(id)a0 error:(id)a1;
- (void)featureWillDisable;
- (void)didRejectClusterIdentifier:(id)a0;
- (void)couldNotRenewBecauseLoadingError:(id)a0;
- (void)acceptingConnectionFromProcess:(int)a0;
- (void)agentWillStart;
- (void)featureDidEnable;
- (void)maintenanceServiceDidStart;
- (void)maintenanceServiceWillStop;
- (void)donationServiceWillStop;
- (void)didListRejections;
- (void).cxx_destruct;
- (void)maintenanceServiceWillStart;
- (void)endRestorePersistedState;
- (void)couldNotRejectClusterIdentifier:(id)a0 error:(id)a1;

@end
