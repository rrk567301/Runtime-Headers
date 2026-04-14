@class NSError, NSString, AMSBagNetworkTaskResult, NSDate, AMSObserver, NSMutableDictionary, AMSBagNetworkTask, NSObject, AMSProcessInfo;
@protocol OS_dispatch_queue;

@interface AMSBagNetworkDataSource : NSObject <AMSBagDataSourceProtocol>

@property (retain) AMSObserver *accountsChangedObserver;
@property (retain) AMSBagNetworkTaskResult *cachedResult;
@property (readonly) struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } cachedDataAccessLock;
@property (retain, nonatomic) NSString *cachedStorefront;
@property (retain) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain) AMSBagNetworkTask *currentLoadTask;
@property (retain) NSMutableDictionary *defaultValues;
@property (retain) NSError *activeFailure;
@property (readonly) NSDate *activeFailureExpiration;
@property (retain) NSObject<OS_dispatch_queue> *processAccountStoreDidChangeNotificationQueue;
@property (readonly) NSDate *expirationDate;
@property (readonly, getter=isLoaded) BOOL loaded;
@property (readonly, copy) AMSProcessInfo *processInfo;
@property (readonly, copy) NSString *profile;
@property (readonly, copy) NSString *profileVersion;
@property (retain) NSString *descriptionExtended;
@property (copy) id /* block */ dataSourceChangedHandler;
@property (copy) id /* block */ dataSourceDataInvalidatedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)valueForURLVariable:(id)a0 account:(id)a1 clientInfo:(id)a2;
+ (BOOL)_shouldProcessChangedAccount:(id)a0 forMediaType:(id)a1;
+ (BOOL)_isDataDictionary:(id)a0 equalToDataDictionary:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)defaultValueForKey:(id)a0;
- (id)initWithProfile:(id)a0 profileVersion:(id)a1 processInfo:(id)a2;
- (void)loadWithCompletion:(id /* block */)a0;
- (void)setDefaultValue:(id)a0 forKey:(id)a1;
- (id)valueForURLVariable:(id)a0 account:(id)a1;
- (void)_accountStoreDidChange;
- (void)_invalidateCacheNotification:(id)a0;
- (id)_fetchBag;
- (void)_updateCachedResult:(id)a0;

@end
