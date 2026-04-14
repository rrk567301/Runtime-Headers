@class ARServiceAdvisorConfiguration, ARAsyncServiceAdvisorConfiguration, ARServiceListenerConfiguration;

@interface ARServiceCoordinatorConfiguration : NSObject

@property (retain) ARServiceAdvisorConfiguration *advisorConfiguration;
@property (retain) ARAsyncServiceAdvisorConfiguration *asyncAdvisorConfiguration;
@property (retain) ARServiceListenerConfiguration *listenerConfiguration;

- (void).cxx_destruct;
- (void)invalidate;
- (id)init;

@end
