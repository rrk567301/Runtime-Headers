@class NSString;

@interface WK_RTCVideoDecoderH264 : NSObject <RTCVideoDecoder> {
    struct opaqueCMFormatDescription { } *_videoFormat;
    struct OpaqueCMMemoryPool { } *_memoryPool;
    struct OpaqueVTDecompressionSession { } *_decompressionSession;
    id /* block */ _callback;
    int _error;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setError:(int)a0;
- (void)setCallback:(id /* block */)a0;
- (long long)startDecodeWithNumberOfCores:(int)a0;
- (long long)releaseDecoder;
- (long long)decode:(id)a0 missingFrames:(BOOL)a1 codecSpecificInfo:(id)a2 renderTimeMs:(long long)a3;
- (id)implementationName;
- (long long)decodeData:(const char *)a0 size:(unsigned long long)a1 timeStamp:(unsigned int)a2;
- (int)resetDecompressionSession;
- (void)configureDecompressionSession;
- (void)destroyDecompressionSession;
- (void)setVideoFormat:(struct opaqueCMFormatDescription { } *)a0;

@end
