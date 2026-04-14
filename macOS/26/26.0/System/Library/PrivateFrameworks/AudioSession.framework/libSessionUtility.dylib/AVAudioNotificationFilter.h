@class NSSet;

@interface AVAudioNotificationFilter : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *propertyNotificationsOfInterest;
@property (readonly, nonatomic) BOOL wantsInterruptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)filterPropertyNotifications:(id)a0;
- (id)initWithPropertyNotificationsOfInterest:(id)a0 wantsInterruptions:(BOOL)a1;

@end
