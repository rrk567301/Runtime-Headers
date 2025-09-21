@class NSString;

@interface WK_RTCVideoDecoderH264 : NSObject <RTCVideoDecoder> {
    struct opaqueCMFormatDescription { } *_videoFormat;
    struct OpaqueCMMemoryPool { } *_memoryPool;
    struct OpaqueVTDecompressionSession { } *_decompressionSession;
    id /* block */ _callback;
    int _error;
    BOOL _useAVC;
    struct RTCVideoFrameReorderQueue { struct deque<std::unique_ptr<webrtc::RTCVideoFrameReorderQueue::RTCVideoFrameWithOrder>, std::allocator<std::unique_ptr<webrtc::RTCVideoFrameReorderQueue::RTCVideoFrameWithOrder>>> { struct __split_buffer<std::unique_ptr<webrtc::RTCVideoFrameReorderQueue::RTCVideoFrameWithOrder> *, std::allocator<std::unique_ptr<webrtc::RTCVideoFrameReorderQueue::RTCVideoFrameWithOrder> *>> { void **__first_; void **__begin_; void **__end_; void **__cap_; } __map_; unsigned long long __start_; unsigned long long __size_; } _reorderQueue; unsigned char _reorderSize; struct Mutex { struct MutexImpl { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mutex_; } impl_; } _reorderQueueLock; } _reorderQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)flush;
- (void)setError:(int)a0;
- (id).cxx_construct;
- (void)setCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (long long)setAVCFormat:(const char *)a0 size:(unsigned long long)a1 width:(unsigned short)a2 height:(unsigned short)a3;
- (void)setVideoFormat:(struct opaqueCMFormatDescription { } *)a0;
- (void)configureDecompressionSession;
- (long long)decode:(id)a0 missingFrames:(BOOL)a1 codecSpecificInfo:(id)a2 renderTimeMs:(long long)a3;
- (long long)decodeData:(const char *)a0 size:(unsigned long long)a1 timeStamp:(long long)a2;
- (void)destroyDecompressionSession;
- (id)implementationName;
- (void)processFrame:(id)a0 reorderSize:(unsigned long long)a1;
- (long long)releaseDecoder;
- (int)resetDecompressionSession;
- (long long)startDecodeWithNumberOfCores:(int)a0;

@end
