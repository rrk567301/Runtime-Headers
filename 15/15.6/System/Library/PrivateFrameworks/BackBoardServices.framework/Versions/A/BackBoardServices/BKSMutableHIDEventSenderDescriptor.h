@class BKSHIDEventDisplay;

@interface BKSMutableHIDEventSenderDescriptor : BKSHIDEventSenderDescriptor

@property (nonatomic) long long hardwareType;
@property (copy, nonatomic) BKSHIDEventDisplay *associatedDisplay;
@property (nonatomic, getter=isAuthenticated) char authenticated;
@property (nonatomic) unsigned long long senderID;

+ (id)new;

- (id)init;
- (void)setAuthenticated:(char)a0;
- (void)setSenderID:(unsigned long long)a0;
- (void)setHardwareType:(long long)a0;
- (void)setAssociatedDisplay:(id)a0;
- (void)setPrimaryPage:(unsigned int)a0 primaryUsage:(unsigned int)a1;

@end
