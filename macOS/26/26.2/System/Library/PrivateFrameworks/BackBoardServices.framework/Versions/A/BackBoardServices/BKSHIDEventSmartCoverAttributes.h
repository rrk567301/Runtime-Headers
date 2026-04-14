@interface BKSHIDEventSmartCoverAttributes : BKSHIDEventBaseAttributes

@property (nonatomic) int smartCoverState;
@property (nonatomic) int wakeAnimationStyle;

+ (id)protobufSchema;
+ (unsigned char)_eventAttributeType;

- (void)appendDescriptionToFormatter:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
