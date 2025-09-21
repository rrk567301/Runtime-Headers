@interface BKSHIDEventSmartCoverAttributes : BKSHIDEventBaseAttributes

@property (nonatomic) int smartCoverState;
@property (nonatomic) int wakeAnimationStyle;

+ (unsigned char)_eventAttributeType;
+ (id)protobufSchema;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
