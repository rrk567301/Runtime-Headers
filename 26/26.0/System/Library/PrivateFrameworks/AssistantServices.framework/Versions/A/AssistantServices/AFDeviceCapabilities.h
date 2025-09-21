@class NSDictionary;

@interface AFDeviceCapabilities : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_serializedBackingStore;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long voiceTriggerEnabled;

- (id)initWithSerializedBackingStore:(id)a0;
- (id)serializedBackingStore;
- (id)initWithVoiceTriggerEnabled:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
