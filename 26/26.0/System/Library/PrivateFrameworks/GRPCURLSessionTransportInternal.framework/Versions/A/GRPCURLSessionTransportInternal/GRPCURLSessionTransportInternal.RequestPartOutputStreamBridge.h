@interface GRPCURLSessionTransportInternal.RequestPartOutputStreamBridge : NSObject <NSStreamDelegate> {
    void /* unknown type, empty encoding */ requestParts;
    void /* unknown type, empty encoding */ outputStream;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ compressor;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ streamID;
}

- (void)dealloc;
- (id)init;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void).cxx_destruct;

@end
