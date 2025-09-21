@class GGMMetalToolBox, NSArray, NSDictionary, VideoDeghostingDetectionV2, NSMutableArray;
@protocol MTLCommandQueue, MTLDevice;

@interface GGMController : NSObject {
    VideoDeghostingDetectionV2 *_GGDetector;
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    GGMMetalToolBox *_metalToolbox;
    struct { struct { int clipThreshold; int patchSize; int antiFlareSize; unsigned char simpleRefList; unsigned char firstFrameReprocess; unsigned char cpuDetection; unsigned char baselineMitigation; unsigned char enableColorMask; unsigned char verbose; unsigned char cpuMitigation; struct __CFArray *initGGarray; } internalCfg; struct { int lightMode; int homographyType; int detectionType; int tempPatchMode; int frameDelay; unsigned char drawBoundingBox; unsigned char noMetaData; unsigned char backGroundDetection; unsigned char LSGatingEnabled; unsigned char luxLevelGating; unsigned char clippedPixelGatingEnabled; } externalCfg; } _configure;
    long long _processedFrameInDetection;
    long long _lookaheadFrameProcessedInFinish;
    NSMutableArray *_metaInfoQueue;
    void *_opticalCenterArray;
    float *_opticalCenterMvShiftArray;
    unsigned int _opticalCenterArrayLen;
    unsigned int _opticalCenterArrayIndex;
    struct { struct *frameDataArray; int size; int validCount; } _lookaheadFrames;
    struct __IOSurfaceAccelerator { } *_scaler;
}

@property (retain, nonatomic) NSDictionary *metaDictionary;
@property (retain, nonatomic) NSDictionary *inputParamsToRepair;
@property (retain, nonatomic) NSArray *futureInputParamsToRepair;
@property (nonatomic) struct { struct *x0; int x1; int x2; } *futureFramesToDetectionAndRepair;
@property (readonly, nonatomic) NSDictionary *tuningParamDict;
@property (nonatomic) struct __CVBuffer { } *inputBuffer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } ispTimeStamp;
@property (nonatomic) struct __CVBuffer { } *lightSourceMask;
@property (nonatomic) struct __CVBuffer { } *keyPointsList;
@property (retain, nonatomic) NSDictionary *detectedGreenGhostInfo;
@property (readonly, nonatomic) struct __CVBuffer { } *processedPixelBuffer;
@property void /* unknown type, empty encoding */ visedOpticalCenter;
@property void /* unknown type, empty encoding */ nextVisedOpticalCenter;
@property float opticalCenterMvShift;

+ (void)downloadMobileAssetWithCompletionHandler:(id /* block */)a0;
+ (long long)getMobileAssetStatusWithPercentCompleted:(long long *)a0;

- (void)resetState;
- (void)dealloc;
- (void)endSession;
- (void).cxx_destruct;
- (id)initWithFrameWidth:(long long)a0 FrameHeight:(long long)a1 usePrecomputedFlow:(BOOL)a2;
- (BOOL)msrFrameSource:(struct __CVBuffer { } *)a0 destination:(struct __CVBuffer { } *)a1 waitForCompletion:(BOOL)a2;
- (BOOL)processSourceFrame:(struct __CVBuffer { } *)a0 nextFrame:(struct __CVBuffer { } *)a1 forwardFlow:(struct __CVBuffer { } *)a2 backwardFlow:(struct __CVBuffer { } *)a3 ourceFrameOpticalCenter:(struct CGPoint { double x0; double x1; })a4 nextFrameOpticalCenter:(struct CGPoint { double x0; double x1; })a5 opticalCenterShift:(double)a6 previousOutputFrame:(struct __CVBuffer { } *)a7 previousPreviousOutputFrame:(struct __CVBuffer { } *)a8 randomAccessMode:(BOOL)a9 destinationFrame:(struct __CVBuffer { } *)a10;
- (void)resetIntermediateVariables;
- (struct { struct { int x0; int x1; int x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; struct __CFArray *x10; } x0; struct { int x0; int x1; int x2; int x3; int x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; } x1; })setDefaultControllerConfig;
- (BOOL)startSessionWithQualityMode:(long long)a0 error:(id *)a1;

@end
