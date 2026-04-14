@class NSString, AMSLRUCache, NSDate, NSObject, AMSProcessInfo;
@protocol OS_dispatch_queue, AMSBagDataSourceProtocol;

@interface AMSBag : NSObject <AMSBagProtocol>

@property (class, readonly) AMSLRUCache *bagCache;
@property (class, readonly) NSObject<OS_dispatch_queue> *bagCacheAccessQueue;

@property (retain) id<AMSBagDataSourceProtocol> dataSource;
@property (copy, nonatomic) AMSProcessInfo *processInfo;
@property struct optional<AMSCore::Bag> { union { char __null_state_; struct Bag { void /* function */ **_vptr$ILoggable; struct shared_ptr<AMSCore::IBagDataSource> { struct IBagDataSource *__ptr_; struct __shared_weak_count *__cntrl_; } mDataSource; } __val_; } ; BOOL __engaged_; } underlyingBag;
@property (readonly) NSString *descriptionExtended;
@property (readonly, getter=isExpired) BOOL expired;
@property (readonly) NSDate *expirationDate;
@property (readonly, copy) NSString *profile;
@property (readonly, copy) NSString *profileVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bagForProfile:(id)a0 profileVersion:(id)a1;
+ (id)bagForProfile:(id)a0 profileVersion:(id)a1 processInfo:(id)a2;
+ (void)_resetBagCache;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)boolForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)arrayForKey:(id)a0;
- (id)dictionaryForKey:(id)a0;
- (BOOL)isLoaded;
- (id)integerForKey:(id)a0;
- (id)doubleForKey:(id)a0;
- (id)initWithDataSource:(id)a0;
- (void)createSnapshotWithCompletion:(id /* block */)a0;
- (id)URLForKey:(id)a0 account:(id)a1;
- (id)initWithBag:(struct Bag { void /* function */ **x0; struct shared_ptr<AMSCore::IBagDataSource> { struct IBagDataSource *x0; struct __shared_weak_count *x1; } x1; })a0 processInfo:(id)a1;
- (void)setDefaultValue:(id)a0 forKey:(id)a1;
- (id)_temporaryDictionary;

@end
