@interface ShotflowNetworkANODBase : ShotflowNetwork

+ (struct CGSize { double x0; double x1; })inputImageSize;
+ (unsigned long long)numberMaxoutLayers;
+ (const void *)ratios;
+ (const void *)cellStartsX;
+ (const void *)cellStartsY;
+ (unsigned long long)mumberBinsNegativeMaxout;
+ (BOOL)poseSquare;
+ (float)nonSquareRollDefault;
+ (float)nonSquareYawDefault;

- (id)initWithModelPath:(id)a0 espressoEngineID:(int)a1 espressoDeviceID:(int)a2 espressoStorageType:(int)a3 threshold:(float)a4;
- (void)initializeBuffers;

@end
