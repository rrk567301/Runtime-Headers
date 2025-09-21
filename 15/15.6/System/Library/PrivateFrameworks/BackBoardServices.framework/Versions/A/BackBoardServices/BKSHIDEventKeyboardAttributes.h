@interface BKSHIDEventKeyboardAttributes : BKSHIDEventBaseAttributes

@property (nonatomic) unsigned int GSModifierState;

+ (id)protobufSchema;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;

@end
