@interface AXEMouseEvent : NSObject <NSCopying>

@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (nonatomic) long long clickState;
@property (nonatomic) unsigned int eventType;
@property (nonatomic) struct CGPoint { double x; double y; } delta;
@property (nonatomic) struct CGPoint { double x; double y; } scrollWheelDelta;
@property (nonatomic) char isScrollWheelEventContinuous;
@property (nonatomic) unsigned int scrollMomentumPhase;
@property (nonatomic) char isMoveEvent;
@property (nonatomic) char isDragEvent;
@property (nonatomic) char isLeftButtonDown;
@property (nonatomic) char isRightButtonDown;
@property (nonatomic) char isOtherButtonDown;
@property (nonatomic) char isSynthesized;

+ (id)eventFromCGEvent:(struct __CGEvent { } *)a0;
+ (char)isMouseEvent:(struct __CGEvent { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
