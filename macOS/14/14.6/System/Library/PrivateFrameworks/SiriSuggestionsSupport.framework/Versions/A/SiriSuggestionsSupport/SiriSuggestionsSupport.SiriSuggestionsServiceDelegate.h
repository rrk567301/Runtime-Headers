@interface SiriSuggestionsSupport.SiriSuggestionsServiceDelegate : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ client;
    void /* unknown type, empty encoding */ eventDrivenClient;
    void /* unknown type, empty encoding */ logger;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
