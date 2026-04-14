@interface SiriAnalyticsRuntimeConfiguration : NSObject

@property (class, nonatomic, readonly) BOOL canCollectProvisional;

+ (BOOL)canCollectAnyEvent:(id)a0;

- (id)init;

@end
