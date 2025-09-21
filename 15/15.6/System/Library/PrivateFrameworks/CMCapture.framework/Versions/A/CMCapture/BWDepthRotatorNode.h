@interface BWDepthRotatorNode : BWNode {
    struct opaqueCMFormatDescription { } *_outputDepthFormatDescription;
    struct opaqueCMFormatDescription { } *_outputDYFormatDescription;
    unsigned int _inputDepthFormat;
    struct { int width; int height; } _inputDepthDimensions;
    int _rotationDegrees;
    long long _bufferSerialNumber;
    char _separateDepthComponentsEnabled;
    char _depthProvidedAsAttachedMedia;
}

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (id)initWithRotationDegrees:(int)a0 separateDepthComponentsEnabled:(char)a1 depthProvidedAsAttachedMedia:(char)a2;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end
