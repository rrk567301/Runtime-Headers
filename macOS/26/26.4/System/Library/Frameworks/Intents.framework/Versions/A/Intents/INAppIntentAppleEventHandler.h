@class NSString, INAppIntentDispatcher;

@interface INAppIntentAppleEventHandler : NSObject <INIntentDeliveringDelegate> {
    BOOL _subscribed;
    id _handlerForIntent;
    INAppIntentDispatcher *_intentDispatcher;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedEventHandler;

- (void)unsubscribe;
- (void)intentDeliverer:(id)a0 deliverIntent:(id)a1 withBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)handleAppleEvent:(id)a0 withReplyEvent:(id)a1;
- (void)subscribe;

@end
