@class NSDictionary;

@interface AFDeviceCapabilities : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_serializedBackingStore;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long voiceTriggerEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSerializedBackingStore:(id)a0;
- (id)initWithVoiceTriggerEnabled:(long long)a0;
- (id)serializedBackingStore;

@end
