@interface SNSystemAudioAnalyzerRemote : NSObject <SNSystemAudioAnalyzerProtocol> {
    void /* unknown type, empty encoding */ registeredRequests;
    void /* unknown type, empty encoding */ analyzer;
    void /* unknown type, empty encoding */ generator;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ audioConfiguration;
}

+ (id)connectionLostError;

- (id)init;
- (void).cxx_destruct;
- (id)initWithClient:(id)a0 queue:(id)a1;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)_removeRequest:(id)a0;
- (void)removeRequest:(id)a0;
- (id)_acquireSystemAudioAnalyzer;
- (void)_addRequest:(id)a0 withObserver:(id)a1;
- (void)_invalidateActiveAnalyzer;
- (void)_removeAllRequests;
- (void)_setAudioConfiguration:(id)a0;
- (void)_invalidateAnalyzer:(id)a0;
- (id)initWithRemoteAnalyzerGenerator:(id /* block */)a0 queue:(id)a1;
- (void)invalidateActiveAnalyzer;
- (void)removeAllRequests;
- (void)setAudioConfiguration:(id)a0;

@end
