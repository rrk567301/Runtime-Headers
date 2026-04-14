@interface VCPPreAnalysisImageEntry : NSObject {
    struct CF<__CVBuffer *> { struct __CVBuffer *value_; } _pixelBuffer;
}

@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0;

@end
