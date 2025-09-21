@class NSObject;
@protocol OS_dispatch_queue;

@interface SKDAnalyticsLogProvider : NSObject <SKDLogProviding> {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;
- (void)sendLog:(id)a0 domain:(id)a1;

@end
