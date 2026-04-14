@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCPMADCoreAnalyticsManager : NSObject {
    NSObject<OS_dispatch_queue> *_managementQueue;
    unsigned long long _singleAnalyticsSentCount;
    unsigned long long _sessionAnalyticsSentCount;
    NSMutableDictionary *_sessionAnalytics;
}

+ (id)sharedManager;
+ (id)sharedAuxiliaryManager;

- (void)flush;
- (void)setValue:(id)a0 forField:(id)a1 andEvent:(id)a2;
- (void)sendEvent:(id)a0 withAnalytics:(id)a1;
- (id)valueForField:(id)a0 andEvent:(id)a1;
- (void).cxx_destruct;
- (void)accumulateDoubleValue:(double)a0 forField:(id)a1 andEvent:(id)a2;
- (id)init;
- (void)sendSessionEvent:(id)a0;
- (void)accumulateInt64Value:(long long)a0 forField:(id)a1 andEvent:(id)a2;
- (id)fetchSessionEvent:(id)a0;
- (void)dealloc;

@end
