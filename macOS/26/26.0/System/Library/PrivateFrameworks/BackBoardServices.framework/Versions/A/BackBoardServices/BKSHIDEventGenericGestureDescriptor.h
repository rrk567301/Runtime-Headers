@interface BKSHIDEventGenericGestureDescriptor : BKSHIDEventDescriptor {
    BOOL _isWildcard;
}

@property (readonly, nonatomic) unsigned int genericGestureType;

+ (BOOL)supportsSecureCoding;
+ (id)descriptorForAnyGenericGestureType;
+ (id)descriptorWithGenericGestureType:(unsigned int)a0;

- (void)appendDescriptionToStream:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)requiresFuzzyMatching;
- (id)init;
- (BOOL)describes:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithGenericGestureType:(unsigned int)a0;

@end
