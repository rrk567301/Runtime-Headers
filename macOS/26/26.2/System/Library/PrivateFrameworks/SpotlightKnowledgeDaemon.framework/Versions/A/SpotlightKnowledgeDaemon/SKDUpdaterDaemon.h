@class SKDScheduler;

@interface SKDUpdaterDaemon : NSObject {
    void /* unknown type, empty encoding */ metricsCollector;
    void /* unknown type, empty encoding */ metricsJob;
    void /* unknown type, empty encoding */ featureFlagProvider;
}

@property (class, nonatomic, readonly) SKDUpdaterDaemon *shared;

@property (nonatomic, readonly) SKDScheduler *scheduler;

- (void).cxx_destruct;
- (void)start;
- (id)init;

@end
