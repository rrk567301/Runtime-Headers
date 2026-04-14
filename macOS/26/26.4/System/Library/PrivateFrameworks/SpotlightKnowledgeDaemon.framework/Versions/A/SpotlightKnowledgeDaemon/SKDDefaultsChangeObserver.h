@interface SKDDefaultsChangeObserver : NSObject {
    void /* unknown type, empty encoding */ handler;
}

- (void).cxx_destruct;
- (id)init;
- (void)localeDidChange:(id)a0;
- (void)handleTargetActionNotification:(id)a0;
- (id)initWithLocaleChangeHandler:(id /* block */)a0;
- (id)initWithObserver:(id)a0 selector:(SEL)a1 notificationName:(id)a2;
- (id)initWithSpotlightResourcesChangeHandler:(id /* block */)a0;
- (void)spotlightResourcesDidChange:(id)a0;

@end
