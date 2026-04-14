@protocol MTLTexture;

@interface GSConvertMXIOption : NSObject

@property (nonatomic) struct shared_ptr<apple3dgs::MultiLayerOptions> { struct MultiLayerOptions *__ptr_; struct __shared_weak_count *__cntrl_; } impl;
@property (nonatomic) long long layers;
@property (nonatomic) unsigned int type;
@property (nonatomic) BOOL singlePass;
@property (nonatomic) long long numPasses;
@property (nonatomic) BOOL enableDepthTessellation;
@property (nonatomic) float overlapFactor;
@property (nonatomic) float ndcOverlapFactor;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } cameraExtrinsics;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[3]; } cameraIntrinsics;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[3]; } cameraIntrinsicsRefine;
@property (nonatomic) void /* unknown type, empty encoding */ cameraImageSize;
@property (nonatomic) void /* unknown type, empty encoding */ cameraNearFarPlane;
@property (retain, nonatomic) id<MTLTexture> refineImage;
@property (nonatomic) unsigned int logLevel;
@property (nonatomic) BOOL memorylessTexture;
@property (nonatomic) unsigned int layerSamplingMethod;

- (unsigned int)type;
- (id)init;
- (void)setType:(unsigned int)a0;
- (long long)layers;
- (id).cxx_construct;
- (void)setLogLevel:(unsigned int)a0;
- (unsigned int)logLevel;
- (void).cxx_destruct;
- (void)setLayers:(long long)a0;
- (struct { void /* unknown type, empty encoding */ x0[3]; })cameraIntrinsics;
- (void)setCameraIntrinsics:(struct { void /* unknown type, empty encoding */ x0[3]; })a0;
- (float)overlapFactor;
- (void)setOverlapFactor:(float)a0;
- (void /* unknown type, empty encoding */)cameraImageSize;
- (void)setRefineImage:(id)a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })cameraExtrinsics;
- (struct { void /* unknown type, empty encoding */ x0[3]; })cameraIntrinsicsRefine;
- (void /* unknown type, empty encoding */)cameraNearFarPlane;
- (BOOL)enableDepthTessellation;
- (unsigned int)layerSamplingMethod;
- (BOOL)memorylessTexture;
- (float)ndcOverlapFactor;
- (long long)numPasses;
- (id)refineImage;
- (void)setCameraExtrinsics:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (void)setCameraImageSize:(SEL)a0;
- (void)setCameraIntrinsicsRefine:(struct { void /* unknown type, empty encoding */ x0[3]; })a0;
- (void)setCameraNearFarPlane:(SEL)a0;
- (void)setEnableDepthTessellation:(BOOL)a0;
- (void)setLayerSamplingMethod:(unsigned int)a0;
- (void)setMemorylessTexture:(BOOL)a0;
- (void)setNdcOverlapFactor:(float)a0;
- (void)setNumPasses:(long long)a0;
- (void)setSinglePass:(BOOL)a0;
- (BOOL)singlePass;

@end
