@class NSArray;

@interface HIDEventSystemClient : NSObject {
    struct __IOHIDEventSystemClient { } *_client;
    id /* block */ _eventHandler;
    id /* block */ _resetHandler;
    id /* block */ _filterHandler;
    id /* block */ _serviceHandler;
    id /* block */ _propertyChangedHandler;
    id /* block */ _cancelHandler;
    BOOL _activated;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _handlerLock;
}

@property (readonly) NSArray *services;

- (void)setServiceNotificationHandler:(id /* block */)a0;
- (id)initWithType:(long long)a0;
- (void)activate;
- (id)propertyForKey:(id)a0;
- (struct __IOHIDEventSystemClient { } *)client;
- (void)setEventHandler:(id /* block */)a0;
- (void)setEventFilterHandler:(id /* block */)a0;
- (void)cancel;
- (void)setCancelHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setMatching:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)setPropertyChangedHandler:(id /* block */)a0 matching:(id)a1;
- (id)description;
- (id)initWithType:(long long)a0 andAttributes:(id)a1;
- (void)setDispatchQueue:(id)a0;
- (void)dealloc;
- (void)setResetHandler:(id /* block */)a0;

@end
