@class NSString;

@interface WK_RTCVideoDecoderH264 : NSObject <RTCVideoDecoder> {
    struct opaqueCMFormatDescription { } *_videoFormat;
    struct OpaqueCMMemoryPool { } *_memoryPool;
    struct OpaqueVTDecompressionSession { } *_decompressionSession;
    id /* block */ _callback;
    int _error;
    BOOL _useAVC;
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
- (void)flush;
- (void)setVideoFormat:(struct opaqueCMFormatDescription { } *)a0;
- (long long)setAVCFormat:(const char *)a0 size:(unsigned long long)a1 width:(unsigned short)a2 height:(unsigned short)a3;
- (void)configureDecompressionSession;
- (long long)decode:(id)a0 missingFrames:(BOOL)a1 codecSpecificInfo:(id)a2 renderTimeMs:(long long)a3;
- (long long)decodeData:(const char *)a0 size:(unsigned long long)a1 timeStamp:(long long)a2;
- (void)destroyDecompressionSession;
- (id)implementationName;
- (long long)releaseDecoder;
- (int)resetDecompressionSession;
- (long long)startDecodeWithNumberOfCores:(int)a0;

@end
