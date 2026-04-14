@class _TtC11MobileTimer12ChannelEvent;

@interface MobileTimer.ChannelCore : NSObject {
    void /* unknown type, empty encoding */ channel;
    void /* unknown type, empty encoding */ observersByEventName;
    void /* unknown type, empty encoding */ observersQueue;
    void /* unknown type, empty encoding */ eventTask;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sendWithEvent:(_TtC11MobileTimer12ChannelEvent *)a0 completionHandler:(void (^)(void))a1;
- (void)subscribeWithCallback:(id /* block */)a0 forObserver:(id)a1 eventName:(id)a2;
- (void)unsubscribeWithObserver:(id)a0;

@end
