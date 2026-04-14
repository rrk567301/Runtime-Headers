@interface BKSHIDEventGenericGestureDescriptor : BKSHIDEventDescriptor {
    BOOL _isWildcard;
}

@property (readonly, nonatomic) unsigned int genericGestureType;

+ (BOOL)supportsSecureCoding;
+ (id)descriptorForAnyGenericGestureType;
+ (id)descriptorWithGenericGestureType:(unsigned int)a0;

- (unsigned long long)hash;
- (void)appendDescriptionToStream:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)requiresFuzzyMatching;
- (BOOL)describes:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithGenericGestureType:(unsigned int)a0;

@end
