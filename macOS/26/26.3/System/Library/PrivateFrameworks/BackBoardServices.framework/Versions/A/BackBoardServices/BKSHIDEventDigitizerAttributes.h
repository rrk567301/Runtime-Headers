@class NSArray;

@interface BKSHIDEventDigitizerAttributes : BKSHIDEventBaseAttributes

@property (nonatomic) float maximumForce;
@property (nonatomic) double maximumPositionZ;
@property (nonatomic) struct CGSize { double width; double height; } digitizerSurfaceSize;
@property (nonatomic) double digitizerSurfaceWidth;
@property (nonatomic) double digitizerSurfaceHeight;
@property (retain, nonatomic) NSArray *pathAttributes;
@property (nonatomic) double initialTouchTimestamp;
@property (nonatomic) long long activeModifiers;
@property (nonatomic) unsigned char touchStreamIdentifier;
@property (nonatomic) BOOL systemGesturesPossible;
@property (nonatomic) BOOL systemGestureStateChange;
@property (nonatomic) long long sceneTouchBehavior;

+ (unsigned char)_eventAttributeType;
+ (id)protobufSchema;

- (void)appendDescriptionToFormatter:(id)a0;
- (void)setDigitizerSurfaceWidth:(double)a0;
- (double)digitizerSurfaceHeight;
- (void)setDigitizerSurfaceHeight:(double)a0;
- (void).cxx_destruct;
- (double)digitizerSurfaceWidth;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
