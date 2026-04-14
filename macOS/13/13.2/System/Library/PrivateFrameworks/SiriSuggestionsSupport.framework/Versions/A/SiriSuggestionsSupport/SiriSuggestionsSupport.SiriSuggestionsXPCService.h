@interface SiriSuggestionsSupport.SiriSuggestionsXPCService : _TtCs12_SwiftObject <SiriSuggestionsSupport.SiriSuggestionsXPCInterface> {
    void /* unknown type, empty encoding */ client;
}

- (void)suggestNextWithRequestId:(id)a0 extraStateStoreProperties:(id)a1 completionHandler:(id /* block */)a2;
- (void)submitFor:(id)a0 propertyKey:(id)a1 propertyValue:(id)a2 completion:(id /* block */)a3;
- (void)refreshServiceWithCompletion:(id /* block */)a0;

@end
