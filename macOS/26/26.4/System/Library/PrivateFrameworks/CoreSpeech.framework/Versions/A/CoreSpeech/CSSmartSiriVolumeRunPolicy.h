@class NSObject;
@protocol OS_dispatch_queue;

@interface CSSmartSiriVolumeRunPolicy : CSPolicy {
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)init;
- (void)_subscribeEventMonitors;
- (void)_addSmartSiriVolumeEnabledConditions;

@end
