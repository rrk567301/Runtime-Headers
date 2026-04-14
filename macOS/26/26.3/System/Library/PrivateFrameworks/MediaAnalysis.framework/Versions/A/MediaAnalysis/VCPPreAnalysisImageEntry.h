@interface VCPPreAnalysisImageEntry : NSObject {
    struct CF<__CVBuffer *> { struct __CVBuffer *value_; } _pixelBuffer;
}

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) unsigned long long count;

- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;

@end
