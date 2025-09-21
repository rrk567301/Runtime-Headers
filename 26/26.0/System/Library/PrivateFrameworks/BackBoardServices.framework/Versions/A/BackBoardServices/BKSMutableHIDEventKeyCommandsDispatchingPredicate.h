@class NSSet;

@interface BKSMutableHIDEventKeyCommandsDispatchingPredicate : BKSHIDEventKeyCommandsDispatchingPredicate

@property (copy, nonatomic) NSSet *senderDescriptors;
@property (copy, nonatomic) NSSet *displays;

+ (id)new;

- (void)setDisplays:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)setSenderDescriptors:(id)a0;

@end
