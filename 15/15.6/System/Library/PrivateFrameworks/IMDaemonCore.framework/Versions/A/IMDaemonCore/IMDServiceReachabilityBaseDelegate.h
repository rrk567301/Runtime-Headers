@class NSArray, NSString;

@interface IMDServiceReachabilityBaseDelegate : NSObject <IMDServiceReachabilityDelegatePrivate, IMDServiceReachabilityDelegate>

@property (nonatomic, readonly) char isInternationalSpamFilteringEnabled;
@property (nonatomic, weak) void /* unknown type, empty encoding */ serviceSession;
@property (nonatomic, readonly) char networkDataAvailable;
@property (nonatomic, readonly) char isUsableForSending;
@property (nonatomic, readonly) NSArray *idsRegisteredSIMIDs;
@property (nonatomic, readonly) char hasMultipleSubscriptionsWithAtLeastOneActive;
@property (nonatomic, readonly) NSString *internalServiceName;
@property (nonatomic, readonly) NSArray *phoneNumbersOfActiveSubscriptions;

- (id)init;
- (void).cxx_destruct;
- (char)hasValidDowngradeRequestForHandleID:(id)a0;
- (id)initWithServiceSession:(id)a0;
- (char)isMMSEnabledForContext:(id)a0;
- (char)isSMSEnabledForContext:(id)a0;
- (long long)maxChatParticipantsForContext:(id)a0;
- (id)phoneNumberOnSubscriptionWithSIMID:(id)a0;
- (char)shouldDowngradeToRecipient:(id)a0 fromSender:(id)a1 withContext:(id)a2;

@end
