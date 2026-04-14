@class _CDRateLimiter;

@interface _CDInteractionPolicy : NSObject

@property (retain) _CDRateLimiter *rateLimiter;
@property unsigned long long lifespanInSeconds;
@property unsigned long long maxNumberStored;
@property unsigned long long timeResolutionInSeconds;
@property unsigned long long maxNumberOfRecipients;
@property unsigned long long maxNumberOfKeywords;
@property unsigned long long maxNumberOfAttachments;

+ (id)policyFromDictionary:(id)a0;
+ (id)defaultPolicy;
+ (id)policyWithRateLimiter:(id)a0 lifespanInSeconds:(unsigned long long)a1 maxNumberStored:(unsigned long long)a2 timeResolutionInSeconds:(unsigned long long)a3 maxNumberOfRecipients:(unsigned long long)a4 maxNumberOfKeywords:(unsigned long long)a5 maxNumberOfAttachments:(unsigned long long)a6;
+ (unsigned long long)defaultLifespan;
+ (unsigned long long)defaultTimeResolutionInSeconds;
+ (unsigned long long)defaultMaxNumberStored;
+ (unsigned long long)defaultMaxNumberOfRecipients;
+ (unsigned long long)defaultMaxNumberOfKeywords;
+ (unsigned long long)defaultMaxNumberOfAttachments;
+ (id)defaultPolicyForEmail;
+ (id)defaultPolicyForMeetings;
+ (id)defaultPolicyForMessages;
+ (id)defaultPolicyForCalls;
+ (id)specialPolicyForFirstPartyApps;

- (id)description;
- (void).cxx_destruct;
- (id)initWithRateLimiter:(id)a0 lifespanInSeconds:(unsigned long long)a1 maxNumberStored:(unsigned long long)a2 timeResolutionInSeconds:(unsigned long long)a3 maxNumberOfRecipients:(unsigned long long)a4 maxNumberOfKeywords:(unsigned long long)a5 maxNumberOfAttachments:(unsigned long long)a6;

@end
