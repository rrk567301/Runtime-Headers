@interface BKSHIDEventGenericGestureDescriptor : BKSHIDEventDescriptor {
    char _isWildcard;
}

@property (readonly, nonatomic) unsigned int genericGestureType;

+ (char)supportsSecureCoding;
+ (id)descriptorForAnyGenericGestureType;
+ (id)descriptorWithGenericGestureType:(unsigned int)a0;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToStream:(id)a0;
- (char)describes:(id)a0;
- (id)initWithGenericGestureType:(unsigned int)a0;
- (char)requiresFuzzyMatching;

@end
