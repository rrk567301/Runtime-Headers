@class ARServiceAdvisorConfiguration, ARAsyncServiceAdvisorConfiguration, ARServiceListenerConfiguration;

@interface ARServiceCoordinatorConfiguration : NSObject

@property (retain) ARServiceAdvisorConfiguration *advisorConfiguration;
@property (retain) ARAsyncServiceAdvisorConfiguration *asyncAdvisorConfiguration;
@property (retain) ARServiceListenerConfiguration *listenerConfiguration;

- (void)invalidate;
- (void).cxx_destruct;
- (id)init;

@end
