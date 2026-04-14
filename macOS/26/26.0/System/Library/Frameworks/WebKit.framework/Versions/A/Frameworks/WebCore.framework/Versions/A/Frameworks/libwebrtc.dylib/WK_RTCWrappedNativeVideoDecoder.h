@class NSString;

@interface WK_RTCWrappedNativeVideoDecoder : NSObject <RTCVideoDecoder> {
    struct unique_ptr<webrtc::VideoDecoder, std::default_delete<webrtc::VideoDecoder>> { struct VideoDecoder *__ptr_; } _wrappedDecoder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void)setCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (long long)decode:(id)a0 missingFrames:(BOOL)a1 codecSpecificInfo:(id)a2 renderTimeMs:(long long)a3;
- (id)implementationName;
- (id)initWithNativeDecoder:(struct unique_ptr<webrtc::VideoDecoder, std::default_delete<webrtc::VideoDecoder>> { struct VideoDecoder *x0; })a0;
- (long long)releaseDecoder;
- (struct unique_ptr<webrtc::VideoDecoder, std::default_delete<webrtc::VideoDecoder>> { struct VideoDecoder *x0; })releaseWrappedDecoder;
- (long long)startDecodeWithNumberOfCores:(int)a0;

@end
