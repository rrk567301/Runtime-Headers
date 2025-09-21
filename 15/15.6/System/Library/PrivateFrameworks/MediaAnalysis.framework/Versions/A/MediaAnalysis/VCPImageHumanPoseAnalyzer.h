@class NSString, VCPCNNModelEspresso, NSURL, NSMutableArray;

@interface VCPImageHumanPoseAnalyzer : VCPImageAnalyzer {
    VCPCNNModelEspresso *_modelEspresso;
    NSURL *_netFileUrl;
    float *_inputData;
    NSString *_resConfig;
    NSMutableArray *_persons;
    NSMutableArray *_results;
    char _saveKeypoints;
    int _inputWidth;
    int _inputHeight;
    float *_heatmapNms;
    char _forceCPU;
    char _sharedModel;
    char _flushModel;
    struct Scaler { struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } pool_; int width_; int height_; unsigned int format_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; } _scaler;
}

@property char trackingMode;

+ (char)saveKeypoints;
+ (id)sharedModel:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (int)createModelWithHeight:(int)a0 srcWidth:(int)a1;
- (int)analyzePixelBuffer:(struct __CVBuffer { } *)a0 flags:(unsigned long long *)a1 results:(id *)a2 cancel:(id /* block */)a3;
- (int)configForAspectRatio:(id)a0;
- (int)copyImage:(struct __CVBuffer { } *)a0 toData:(float *)a1 withChannels:(int)a2;
- (int)createInput:(float *)a0 withBuffer:(struct __CVBuffer { } *)a1 modelInputHeight:(int)a2 modelInputWidth:(int)a3;
- (int)generateHumanPose:(struct __CVBuffer { } *)a0;
- (id)initWithKeypointsOption:(char)a0 aspectRatio:(id)a1 lightweight:(char)a2 forceCPU:(char)a3 sharedModel:(char)a4 flushModel:(char)a5;
- (int)parsePersons:(float)a0 width:(int)a1 height:(int)a2;
- (int)preferredInputFormat:(int *)a0 height:(int *)a1 format:(unsigned int *)a2;
- (int)processPersons:(float)a0 width:(int)a1 height:(int)a2;
- (int)reInitModel;
- (int)updateModelForAspectRatio:(id)a0;

@end
