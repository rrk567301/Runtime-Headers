@interface DNDXPCEventObserver : NSObject

+ (void)setFocusConfigurationStreamEventHandler:(id /* block */)a0;
+ (void)subscribeToFocusConfigurationStreamWithIdentifier:(const char *)a0;
+ (void)_subscribeToStream:(const char *)a0 clientIdentifier:(const char *)a1;
+ (void)_unsubscribeFromStream:(const char *)a0 clientIdentifier:(const char *)a1;
+ (void)_registerEventHandler:(id /* block */)a0 forStream:(const char *)a1;
+ (void)unsubscribeFromFocusConfigurationStreamWithIdentifier:(const char *)a0;

@end
