@interface ADMetricDepthFrameStatistics : NSObject

@property (nonatomic) unsigned long long jasperInputSpotCount;
@property (nonatomic) unsigned long long jasperProjectedSpotCount;
@property (nonatomic) float jasperPoseDistance;
@property (nonatomic) unsigned long long pearlProjectedPixelCount;
@property (nonatomic) float pearlProjectedPixelPercentage;
@property (nonatomic) float colorPoseRoll;
@property (nonatomic) BOOL allPosesValid;
@property (nonatomic) BOOL depthSensorsIgnored;

@end
