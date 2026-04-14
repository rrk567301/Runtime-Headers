@class NSString, NSMutableDictionary, MXIMaterialDescriptor, MXIRecording;

@interface MXISceneBuilder : NSObject {
    MXIRecording *_recording;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; float *__cap_; } _layerDepths;
    BOOL _overriddenLayerDepths;
}

@property (nonatomic) long long type;
@property (nonatomic) unsigned int numLayers;
@property (nonatomic) struct { float from; float to; } depthRange;
@property (nonatomic) float layerOverlap;
@property (nonatomic) float fovInRadians;
@property (nonatomic) float effectiveFovInRadians;
@property (nonatomic) NSString *inputColorPrimaries;
@property (nonatomic) NSString *outputColorPrimaries;
@property (nonatomic) float aspectRatio;
@property (nonatomic) float effectiveAspectRatio;
@property (nonatomic) BOOL premultipliedAlphaInput;
@property (nonatomic) BOOL premultipliedAlphaOutput;
@property (nonatomic) BOOL infill;
@property (nonatomic) BOOL srgbBlending;
@property (nonatomic) unsigned int mipLevelsCount;
@property (nonatomic) unsigned int resolutionWidth;
@property (nonatomic) unsigned int resolutionHeight;
@property (nonatomic) MXIMaterialDescriptor *materialDescriptor;
@property (retain, nonatomic) NSMutableDictionary *attributes;

+ (id)compressScene:(id)a0 withOptions:(id)a1 error:(id *)a2;

- (void)setAttribute:(id)a0 forKey:(id)a1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)buildSceneWithOptions:(id)a0 error:(id *)a1;
- (float)getLayerDepth:(unsigned int)a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })getLayerProjectionMatrix:(long long)a0;
- (struct { float x0; float x1; })getLayerRange:(long long)a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })getLayerViewMatrix:(long long)a0;
- (id)initBuilderWithType:(long long)a0 numberOfLayers:(long long)a1 depthRange:(struct { float x0; float x1; })a2 materialDescriptor:(id)a3 options:(id)a4;
- (id)initWithType:(long long)a0 numberOfLayers:(long long)a1 depthRange:(struct { float x0; float x1; })a2 materialDescriptor:(id)a3 options:(id)a4;
- (id)initWithType:(long long)a0 numberOfLayers:(long long)a1 depthRange:(struct { float x0; float x1; })a2 options:(id)a3;
- (void)process:(id)a0 layer:(long long)a1 face:(long long)a2 color:(id)a3 depth:(id)a4 error:(id *)a5;
- (void)process:(id)a0 layer:(long long)a1 face:(long long)a2 color:(id)a3 depth:(id)a4 normal:(id)a5 extended:(id)a6 error:(id *)a7;
- (void)process:(id)a0 layer:(long long)a1 face:(long long)a2 color:(id)a3 depth:(id)a4 params:(id)a5 error:(id *)a6;

@end
