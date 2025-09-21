@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AFNotifyStatePublisher : NSObject <AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    char *_name;
    int _registrationToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_register;
- (id)initWithName:(id)a0 queue:(id)a1;
- (char)_getState:(unsigned long long *)a0 withToken:(int)a1;
- (void)_notifyWithState:(unsigned long long)a0;
- (char)_setState:(unsigned long long)a0 withToken:(int)a1;
- (void)_unregister;
- (void)publishState:(unsigned long long)a0;
- (void)publishStateSynchronously:(unsigned long long)a0;
- (void)publishStateWithBlock:(id /* block */)a0;

@end
