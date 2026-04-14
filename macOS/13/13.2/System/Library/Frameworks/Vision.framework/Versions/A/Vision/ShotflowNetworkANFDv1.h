@interface ShotflowNetworkANFDv1 : ShotflowNetwork

+ (id)modelName;
+ (struct CGSize { double x0; double x1; })inputImageSize;
+ (unsigned long long)numberMaxoutLayers;
+ (const void *)ratios;
+ (const void *)cellStartsX;
+ (const void *)cellStartsY;
+ (unsigned long long)mumberBinsNegativeMaxout;
+ (unsigned long long)mumberPosClasses;
+ (BOOL)poseSquare;
+ (const void *)importantClasses;

- (id)initWithModelPath:(id)a0 espressoEngineID:(int)a1 espressoDeviceID:(int)a2 espressoStorageType:(int)a3 threshold:(float)a4;
- (void)initializeBuffers;
- (int)setInputShape:(unsigned long long)a0 height:(unsigned long long)a1;

@end
