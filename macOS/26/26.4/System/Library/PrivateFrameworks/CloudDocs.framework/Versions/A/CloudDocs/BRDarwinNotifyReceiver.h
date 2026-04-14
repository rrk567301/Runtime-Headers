@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BRDarwinNotifyReceiver : NSObject {
    NSString *_eventName;
    int _token;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _lastState;
    id /* block */ _handler;
}

@property (readonly, nonatomic) unsigned long long lastState;

- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)initForEventName:(id)a0 withQueue:(id)a1 handler:(id /* block */)a2;
- (void)retrieveStateAndNotifyWithToken:(int)a0;

@end
