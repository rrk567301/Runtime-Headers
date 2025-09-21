@interface GKLinearCongruentialRandomSource : GKRandomSource {
    unsigned long long _seed;
}

@property (nonatomic) unsigned long long seed;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSeed:(unsigned long long)a0;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)a0;
- (long long)nextInt;
- (unsigned long long)nextBits:(int)a0;
- (char)nextBool;
- (float)nextUniform;

@end
