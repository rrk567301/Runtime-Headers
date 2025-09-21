@interface HMAnnounceUserSettings : HMFObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long deviceNotificationMode;

+ (id)shortDescription;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (id)privateDescription;
- (id)attributeDescriptions;
- (id)initWithDeviceNotificationMode:(unsigned long long)a0;

@end
