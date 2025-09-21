@class EMCoreAnalyticsCollector, NSString, EFLocked, AKPrivateEmailController, ACAccount, NSObject, NSNumber;
@protocol OS_os_log, EFAssertableScheduler;

@interface EMHideMyEmail : NSObject <EFLoggable>

@property (class, readonly) EMHideMyEmail *sharedInstance;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) AKPrivateEmailController *controller;
@property (retain) id<EFAssertableScheduler> scheduler;
@property (retain, nonatomic) EFLocked *isAvailableLocked;
@property (readonly, nonatomic) ACAccount *primaryAccount;
@property (readonly, nonatomic) NSString *primaryAccountAltDSID;
@property (readonly, nonatomic) char hasCheckedIfFeatureIsAvailable;
@property (readonly, nonatomic) NSString *forwardingEmailForPrimaryAccount;
@property (readonly, nonatomic) NSNumber *isAvailable;
@property (readonly, nonatomic) EMCoreAnalyticsCollector *analyticsCollector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)forwardingEmailForAccount:(id)a0;
- (void)isAvailable:(id /* block */)a0;
- (void)generateReplyToEmailForRecipient:(id)a0 hmeAddress:(id)a1 account:(id)a2 completion:(id /* block */)a3;
- (id)addLocalizedDisplayNameForAddress:(id)a0;
- (void)generateHideMyEmailAddressForEmailAddress:(id)a0 altDSID:(id)a1 completion:(id /* block */)a2;
- (void)generateHideMyEmailAddressForEmailAddress:(id)a0 completion:(id /* block */)a1;
- (void)hideMyEmailAddressForRecipientAddress:(id)a0 altDSID:(id)a1 completion:(id /* block */)a2;
- (void)hideMyEmailAddressForRecipientAddress:(id)a0 completion:(id /* block */)a1;
- (void)hideMyEmailAddresses:(id /* block */)a0;
- (void)hideMyEmailAddressesInAccountWithAltDSID:(id)a0 completion:(id /* block */)a1;
- (char)isConfigured:(id *)a0;
- (char)isConfiguredForAccountWithAltDSID:(id)a0 error:(id *)a1;
- (void)isHideMyEmailAddressValid:(id)a0 senderAddress:(id)a1 completion:(id /* block */)a2;
- (void)resetIsAvailable;

@end
