@interface SiriPrivateLearningLogging.PLLoggingServiceListenerDelegate : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ connections;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;

@end
