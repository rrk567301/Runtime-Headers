@interface SiriInformationSearch.MockEmittableSiriAnalyticsMessageStream : NSObject <SiriAnalyticsMessageStream> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ emittedMessages;
}

- (void)enqueueLargeMessageObjectFromPath:(id)a0 assetIdentifier:(id)a1 messageMetadata:(id)a2 completion:(id /* block */)a3;
- (void)barrierWithCompletion:(id /* block */)a0;
- (void)resolvePartialMessage:(id)a0;
- (void)emitMessage:(id)a0 timestamp:(unsigned long long)a1;
- (void)resolvePartialMessage:(id)a0 timestamp:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)emitMessage:(id)a0;
- (id)init;

@end
