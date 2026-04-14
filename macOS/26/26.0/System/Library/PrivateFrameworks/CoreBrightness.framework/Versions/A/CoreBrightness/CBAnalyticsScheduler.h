@class NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface CBAnalyticsScheduler : NSObject {
    NSMutableDictionary *_requests;
    unsigned long long _requestId;
    NSObject<OS_os_log> *_logHandle;
}

+ (id)sharedInstance;

- (void)dealloc;
- (long long)registerHandler:(id /* block */)a0;
- (void)run;
- (id)init;
- (void)removeHandler:(long long)a0;

@end
