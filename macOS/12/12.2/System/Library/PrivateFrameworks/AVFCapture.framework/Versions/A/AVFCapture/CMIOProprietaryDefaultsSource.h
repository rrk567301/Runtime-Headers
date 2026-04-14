@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CMIOProprietaryDefaultsSource : NSObject {
    id /* block */ _defaultChangedHandler;
    id /* block */ _connectionBrokenHandler;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_registerExtensionServiceConnection;
    BOOL _connectionIsValid;
}

- (void)dealloc;
- (id)objectForKey:(id)a0;
- (int)setObject:(id)a0 forKey:(id)a1;
- (id)initWithDefaultChangedHandler:(id /* block */)a0 connectionBrokenHandler:(id /* block */)a1;
- (int)observeChangesForKey:(id)a0;
- (int)unobserveChangesForKey:(id)a0;

@end
