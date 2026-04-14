@class NSObject, NSString, NSMapTable, TUCallProviderManager, CoreTelephonyClient, CNContactsEnvironment;
@protocol OS_dispatch_queue;

@interface CNGeminiManager : NSObject <CoreTelephonyClientDelegate, TUCallProviderManagerDelegate> {
    CNContactsEnvironment *_environment;
    CoreTelephonyClient *_coreTelephonyClient;
    TUCallProviderManager *_callProviderManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_delegateToQueue;
}

@property (nonatomic) unsigned long long dataSourceExclusions;
@property (nonatomic) unsigned long long dataSourceExclusions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)channelStringFromSenderIdentity:(id)a0;
+ (BOOL)deviceSupportsGemini;

- (id)bestSubscriptionForHandle:(id)a0 contactStore:(id)a1 error:(id *)a2;
- (id)bestSenderIdentityForContact:(id)a0 error:(id *)a1;
- (void)danglingPlansDidUpdate:(id)a0;
- (id)init;
- (id)badgeLabelForSenderIdentity:(id)a0 error:(id *)a1;
- (id)bestSenderIdentityForHandle:(id)a0 contactStore:(id)a1 error:(id *)a2;
- (id)geminiResultForContact:(id)a0 error:(id *)a1;
- (id)remoteGeminiResultForContact:(id)a0 substituteDefaultForDangling:(BOOL)a1 error:(id *)a2;
- (id)initWithCallProviderManager:(id)a0;
- (id)bestSubscriptionForContact:(id)a0 error:(id *)a1;
- (id)initWithEnvironment:(id)a0 coreTelephonyClient:(id)a1 callProviderManager:(id)a2;
- (void)subscriptionInfoDidChange;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (id)remoteBestSenderIdentityForHandle:(id)a0 contactStore:(id)a1 error:(id *)a2;
- (id)geminiResultForHandle:(id)a0 contactStore:(id)a1 error:(id *)a2;
- (id)bestSenderIdentityForFavoritesEntry:(id)a0 error:(id *)a1;
- (id)badgeLabelForSubscription:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)channelForFavoritesEntry:(id)a0 error:(id *)a1;
- (id)fetchedSenderIdentitiesWithError:(id *)a0;
- (id)geminiResultForContact:(id)a0 substituteDefaultForDangling:(BOOL)a1 error:(id *)a2;
- (void)providersChangedForProviderManager:(id)a0;
- (void)removeDelegate:(id)a0;
- (id)channelForContact:(id)a0 error:(id *)a1;

@end
