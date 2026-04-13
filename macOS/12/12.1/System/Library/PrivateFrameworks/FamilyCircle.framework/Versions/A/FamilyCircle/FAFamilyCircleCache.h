@class ACAccount;

@interface FAFamilyCircleCache : NSObject

@property (readonly, nonatomic) ACAccount *account;

+ (id)cacheQueue;

- (id)load;
- (id)invalidate;
- (void).cxx_destruct;
- (id)_username;
- (id)initWithAccount:(id)a0;
- (id)load:(id *)a0;
- (id)_cacheURL;
- (id)_cacheURLWithError:(id *)a0;
- (id)_fetchData:(id *)a0;
- (id)_onQueue:(id /* block */)a0;
- (id)_cacheDataWithFamilyCircle:(id)a0;
- (id)_createCacheFile;
- (BOOL)_isCacheDate:(id)a0 withinDuration:(double)a1;
- (id)updateWithFamilyCircle:(id)a0;

@end
