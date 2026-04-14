@class NSData;

@interface MotionEncoderWrapper : NSObject {
    int _componentsPerAttribute;
    int _attributeCount;
    int _intraFramePeriod;
    int _frameCount;
    unsigned char _quantization;
    void *encoder;
    unsigned long long encParametersLength;
    unsigned long long estimatedEncodedFrameSizeInBytes;
    NSData *_encoderParamsData;
    struct vector<unsigned char, std::allocator<unsigned char>> { char *__begin_; char *__end_; char *__cap_; } _bitstream;
}

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)encodeFrameInternal:(const int *)a0 outputEncodedBuffer:(char *)a1 outputBufferLength:(unsigned long long)a2 type:(unsigned long long *)a3 encodeError:(unsigned long long *)a4;
- (id)getEncoderParams;
- (id)initWithAttributeCount:(unsigned int)a0 componentCount:(unsigned int)a1 quantization:(unsigned int)a2;
- (id)motionEncoderWrapperLogSharedInstance;

@end
