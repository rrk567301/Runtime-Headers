@interface BKSHIDEventRedirectAttributes : BKSHIDEventBaseAttributes

@property (nonatomic) int pid;

+ (unsigned char)_eventAttributeType;
+ (id)protobufSchema;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)appendDescriptionToFormatter:(id)a0;

@end
