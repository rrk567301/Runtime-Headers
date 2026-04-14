@class CSUImageCaptioningEncoder, CSUImageCaptionerConfiguration, CSUImageCaptioningDecoder;

@interface CSUImageCaptioner : NSObject

@property (retain, nonatomic) CSUImageCaptioningEncoder *encoder;
@property (retain, nonatomic) CSUImageCaptioningDecoder *decoder;
@property (readonly, nonatomic) CSUImageCaptionerConfiguration *configuration;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)loadResources:(id *)a0;
- (id)computeCaptionForCSUBufferEmbedding:(id)a0 withDecodingMethod:(long long)a1 error:(id *)a2;
- (id)computeCaptionForEmbedding:(id)a0 withDecodingMethod:(long long)a1 error:(id *)a2;
- (id)computeCaptionForImage:(struct __CVBuffer { } *)a0 withDecodingMethod:(long long)a1 error:(id *)a2;
- (BOOL)resampleImage:(struct __CVBuffer { } *)a0 intoInputImage:(struct __CVBuffer { } *)a1 error:(id *)a2;

@end
