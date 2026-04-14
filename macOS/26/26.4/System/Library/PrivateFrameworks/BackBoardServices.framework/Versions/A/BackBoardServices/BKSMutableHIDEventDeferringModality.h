@class NSString;

@interface BKSMutableHIDEventDeferringModality : BKSHIDEventDeferringModality

@property (copy, nonatomic) NSString *identifier;

- (void)setIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
