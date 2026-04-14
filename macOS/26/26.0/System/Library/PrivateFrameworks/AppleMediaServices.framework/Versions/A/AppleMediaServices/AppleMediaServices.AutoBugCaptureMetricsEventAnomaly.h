@class NSString;

@interface AppleMediaServices.AutoBugCaptureMetricsEventAnomaly : NSObject <AMSMetricsEventAnomaly> {
    void /* function */ identifier;
    void /* unknown type, empty encoding */ metricsEvent;
    void /* unknown type, empty encoding */ subtype;
    void /* unknown type, empty encoding */ subtypeContext;
}

@property (nonatomic, readonly) NSString *identifier;

- (void)report;
- (id)init;
- (void).cxx_destruct;

@end
