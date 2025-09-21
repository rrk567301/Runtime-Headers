@class ATXBackgroundSystemTask;

@interface ATXCarPlayWidgetMetricsLogger : NSObject

- (id)init;
- (void)collectWithActivity:(ATXBackgroundSystemTask *)a0 completion:(void (^)(void))a1;

@end
