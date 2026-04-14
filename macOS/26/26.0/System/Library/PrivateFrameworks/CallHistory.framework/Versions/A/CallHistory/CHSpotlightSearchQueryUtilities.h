@class NSString, NSUserDefaults;

@interface CHSpotlightSearchQueryUtilities : NSObject

@property (class, readonly, nonatomic) NSString *searchStringForFacetimeAudioCalls;
@property (class, readonly, nonatomic) NSString *searchStringForFacetimeVideoCalls;
@property (class, readonly, nonatomic) NSUserDefaults *userDefaults;

+ (id)searchStringForAcceptedContacts;
+ (unsigned long long)callsDeferredReindexingReason;
+ (id)lastFourDigitsFrom:(long long)a0;
+ (void)logEventReindexingFinishedForReason:(unsigned long long)a0 timeTaken:(double)a1;
+ (void)logEventReindexingRequestedForReason:(unsigned long long)a0;
+ (id)searchQueryWithSearchString:(id)a0;
+ (id)searchStringForCallsMatchingHandles:(id)a0 orContactIdentifier:(id)a1;
+ (id)searchStringForUnknownContacts;
+ (void)setCallsNeedsDeferredReindexingForReason:(unsigned long long)a0;
+ (BOOL)shouldReindexCallsDueToDeferredReindexing;
+ (BOOL)shouldReindexCallsDueToVersionMismatch;

@end
