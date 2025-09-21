@interface SiriSuggestionsSupport.SiriSuggestionsServiceDelegate : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ eventDrivenClient;
    void /* unknown type, empty encoding */ autocompleteService;
    void /* unknown type, empty encoding */ offlineGenerationClient;
}

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
