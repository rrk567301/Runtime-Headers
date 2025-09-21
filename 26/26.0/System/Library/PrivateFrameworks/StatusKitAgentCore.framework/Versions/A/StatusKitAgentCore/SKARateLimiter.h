@class NSString;

@interface SKARateLimiter : NSObject

@property (retain, nonatomic) NSString *prefsDomain;
@property (retain, nonatomic) NSString *lastRequestTimePrefsKey;
@property (retain, nonatomic) NSString *requestsCountPrefsKey;
@property (retain, nonatomic) NSString *maxRequestsBagKey;
@property (retain, nonatomic) NSString *resetTimeBagKey;
@property (nonatomic) long long defaultMaxRequests;
@property (nonatomic) long long defaultResetTime;

+ (id)logger;

- (void).cxx_destruct;
- (long long)_maxRequests;
- (long long)_requestResetTimeSeconds;
- (id)initWithDomain:(id)a0 lastRequestTimePrefsKey:(id)a1 requestsCountPrefsKey:(id)a2 maxRequestsBagKey:(id)a3 defaultMaxRequests:(long long)a4 resetTimeBagKey:(id)a5 defaultResetTime:(long long)a6;
- (id)initWithLastRequestTimePrefsKey:(id)a0 requestsCountPrefsKey:(id)a1 maxRequestsBagKey:(id)a2 defaultMaxRequests:(long long)a3 resetTimeBagKey:(id)a4 defaultResetTime:(long long)a5;
- (BOOL)isUnderRequestLimit;
- (void)recordRequest;

@end
