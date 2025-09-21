@interface VKPlatform : NSObject {
    int _numCPUs;
    char _isMac;
    char _lowPerformanceDevice;
}

@property (readonly, nonatomic) char roadsWithSimpleLineMeshesAvailable;
@property (readonly, nonatomic) unsigned int tilePrefetchNumberOfScreens;
@property (readonly, nonatomic) char tileZBias;
@property (readonly, nonatomic) char supportsHiResRTT;
@property (readonly, nonatomic) unsigned char preferredFrequencyUpdate;
@property (readonly, nonatomic) char isPad;
@property (readonly, nonatomic) char isMac;
@property (readonly, nonatomic) char isIphone;
@property (readonly, nonatomic) char shouldDrawWhenReady;
@property (readonly, nonatomic) char shouldStyleLabelsInParallel;
@property (readonly, nonatomic) char canMakeSharingThumbnails;
@property (readonly, nonatomic) char supportsBuildingShadows;
@property (readonly, nonatomic) char supportsBuildingStrokes;
@property (readonly, nonatomic) char supports3DBuildingStrokes;
@property (readonly, nonatomic) char supportsHiResBuildings;
@property (readonly, nonatomic) char supports3DBuildings;
@property (readonly, nonatomic) char supportsPerFragmentLighting;
@property (readonly, nonatomic) char supportsCoastlineGlows;
@property (readonly, nonatomic) char proceduralRoadAlpha;
@property (readonly, nonatomic) char useCheapTrafficShader;
@property (readonly, nonatomic) unsigned long long memorySize;
@property (readonly, nonatomic) unsigned char explicitDefaultRefreshRate;
@property (readonly, nonatomic) unsigned char tileDecodeQueueWidth;
@property (readonly, nonatomic) unsigned char processingQueueWidth;
@property (readonly, nonatomic) char lowPerformanceDevice;
@property (readonly, nonatomic) double routeLineSimplificationEpsilon;
@property (readonly, nonatomic) char supportsARMode;
@property (readonly, nonatomic) char reduceMotionEnabled;
@property (readonly, nonatomic) char allows3DPuck;

+ (id)sharedPlatform;

- (id)init;
- (unsigned long long)_calculateMemSize;
- (void)_determineHardware;
- (unsigned long long)tileMaximumLimit:(unsigned long long)a0;

@end
