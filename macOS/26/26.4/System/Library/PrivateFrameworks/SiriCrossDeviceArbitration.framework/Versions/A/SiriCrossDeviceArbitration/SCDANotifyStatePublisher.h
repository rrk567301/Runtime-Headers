@class NSObject;
@protocol OS_dispatch_queue;

@interface SCDANotifyStatePublisher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    char *_name;
    int _registrationToken;
}

- (id)initWithName:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (void)_register;
- (void)_unregister;
- (void)publishState:(unsigned long long)a0;
- (id)initWithName:(id)a0 queue:(id)a1 completion:(id /* block */)a2;

@end
