@class NSArray, BKSWindowServerHitTestSecurityAnalysis;

@interface BKSHIDEventPointerAttributes : BKSHIDEventDigitizerAttributes

@property (nonatomic) long long contextMove;
@property (nonatomic) long long contextType;
@property (nonatomic) unsigned short pointerState;
@property (copy, nonatomic) NSArray *hitTestContexts;
@property (nonatomic) struct CGPoint { double x; double y; } unacceleratedRelativePosition;
@property (nonatomic) struct CGPoint { double x; double y; } acceleratedRelativePosition;
@property (nonatomic) double unacceleratedRelativePositionX;
@property (nonatomic) double unacceleratedRelativePositionY;
@property (nonatomic) double acceleratedRelativePositionX;
@property (nonatomic) double acceleratedRelativePositionY;
@property (nonatomic) long long fingerDownCount;
@property (nonatomic) unsigned char pointerEdgeMask;
@property (nonatomic) unsigned short teleportState;
@property (retain, nonatomic) BKSWindowServerHitTestSecurityAnalysis *hitTestSecurityAnalysis;

+ (id)protobufSchema;
+ (unsigned char)_eventAttributeType;

- (unsigned short)pointerState;
- (double)acceleratedRelativePositionX;
- (void)appendDescriptionToFormatter:(id)a0;
- (double)unacceleratedRelativePositionX;
- (void)setAcceleratedRelativePositionY:(double)a0;
- (double)acceleratedRelativePositionY;
- (double)unacceleratedRelativePositionY;
- (void)setUnacceleratedRelativePositionX:(double)a0;
- (void)setAcceleratedRelativePositionX:(double)a0;
- (void)setPointerState:(unsigned short)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)setUnacceleratedRelativePositionY:(double)a0;

@end
