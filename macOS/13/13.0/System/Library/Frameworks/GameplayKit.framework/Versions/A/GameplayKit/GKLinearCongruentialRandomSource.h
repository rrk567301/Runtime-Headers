@interface GKLinearCongruentialRandomSource : GKRandomSource {
    unsigned long long _seed;
}

@property (nonatomic) unsigned long long seed;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSeed:(unsigned long long)a0;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)a0;
- (unsigned long long)nextBits:(int)a0;
- (long long)nextInt;
- (float)nextUniform;
- (BOOL)nextBool;

@end
