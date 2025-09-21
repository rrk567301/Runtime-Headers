@interface STCommunicationConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) char isCommunicationSafetySendingRestricted;
@property (readonly) char isCommunicationSafetyReceivingRestricted;
@property (readonly) char isCommunicationSafetyNotificationEnabled;
@property (readonly) char isCommunicationSafetyAnalyticsEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCommunicationSafetySendingRestricted:(char)a0 communicationSafetyReceivingRestricted:(char)a1 communicationSafetyNotificationEnabled:(char)a2 communicationSafetyAnalyticsEnabled:(char)a3;
- (char)isEqualToCommunicationConfiguration:(id)a0;

@end
