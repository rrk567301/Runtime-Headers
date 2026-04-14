@class NSObject;
@protocol OS_dispatch_queue;

@interface CSSmartSiriVolumeRunPolicy : CSPolicy {
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)_subscribeEventMonitors;
- (void).cxx_destruct;
- (id)init;
- (void)_addSmartSiriVolumeEnabledConditions;

@end
