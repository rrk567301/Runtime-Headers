@interface ShotflowNetworkANODBase : ShotflowNetwork

+ (struct CGSize { double x0; double x1; })inputImageSize;
+ (float)nonSquareYawDefault;
+ (unsigned long long)numberMaxoutLayers;
+ (const void *)ratios;
+ (const void *)cellStartsY;
+ (const void *)cellStartsX;
+ (unsigned long long)mumberBinsNegativeMaxout;
+ (BOOL)poseSquare;
+ (float)nonSquareRollDefault;

- (id)initWithModelPath:(id)a0 espressoEngineID:(int)a1 espressoDeviceID:(int)a2 espressoStorageType:(int)a3 threshold:(float)a4;
- (void)initializeBuffers;

@end
