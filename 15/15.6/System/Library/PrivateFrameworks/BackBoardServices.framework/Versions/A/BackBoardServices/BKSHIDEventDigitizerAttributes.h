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
@property (nonatomic) char systemGesturesPossible;
@property (nonatomic) char systemGestureStateChange;
@property (nonatomic) long long sceneTouchBehavior;

+ (id)protobufSchema;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)a0;
- (double)digitizerSurfaceHeight;
- (double)digitizerSurfaceWidth;
- (void)setDigitizerSurfaceHeight:(double)a0;
- (void)setDigitizerSurfaceWidth:(double)a0;

@end
