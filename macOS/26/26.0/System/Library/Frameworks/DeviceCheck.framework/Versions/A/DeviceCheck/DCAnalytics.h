@class NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface DCAnalytics : NSObject

@property (nonatomic) BOOL isNetworkReachable;
@property (retain, nonatomic) NSObject<OS_os_log> *perfLog;
@property (retain, nonatomic) NSMutableDictionary *perfIdMap;

+ (id)shared;

- (void)dealloc;
- (id)init;
- (void)networkReachabilityChanged:(BOOL)a0;
- (void).cxx_destruct;
- (void)sendPayload:(id)a0 forEvent:(id)a1 withError:(id)a2;
- (id)convertCategory:(unsigned long long)a0;
- (void)sendPerformanceForCategory:(unsigned long long)a0 eventType:(unsigned long long)a1;

@end
