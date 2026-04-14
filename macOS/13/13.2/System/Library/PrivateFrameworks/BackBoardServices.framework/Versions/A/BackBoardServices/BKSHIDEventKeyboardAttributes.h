@interface BKSHIDEventKeyboardAttributes : BKSHIDEventBaseAttributes

@property (nonatomic) unsigned int GSModifierState;

+ (id)protobufSchema;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)appendDescriptionToFormatter:(id)a0;

@end
