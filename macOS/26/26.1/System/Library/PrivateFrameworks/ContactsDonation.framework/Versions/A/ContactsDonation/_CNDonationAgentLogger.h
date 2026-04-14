@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNDonationAgentLogger : NSObject <CNDonationAgentLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log_t;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preExpiredDonations:(id)a0;
- (void)willRemoveAllRejections;
- (void)maintenanceServiceWillStart;
- (void)couldNotRenewBecauseLoadingError:(id)a0;
- (void)didDiscoverExtensions;
- (void)didRejectClusterIdentifier:(id)a0;
- (void)willListRejections;
- (void)acceptingConnectionFromProcess:(int)a0;
- (void)endRestorePersistedState;
- (void)agentWillStop;
- (void)willRenewValues:(id)a0 withDonor:(id)a1;
- (void)willSaveExtensionVersions;
- (void)willRejectDonationIdentifier:(id)a0;
- (void)didRenewValue:(id)a0 untilDate:(id)a1;
- (void)denyingRequestFromProcess:(int)a0;
- (void)contactsChangedNotificationFoundName:(BOOL)a0 nameChanged:(BOOL)a1;
- (void)acceptingDonations:(id)a0;
- (void)foundUnhashableValue:(id)a0;
- (void)willLoadExtensionVersions;
- (void)didFailToDiscoverExtensions:(id)a0;
- (void)beginRestorePersistedState;
- (void)featureWillEnable;
- (void)didRejectDonationIdentifier:(id)a0;
- (void)couldNotRejectUnknownClusterIdentifier:(id)a0;
- (void)featureDidDisable;
- (void)maintenanceServiceDidStart;
- (void)willRejectClusterIdentifier:(id)a0;
- (void)couldNotRenewBecauseDonorError:(id)a0;
- (void)didDiscoverExtension:(id)a0;
- (void)didListRejections;
- (void)featureDidEnable;
- (void)featureNotEnabled:(SEL)a0;
- (void)couldNotRenewBecauseNotADonorExtension:(id)a0;
- (void)couldNotRejectUnknownDonationIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)donationServiceWillStop;
- (void)couldNotRejectDonationIdentifier:(id)a0 error:(id)a1;
- (void)donationServiceDidStart;
- (void)contactsChangedNotificationEmailAddressesChanged:(BOOL)a0;
- (void)agentDidStart;
- (void)agentDidHandleRequest:(SEL)a0;
- (void)agentWillHandleRequest:(SEL)a0;
- (void)couldNotRejectClusterIdentifier:(id)a0 error:(id)a1;
- (void)agentWillStart;
- (void)maintenanceServiceWillStop;
- (void)didDiscoverUnexpectedExtensionType:(id)a0;
- (void)featureWillDisable;
- (void)willDiscoverExtensions;
- (id)init;
- (void)didRemoveAllRejections;
- (void)donationServiceWillStart;

@end
