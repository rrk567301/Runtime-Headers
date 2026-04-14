@class NSString, ACAccount;

@interface FAFamilyCircleCache : NSObject <FAFamilyCircleCacheProtocol>

@property (readonly, nonatomic) ACAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cacheQueue;

- (id)invalidate;
- (id)initWithAccount:(id)a0;
- (id)load;
- (id)_cacheDataWithFamilyCircle:(id)a0 serverTag:(id)a1;
- (id)_fetchData:(id *)a0;
- (id)_onQueue:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_username;
- (id)_createCacheFile;
- (id)loadWithError:(id *)a0;
- (BOOL)_isCacheDate:(id)a0 withinDuration:(double)a1;
- (id)_cacheURLWithError:(id *)a0;
- (id)updateWithFamilyCircle:(id)a0 serverTag:(id)a1;
- (id)_cacheURL;

@end
