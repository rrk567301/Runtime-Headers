@class AFSettingsConnection, NSObject;
@protocol OS_dispatch_queue;

@interface AFMyriadAdvertisementContextManager : NSObject {
    AFSettingsConnection *_settingsConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)_settingsConnection;
- (void)pushMyriadAdvertisementContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)_resetSettingsConnection;
- (void)triggerABCForType:(id)a0 subType:(id)a1 context:(id)a2;

@end
