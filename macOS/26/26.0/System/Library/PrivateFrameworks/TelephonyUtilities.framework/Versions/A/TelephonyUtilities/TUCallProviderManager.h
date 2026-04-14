@class NSString, NSSet, NSArray, NSDictionary, NSMapTable, NSObject, TUCallProvider;
@protocol OS_dispatch_queue, TUCallProviderManagerDataSource, TUFeatureFlags;

@interface TUCallProviderManager : NSObject <TUCallProviderManagerDataSourceDelegate>

@property (class, readonly, copy) NSSet *invitationPreferencesForRecentCall;
@property (class, readonly, copy, nonatomic) NSArray *defaultProviders;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<TUCallProviderManagerDataSource> dataSource;
@property (readonly, copy, nonatomic) NSDictionary *providersByIdentifier;
@property (retain, nonatomic) NSMapTable *delegateToQueue;
@property (readonly, nonatomic) id<TUFeatureFlags> featureFlags;
@property (readonly, nonatomic) TUCallProvider *superboxProvider;
@property (readonly, nonatomic) TUCallProvider *defaultProvider;
@property (readonly, nonatomic) TUCallProvider *emergencyProvider;
@property (readonly, nonatomic) TUCallProvider *voicemailProvider;
@property (readonly, nonatomic) TUCallProvider *telephonyProvider;
@property (readonly, nonatomic) TUCallProvider *faceTimeProvider;
@property (readonly, copy, nonatomic) NSArray *providers;
@property (readonly, nonatomic) TUCallProvider *defaultAppProvider;
@property (readonly, copy, nonatomic) NSArray *sortedProviders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)serviceForProvider:(id)a0 video:(BOOL)a1;

- (void)addDelegate:(id)a0 queue:(id)a1;
- (id)providerWithService:(int)a0 video:(BOOL *)a1;
- (id)initWithType:(unsigned long long)a0;
- (void)dealloc;
- (void)donateBackgroundCallIntentForProviderWithIdentifier:(id)a0;
- (id)initWithPairedHostDeviceProviders;
- (void)donateUserIntentForProviderWithIdentifier:(id)a0;
- (void)removeDelegate:(id)a0;
- (id)initWithLocalProviders;
- (void)providersChangedForDataSource:(id)a0;
- (void)launchAppForDialRequest:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (id)joinConversationRequestForRecentCall:(id)a0;
- (id)providerForRecentCall:(id)a0;
- (id)providerForFavoritesEntryActionBundleIdentifier:(id)a0;
- (id)initWithDataSource:(id)a0 type:(unsigned long long)a1 queue:(id)a2 featureFlags:(id)a3;
- (id)dialRequestForRecentCall:(id)a0;
- (id)providersPassingTest:(id /* block */)a0;
- (id)providerForFavoritesEntry:(id)a0;
- (id)sortedProvidersPassingTest:(id /* block */)a0;
- (id)initWithDataSource:(id)a0 type:(unsigned long long)a1 queue:(id)a2;
- (id)providerWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
