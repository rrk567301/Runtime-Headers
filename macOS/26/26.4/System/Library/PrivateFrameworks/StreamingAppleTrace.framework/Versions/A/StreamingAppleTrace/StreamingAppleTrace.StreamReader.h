@interface StreamingAppleTrace.StreamReader : NSObject <NSStreamDelegate> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ inputStream;
    void /* unknown type, empty encoding */ buffer;
    void /* unknown type, empty encoding */ didClose;
    void /* unknown type, empty encoding */ onData;
    void /* unknown type, empty encoding */ onClose;
}

- (void)open;
- (void)stream:(id)a0 handleEvent:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)close;
- (id)initWithUrl:(id)a0 onData:(id /* block */)a1 onClose:(id /* block */)a2;
- (void)setBufferSizeWithBytes:(long long)a0;

@end
