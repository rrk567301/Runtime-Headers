@interface BKSHIDEventBiometricDescriptor : BKSHIDEventDescriptor {
    char _isWildcard;
}

@property (readonly, nonatomic) unsigned int biometricEventType;

+ (char)supportsSecureCoding;
+ (id)descriptorWithBiometricEventType:(unsigned int)a0;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToStream:(id)a0;
- (char)describes:(id)a0;
- (id)initWithBiometricEventType:(unsigned int)a0;
- (char)requiresFuzzyMatching;

@end
