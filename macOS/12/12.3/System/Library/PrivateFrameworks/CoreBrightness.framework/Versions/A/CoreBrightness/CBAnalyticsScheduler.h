@class NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface CBAnalyticsScheduler : NSObject {
    NSMutableDictionary *_requests;
    unsigned long long _requestId;
    NSObject<OS_os_log> *_logHandle;
}

+ (id)sharedInstance;

- (void)run;
- (void)dealloc;
- (id)init;
- (id)registerHandler:(id /* block */)a0;
- (id /* block */)removeHandler:(id)a0;
- (id /* block */)removeAndRun:(id)a0;

@end
