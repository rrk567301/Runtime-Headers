@class NSString, NSDictionary;

@interface BWCameraSwitchAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) int switchReason;
@property (nonatomic) float uiZoom;
@property (retain, nonatomic) NSString *switchFromPortType;
@property (retain, nonatomic) NSString *switchToPortType;
@property (retain, nonatomic) NSString *afRecommendedPortType;
@property (copy, nonatomic) NSString *clientApplicationID;
@property (nonatomic) int deviceType;
@property (nonatomic) float gravityZ;
@property (nonatomic) struct { int width; int height; } videoDimensions;
@property (nonatomic) unsigned int timeSinceLastAutoSwitch;
@property (nonatomic) unsigned int switchDelay;
@property (nonatomic) unsigned long long switchDelayReasons;
@property (nonatomic) float tofMeasuredDepth;
@property (nonatomic) unsigned int tofROIType;
@property (nonatomic) unsigned int fallbackCameras;
@property (retain, nonatomic) NSDictionary *apsSubjectDistance;
@property (retain, nonatomic) NSDictionary *logicalFocusLensPosition;
@property (retain, nonatomic) NSDictionary *focusingMethod;
@property (retain, nonatomic) NSDictionary *luxLevel;
@property (retain, nonatomic) NSDictionary *frameRate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (void)dealloc;
- (id)init;
- (id)eventName;
- (id)eventDictionary;

@end
