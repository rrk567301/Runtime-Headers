@class NSTimer;

@interface NetworkConfigurationController : NSObject {
    struct __SCDynamicStore { } *_store;
    NSTimer *_notificationTimer;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_postNetworkChangeNotification:(id)a0;

@end
