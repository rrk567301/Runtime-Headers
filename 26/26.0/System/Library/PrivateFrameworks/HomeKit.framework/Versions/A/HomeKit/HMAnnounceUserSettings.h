@interface HMAnnounceUserSettings : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long deviceNotificationMode;

+ (id)shortDescription;

- (id)privateDescription;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithDeviceNotificationMode:(unsigned long long)a0;

@end
