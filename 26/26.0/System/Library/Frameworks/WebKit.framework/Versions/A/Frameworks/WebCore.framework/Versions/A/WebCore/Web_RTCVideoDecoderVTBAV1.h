@interface Web_RTCVideoDecoderVTBAV1 : NSObject {
    struct RetainPtr<const opaqueCMFormatDescription *> { struct opaqueCMFormatDescription *m_ptr; } _videoFormat;
    struct RetainPtr<OpaqueVTDecompressionSession *> { struct OpaqueVTDecompressionSession *m_ptr; } _decompressionSession;
    struct BlockPtr<void (__CVBuffer *, long long, long long, bool)> { id /* block */ m_block; } _callback;
    int _error;
    int _width;
    int _height;
}

- (void)dealloc;
- (id)init;
- (void)flush;
- (void)setError:(int)a0;
- (id).cxx_construct;
- (void)setCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (void)configureDecompressionSession;
- (long long)decodeData:(const char *)a0 size:(unsigned long long)a1 timeStamp:(long long)a2;
- (void)destroyDecompressionSession;
- (long long)releaseDecoder;
- (int)resetDecompressionSession;
- (void)setWidth:(unsigned short)a0 height:(unsigned short)a1;

@end
