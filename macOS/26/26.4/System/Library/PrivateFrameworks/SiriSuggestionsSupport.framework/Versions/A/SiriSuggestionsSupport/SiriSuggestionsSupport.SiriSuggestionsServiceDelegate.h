@interface SiriSuggestionsSupport.SiriSuggestionsServiceDelegate : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ eventDrivenClient;
    void /* unknown type, empty encoding */ autocompleteService;
    void /* unknown type, empty encoding */ offlineGenerationClient;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
