@interface GRPCURLSessionTransportInternal.RequestPartOutputStreamBridge : NSObject <NSStreamDelegate> {
    void /* unknown type, empty encoding */ requestParts;
    void /* unknown type, empty encoding */ outputStream;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ compressor;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ streamID;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;

@end
