@interface BKSHIDEventProximityAttributes : BKSHIDEventBaseAttributes

@property (nonatomic) int proximityDetectionMode;

+ (unsigned char)_eventAttributeType;
+ (id)protobufSchema;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
