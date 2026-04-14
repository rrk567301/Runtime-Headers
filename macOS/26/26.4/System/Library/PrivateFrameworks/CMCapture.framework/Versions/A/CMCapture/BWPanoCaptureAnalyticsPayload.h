@class NSString;

@interface BWPanoCaptureAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) float averageTranslationX;
@property (nonatomic) float averageTranslationY;
@property (nonatomic) float exposureTime;
@property (nonatomic) float minLuxValue;
@property (nonatomic) float maxLuxValue;
@property (nonatomic) float averageLuxValue;
@property (nonatomic) float focusDistance;
@property (nonatomic) unsigned int numFrames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
