@class NSString, ACAccount;

@interface FAFamilyCircleCache : NSObject <FAFamilyCircleCacheProtocol>

@property (readonly, nonatomic) ACAccount *account;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cacheQueue;

- (id)initWithAccount:(id)a0;
- (id)updateWithFamilyCircle:(id)a0 serverTag:(id)a1;
- (id)load;
- (id)_cacheURL;
- (id)_cacheDataWithFamilyCircle:(id)a0 serverTag:(id)a1;
- (id)_cacheURLWithError:(id *)a0;
- (void).cxx_destruct;
- (BOOL)_isCacheDate:(id)a0 withinDuration:(double)a1;
- (id)invalidate;
- (id)_onQueue:(id /* block */)a0;
- (id)_fetchData:(id *)a0;
- (id)loadWithError:(id *)a0;
- (id)_createCacheFile;
- (id)_username;

@end
