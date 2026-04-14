@class NSTimer;

@interface NetworkConfigurationController : NSObject {
    struct __SCDynamicStore { } *_store;
    NSTimer *_notificationTimer;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_postNetworkChangeNotification:(id)a0;

@end
