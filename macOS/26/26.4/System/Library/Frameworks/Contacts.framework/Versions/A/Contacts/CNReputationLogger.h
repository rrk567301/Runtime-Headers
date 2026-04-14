@class NSObject;
@protocol OS_os_log;

@interface CNReputationLogger : NSObject

@property (class, readonly) NSObject<OS_os_log> *queryLog;
@property (class, readonly) NSObject<OS_os_log> *performanceLog;

+ (id)describeScore:(long long)a0;
+ (id)obfuscate:(id)a0;
+ (id)obfuscateHandle:(id)a0;

- (void)timeToResolve:(double)a0;
- (void)couldNotQueryCoreRecentsWithError:(id)a0;
- (void)reputationUnestablished;
- (void)contactsConfirmedTrustOfEmailAddress;
- (void)beginQueryForHandle:(id)a0;
- (void)queryForHandle:(id)a0 didFinishWithReputation:(id)a1;
- (void)queryForHandle:(id)a0 didFailWithError:(id)a1;
- (void)contactsConfirmedTrustOfPhoneNumber;
- (void)couldNotQueryContactsForPhoneNumberWithError:(id)a0;
- (void)contactsCouldNotConfirmTrustOfPhoneNumber;
- (void)contactsCouldNotConfirmTrustOfEmailAddress;
- (void)coreRecentsConfirmedTrust;
- (void)coreRecentsCouldNotConfirmTrust;
- (void)couldNotQueryContactsForEmailAddressWithError:(id)a0;

@end
