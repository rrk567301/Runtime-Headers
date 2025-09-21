@class BKSHIDEventDeferringToken;

@interface BKSMutableHIDEventDeferringTarget : BKSHIDEventDeferringTarget

@property (nonatomic) int pid;
@property (copy, nonatomic) BKSHIDEventDeferringToken *token;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)setPid:(int)a0;
- (void)setToken:(id)a0;

@end
