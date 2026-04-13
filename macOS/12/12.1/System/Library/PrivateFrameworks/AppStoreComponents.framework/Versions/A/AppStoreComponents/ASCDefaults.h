@class NSString, NSNumber;

@interface ASCDefaults : NSObject

@property (class, readonly) ASCDefaults *daemonDefaults;

@property (readonly, copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *storefrontLocaleID;
@property (nonatomic) BOOL forceRightToLeftLayout;
@property (nonatomic) BOOL disableShutdownTimer;
@property (nonatomic) BOOL enableWebInspector;
@property (copy, nonatomic) NSNumber *overlaysRateLimitRequestsPerSecond;
@property (copy, nonatomic) NSNumber *overlaysRateLimitTimeWindow;
@property (copy, nonatomic) NSNumber *overlaysLoadTimeout;
@property (nonatomic) BOOL forceStandaloneWatch;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithBundleID:(id)a0;

@end
