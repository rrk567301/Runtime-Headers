@interface MTAnalytics : NSObject

+ (void)submitEvent:(id)a0 eventParameters:(id)a1;
+ (void)incrementEventCount:(id)a0;
+ (void)sendCriticalEvent:(id)a0;

@end
