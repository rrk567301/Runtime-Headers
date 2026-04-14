@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNDonationAgentLogger : NSObject <CNDonationAgentLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log_t;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didDiscoverExtensions;
- (void)agentDidHandleRequest:(SEL)a0;
- (void)didRejectClusterIdentifier:(id)a0;
- (void)maintenanceServiceDidStart;
- (void)maintenanceServiceWillStart;
- (void)agentWillHandleRequest:(SEL)a0;
- (void)couldNotRenewBecauseDonorError:(id)a0;
- (void)didRenewValue:(id)a0 untilDate:(id)a1;
- (void)didDiscoverUnexpectedExtensionType:(id)a0;
- (void)featureWillDisable;
- (void)agentDidStart;
- (void)willDiscoverExtensions;
- (void)willSaveExtensionVersions;
- (void)endRestorePersistedState;
- (void)beginRestorePersistedState;
- (void)couldNotRenewBecauseNotADonorExtension:(id)a0;
- (void)contactsChangedNotificationFoundName:(BOOL)a0 nameChanged:(BOOL)a1;
- (void)couldNotRejectUnknownClusterIdentifier:(id)a0;
- (void)couldNotRejectDonationIdentifier:(id)a0 error:(id)a1;
- (void)contactsChangedNotificationEmailAddressesChanged:(BOOL)a0;
- (void)agentWillStart;
- (void).cxx_destruct;
- (void)willLoadExtensionVersions;
- (void)couldNotRejectUnknownDonationIdentifier:(id)a0;
- (void)willRenewValues:(id)a0 withDonor:(id)a1;
- (void)willRejectClusterIdentifier:(id)a0;
- (void)didDiscoverExtension:(id)a0;
- (void)agentWillStop;
- (void)willRemoveAllRejections;
- (void)denyingRequestFromProcess:(int)a0;
- (void)didListRejections;
- (id)init;
- (void)foundUnhashableValue:(id)a0;
- (void)couldNotRejectClusterIdentifier:(id)a0 error:(id)a1;
- (void)donationServiceWillStop;
- (void)featureNotEnabled:(SEL)a0;
- (void)donationServiceWillStart;
- (void)didRemoveAllRejections;
- (void)willRejectDonationIdentifier:(id)a0;
- (void)acceptingDonations:(id)a0;
- (void)featureDidEnable;
- (void)willListRejections;
- (void)couldNotRenewBecauseLoadingError:(id)a0;
- (void)didRejectDonationIdentifier:(id)a0;
- (void)acceptingConnectionFromProcess:(int)a0;
- (void)didFailToDiscoverExtensions:(id)a0;
- (void)donationServiceDidStart;
- (void)preExpiredDonations:(id)a0;
- (void)maintenanceServiceWillStop;
- (void)featureWillEnable;
- (void)featureDidDisable;

@end
