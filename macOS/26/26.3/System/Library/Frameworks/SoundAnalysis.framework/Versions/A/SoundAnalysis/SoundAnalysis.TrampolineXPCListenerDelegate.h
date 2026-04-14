@interface SoundAnalysis.TrampolineXPCListenerDelegate : NSObject <NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ listenerShouldAcceptNewConnectionFn;
}

- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;

@end
