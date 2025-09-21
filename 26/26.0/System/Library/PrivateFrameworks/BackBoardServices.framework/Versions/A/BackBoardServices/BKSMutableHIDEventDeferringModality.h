@class NSString;

@interface BKSMutableHIDEventDeferringModality : BKSHIDEventDeferringModality

@property (copy, nonatomic) NSString *identifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setIdentifier:(id)a0;

@end
