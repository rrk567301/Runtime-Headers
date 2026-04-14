@class NSString, AFSiriActivationConnection, NSObject;
@protocol OS_dispatch_queue;

@interface AFSiriActivationHandlerFrontendProcess : NSObject <AFNotifyObserverDelegate, AFSiriActivationHandling> {
    NSObject<OS_dispatch_queue> *_queue;
    AFSiriActivationConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notifyObserver:(id)a0 didChangeStateFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)handleContext:(id)a0 completion:(id /* block */)a1;

@end
