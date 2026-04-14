@interface SiriSharedUIPrivateCloudMetricsReader : NSObject {
    void /* unknown type, empty encoding */ subsystem;
    void /* unknown type, empty encoding */ category;
    void /* unknown type, empty encoding */ signpostName;
    void /* unknown type, empty encoding */ filter;
    void /* unknown type, empty encoding */ extractor;
}

@property (class, nonatomic, readonly) SiriSharedUIPrivateCloudMetricsReader *shared;

@property (nonatomic) BOOL cacheHitRateLow;

- (void).cxx_destruct;
- (id)init;
- (void)stopStreaming;
- (void)startStreaming;

@end
