@interface TSUResourceRequestAnalyticsSender : NSObject

+ (void)sendAnalyticsForResourceRequest:(id)a0 error:(id)a1;
+ (void)setSharedAnalyticsSender:(id)a0;
+ (id)sharedInstanceQueue;

- (void)sendAnalyticsForResourceRequest:(id)a0 error:(id)a1;

@end
