@interface BKSHIDEventSmartCoverAttributes : BKSHIDEventBaseAttributes

@property (nonatomic) int smartCoverState;
@property (nonatomic) int wakeAnimationStyle;

+ (unsigned char)_eventAttributeType;
+ (id)protobufSchema;

- (void)appendDescriptionToFormatter:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
