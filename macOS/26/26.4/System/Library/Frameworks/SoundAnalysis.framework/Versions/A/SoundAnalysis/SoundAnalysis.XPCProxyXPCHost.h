@interface SoundAnalysis.XPCProxyXPCHost : NSObject <SoundAnalysis.UnsafeXPCProxyXPCProtocol> {
    void /* unknown type, empty encoding */ hosted;
}

- (void).cxx_destruct;
- (id)init;
- (void)xpcUnsafeSendMessageWithData:(id)a0 proxy:(id)a1 completionHandler:(id /* block */)a2;

@end
