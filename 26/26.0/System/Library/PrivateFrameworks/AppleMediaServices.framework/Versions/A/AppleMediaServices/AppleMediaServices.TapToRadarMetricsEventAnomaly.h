@class NSString;

@interface AppleMediaServices.TapToRadarMetricsEventAnomaly : NSObject <AMSMetricsEventAnomaly> {
    void /* unknown type, empty encoding */ descriptionOverride;
    void /* unknown type, empty encoding */ title;
    void /* function */ identifier;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *identifier;

- (void)report;
- (id)init;
- (void).cxx_destruct;

@end
