@class NSString;

@interface BWStartupCalibrationAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (retain, nonatomic) NSString *portType;
@property (nonatomic) float accelStandardDeviation;
@property (nonatomic) float gyroStandardDeviation;
@property (nonatomic) float sessionOffset;
@property (nonatomic) float deltaOffset;
@property (nonatomic) int apsVoltage;
@property (nonatomic) float maxAcceleration;
@property (nonatomic) float deltaAcceleration;
@property (nonatomic) char headroomErrorOccurred;
@property (nonatomic) char convergeErrorOccurred;
@property (nonatomic) char motionErrorOccurred;
@property (nonatomic) char confidenceErrorOccurred;
@property (nonatomic) char largeOffsetErrorOccurred;
@property (nonatomic) char saturationErrorOccurred;
@property (nonatomic) char success;
@property (nonatomic) char gcolEntry;
@property (nonatomic) char closedLoopEntry;
@property (nonatomic) float gravityX;
@property (nonatomic) float gravityY;
@property (nonatomic) float gravityZ;
@property (nonatomic) float completionTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)reset;
- (id)eventName;
- (id)eventDictionary;

@end
