@class C2MetricOptions, NSString, NSURL, NSData, NSObject, NSNumber;
@protocol C2NetworkingDelegate;

@interface C2RequestOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, retain, nonatomic) NSObject<C2NetworkingDelegate> *testNetworkingDelegate;
@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char hasAllowsCellularAccess;
@property (copy, nonatomic) NSString *originalHost;
@property (nonatomic) char metricRequest;
@property (readonly, nonatomic) double emptySessionExpiryInSeconds;
@property (readonly, nonatomic) double taskCallbackConsideredHangInSeconds;
@property (readonly, nonatomic) char outOfProcess;
@property (copy, nonatomic) id /* block */ testBehavior_sessionGroupCreated;
@property (copy, nonatomic) NSURL *invokedURL;
@property (weak, nonatomic) NSObject<C2NetworkingDelegate> *networkingDelegate;
@property (nonatomic) long long qualityOfService;
@property (copy, nonatomic) NSString *outOfProcessPoolName;
@property (nonatomic) char allowsCellularAccess;
@property (nonatomic) char _allowsExpensiveAccess;
@property (nonatomic) char _allowsPowerNapScheduling;
@property (nonatomic) double _timeoutIntervalForRequest;
@property (nonatomic) double _timeoutIntervalForResource;
@property (copy, nonatomic) NSString *_sourceApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *_sourceApplicationSecondaryIdentifier;
@property (copy, nonatomic) NSData *_sourceApplicationAuditTokenData;
@property (copy, nonatomic) NSString *_appleIDContextSessionIdentifier;
@property (nonatomic) char tlsPinning;
@property (nonatomic) char allowRouting;
@property (nonatomic) char allowExpiredDNSBehavior;
@property (nonatomic) unsigned long long discretionaryNetworkBehavior;
@property (nonatomic) unsigned long long duetPreClearedMode;
@property (nonatomic) char _allowsRetryForBackgroundDataTasks;
@property (copy, nonatomic) NSNumber *privacyProxyFailClosedOverride;
@property (copy, nonatomic) NSNumber *useNWLoaderOverride;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) C2MetricOptions *metricOptions;
@property (nonatomic) char redactRemoteEndpointFromNetworkMetrics;
@property (nonatomic) char redactUniformResourceIdentifierFromNetworkMetrics;
@property (nonatomic) long long containerType;
@property (nonatomic) char _optIntoDisableAPWakeOnIdleConnections;
@property (nonatomic) char useAdaptiveTimeouts;
@property (nonatomic) char outOfProcessDiscretionary;
@property (copy, nonatomic) NSURL *c2MetricsEndpoint;
@property (nonatomic) unsigned long long c2MetricsReportFrequency;
@property (nonatomic) unsigned long long c2MetricsReportFrequencyBase;

+ (void)initialize;
+ (id)stringForDiscretionaryNetworkBehavior:(unsigned long long)a0;
+ (id)stringForDuetPreClearedMode:(unsigned long long)a0;
+ (id)stringForQualityOfService:(long long)a0;
+ (char)triesteMetricsEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyAndDecorateRequest:(id)a0;
- (id)decorateTask:(id)a0;
- (id)defaultSessionConfigurationWithName:(id)a0;
- (void)handleCallbackForSessionTask:(id)a0 dataTask:(id)a1 callback:(id /* block */)a2;
- (id)sessionConfigurationNameWithRouteHost:(id)a0;
- (id)sessionConfigurationWithName:(id)a0;
- (void)setOutOfProcess:(char)a0;

@end
