@class NSString;

@interface SiriSharedUIPrivateCloudMetricsReaderParsedMetrics : NSObject {
    void /* function */ requestIdentifier;
    void /* function */ rawMessage;
}

@property (nonatomic, readonly) NSString *requestIdentifier;
@property (nonatomic, readonly) double timeToFirstTokenMillis;
@property (nonatomic, readonly) double extendLatencyMillis;
@property (nonatomic, readonly) double totalInferenceMillis;
@property (nonatomic, readonly) double tokenRate;
@property (nonatomic, readonly) long long inputTokensCount;
@property (nonatomic, readonly) long long outputTokensCount;
@property (nonatomic, readonly) long long cachedTokensCount;
@property (nonatomic, readonly) BOOL kvCacheReused;
@property (nonatomic, readonly) NSString *rawMessage;

- (void).cxx_destruct;
- (id)init;

@end
