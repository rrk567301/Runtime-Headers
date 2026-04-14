@interface _TtCC26AIMLInstrumentationStreams25SiriConversationPublisher26SiriConversationSubscriber : NSObject <BPSSubscriber> {
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ conversationCount;
    void /* unknown type, empty encoding */ downstream;
    void /* unknown type, empty encoding */ lastReceivedTimestamp;
    void /* unknown type, empty encoding */ graphBuilder;
    void /* unknown type, empty encoding */ upstreamFinished;
    void /* unknown type, empty encoding */ conversationWindowLength;
}

- (void)cancel;
- (id)init;
- (void)receiveSubscription:(id)a0;
- (long long)receiveInput:(id)a0;
- (void)receiveCompletion:(id)a0;
- (void).cxx_destruct;

@end
