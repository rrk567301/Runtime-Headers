@class NSString;

@interface AppleMediaServices.AutoBugCaptureMetricsEventAnomaly : NSObject <AMSMetricsEventAnomaly> {
    void /* function */ identifier;
    void /* unknown type, empty encoding */ metricsEvent;
    void /* unknown type, empty encoding */ subtype;
    void /* unknown type, empty encoding */ subtypeContext;
}

@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (void)report;
- (id)init;

@end
