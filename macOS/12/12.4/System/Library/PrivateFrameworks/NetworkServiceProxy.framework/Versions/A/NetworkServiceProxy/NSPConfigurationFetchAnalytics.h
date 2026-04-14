@class NSString;

@interface NSPConfigurationFetchAnalytics : NSPProxyAnalytics

@property (retain, nonatomic) NSString *configFetchURL;
@property (nonatomic) long long httpCode;
@property (nonatomic) long long nsurlErrorCode;
@property (retain, nonatomic) NSString *requestedServerUUID;
@property (nonatomic) double latency;
@property (nonatomic) NSString *reason;

- (void).cxx_destruct;
- (id)eventName;
- (id)analyticsDict;
- (id)configFetchURLToIndex;

@end
