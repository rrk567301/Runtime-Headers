@class NSUserDefaults, NSString, NSNumber, NSCache;

@interface ASCDefaults : NSObject

@property (class, readonly) ASCDefaults *daemonDefaults;

@property (copy, nonatomic) NSCache *cachedValues;
@property (readonly, copy, nonatomic) NSUserDefaults *userDefaults;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *storefrontLocaleID;
@property (nonatomic) char forceRightToLeftLayout;
@property (nonatomic) char disableShutdownTimer;
@property (nonatomic) char enableWebInspector;
@property (copy, nonatomic) NSNumber *overlaysRateLimitRequestsPerSecond;
@property (copy, nonatomic) NSNumber *overlaysRateLimitTimeWindow;
@property (copy, nonatomic) NSNumber *overlaysLoadTimeout;
@property (nonatomic) char forceStandaloneWatch;
@property (copy, nonatomic) NSString *debugPackageURL;
@property (nonatomic) char preferInternalJS;
@property (copy, nonatomic) NSString *jsVersion;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)initWithBundleID:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
