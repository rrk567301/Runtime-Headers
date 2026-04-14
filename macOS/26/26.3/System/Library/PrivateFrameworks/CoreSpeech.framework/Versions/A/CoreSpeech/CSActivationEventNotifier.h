@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CSActivationEventNotifier : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSDictionary *handlerMap;

+ (id)sharedNotifier;

- (void)notifyActivationEvent:(unsigned long long)a0 deviceId:(id)a1 activationInfo:(id)a2 completion:(id /* block */)a3;
- (void)_notifyActivationEvent:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)notifyActivationEventSynchronously:(id)a0 completion:(id /* block */)a1;
- (id)_getHandlerFromHandlerID:(unsigned long long)a0;
- (void)notifyDeviceActivationEvent:(id)a0 completion:(id /* block */)a1;
- (void)notifyActivationEvent:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)_getHandlerFromEvent:(id)a0;

@end
