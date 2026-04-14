@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNDonationAgentLogger : NSObject <CNDonationAgentLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log_t;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contactsChangedNotificationEmailAddressesChanged:(BOOL)a0;
- (void)featureNotEnabled:(SEL)a0;
- (void)couldNotRejectDonationIdentifier:(id)a0 error:(id)a1;
- (void)didDiscoverUnexpectedExtensionType:(id)a0;
- (void)couldNotRejectUnknownClusterIdentifier:(id)a0;
- (void)featureDidDisable;
- (void)agentWillStart;
- (void)didListRejections;
- (void)featureWillDisable;
- (void)willRejectDonationIdentifier:(id)a0;
- (void)couldNotRejectClusterIdentifier:(id)a0 error:(id)a1;
- (id)init;
- (void)agentDidStart;
- (void)agentWillStop;
- (void)didDiscoverExtensions;
- (void)denyingRequestFromProcess:(int)a0;
- (void)didRejectDonationIdentifier:(id)a0;
- (void)couldNotRenewBecauseDonorError:(id)a0;
- (void)acceptingDonations:(id)a0;
- (void)agentDidHandleRequest:(SEL)a0;
- (void)didRemoveAllRejections;
- (void)agentWillHandleRequest:(SEL)a0;
- (void)willRenewValues:(id)a0 withDonor:(id)a1;
- (void)willRejectClusterIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)maintenanceServiceDidStart;
- (void)donationServiceWillStop;
- (void)willLoadExtensionVersions;
- (void)contactsChangedNotificationFoundName:(BOOL)a0 nameChanged:(BOOL)a1;
- (void)beginRestorePersistedState;
- (void)didFailToDiscoverExtensions:(id)a0;
- (void)couldNotRejectUnknownDonationIdentifier:(id)a0;
- (void)didRenewValue:(id)a0 untilDate:(id)a1;
- (void)willSaveExtensionVersions;
- (void)couldNotRenewBecauseLoadingError:(id)a0;
- (void)didDiscoverExtension:(id)a0;
- (void)acceptingConnectionFromProcess:(int)a0;
- (void)didRejectClusterIdentifier:(id)a0;
- (void)couldNotRenewBecauseNotADonorExtension:(id)a0;
- (void)maintenanceServiceWillStart;
- (void)willListRejections;
- (void)foundUnhashableValue:(id)a0;
- (void)featureWillEnable;
- (void)donationServiceDidStart;
- (void)featureDidEnable;
- (void)willDiscoverExtensions;
- (void)endRestorePersistedState;
- (void)donationServiceWillStart;
- (void)willRemoveAllRejections;
- (void)preExpiredDonations:(id)a0;
- (void)maintenanceServiceWillStop;

@end
