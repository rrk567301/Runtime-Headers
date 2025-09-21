@interface _TtCOO25IntelligencePlatformQuery12VirtualTable6Stream24TypeErasedStreamIterator : NSObject <BPSSubscriber> {
    void /* unknown type, empty encoding */ subscription;
    void /* unknown type, empty encoding */ currentEvent;
    void /* unknown type, empty encoding */ currentBookmark;
    void /* unknown type, empty encoding */ completion;
}

- (void)cancel;
- (id)init;
- (void)receiveSubscription:(id)a0;
- (long long)receiveInput:(id)a0;
- (void)receiveCompletion:(id)a0;
- (void).cxx_destruct;

@end
