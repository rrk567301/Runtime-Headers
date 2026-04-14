@class NSXPCConnection;

@interface WLKFederatedAnalyticsReporter : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)defaultFederatedAnalyticsReporter;

- (void)_invalidationHandler;
- (void).cxx_destruct;
- (void)reportPunchout:(id)a0;

@end
