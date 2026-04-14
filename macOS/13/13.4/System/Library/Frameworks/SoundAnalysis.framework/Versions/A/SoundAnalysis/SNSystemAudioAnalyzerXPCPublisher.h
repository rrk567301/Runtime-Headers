@protocol SNSystemAudioAnalyzerXPCProtocol, NSXPCProxyCreating;

@interface SNSystemAudioAnalyzerXPCPublisher : NSObject <SNSystemAudioAnalyzerProtocol> {
    id<SNSystemAudioAnalyzerXPCProtocol, NSXPCProxyCreating> _subscriber;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)removeRequest:(id)a0;
- (void)removeAllRequests;
- (void)setAudioConfiguration:(id)a0;

@end
