@class NSSet, NSMutableDictionary, ANSTLabelDetectionConfiguration, NSMutableOrderedSet, ANSTTensorDescriptor;

@interface ANSTLabelDetection : ANSTAlgorithm {
    struct __CVBuffer { } *_transformedInputImage;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _inputAffineTransform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _outputAffineTransform;
    struct unique_ptr<fastBPE::BPEApplyer, std::default_delete<fastBPE::BPEApplyer>> { struct BPEApplyer *__ptr_; } _bpeApplyer;
    NSMutableDictionary *_currentFeatureMap;
    NSMutableOrderedSet *_currentLabels;
    BOOL _readyForInference;
    struct __CVBuffer { } *_bgraInputBuffer;
    struct OpaqueVTPixelTransferSession { } *_pixelTransferSession;
    struct e5rt_execution_stream { } *decoder_stream;
    struct e5rt_execution_stream { } *encoder_stream;
    struct e5rt_execution_stream_operation { } *decoder_operation;
    struct e5rt_execution_stream_operation { } *encoder_operation;
    struct __IOSurface { } *_inputImageTensorSurface;
    struct e5rt_buffer_object { } *_inputBufferObject_text;
    struct e5rt_io_port { } *_outputPort_score;
    struct e5rt_tensor_desc { } *_outputTensorDesc_score;
    struct e5rt_buffer_object { } *_outputBufferObject_score;
    struct __IOSurface { } *_outputScoreSurface;
    struct e5rt_io_port { } *_outputPort_bbox;
    struct e5rt_tensor_desc { } *_outputTensorDesc_bbox;
    struct e5rt_buffer_object { } *_outputBufferObject_bbox;
    struct __IOSurface { } *_outputBBoxSurface;
    float *_textFeature;
    ANSTTensorDescriptor *_outputScoreDescriptor;
    ANSTTensorDescriptor *_outputBBoxDescriptor;
    struct e5rt_buffer_object { } *_inputBufferObject_text_ids;
    int *_textIds;
    struct e5rt_io_port { } *_outputPort_text_feats;
    struct e5rt_tensor_desc { } *_outputTensorDesc_text_feats;
    struct __IOSurface { } *_outputTextFeatsSurface;
    struct e5rt_buffer_object { } *_outputBufferObject_text_feats;
    void *_trackingNode;
    NSMutableDictionary *_classwiseThreshold;
    unsigned long long _detectedObjectId;
}

@property (readonly, nonatomic) ANSTLabelDetectionConfiguration *configuration;
@property (readonly, copy, nonatomic) NSSet *supportedLabels;
@property (readonly, nonatomic) unsigned int networkInputBufferPixelFormat;

+ (id)new;

- (BOOL)prepareWithError:(id *)a0;
- (void)dealloc;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (void)resetTracking;
- (BOOL)addSupportedLabels:(id)a0 error:(id *)a1;
- (void)createESOP:(struct e5rt_execution_stream_operation **)a0 modelURL:(id)a1 error:(id *)a2;
- (BOOL)executeDecoderInferenceWithError:(id *)a0;
- (BOOL)executeEncoderInferenceWithError:(id *)a0;
- (id)listWithPixelBuffer:(struct __CVBuffer { } *)a0 labels:(id)a1 detectionThreshold:(float)a2 error:(id *)a3;
- (id)listWithPixelBuffer:(struct __CVBuffer { } *)a0 labels:(id)a1 error:(id *)a2;
- (unsigned long long)networkInputBufferHeight;
- (unsigned long long)networkInputBufferWidth;
- (void)preprocessInputImage:(struct __CVBuffer { } *)a0;
- (id)trackWithPixelBuffer:(struct __CVBuffer { } *)a0 objects:(id)a1 error:(id *)a2;
- (BOOL)updateTextFeature:(float *)a0 error:(id *)a1;
- (BOOL)updateTextIds:(int *)a0 error:(id *)a1;

@end
