@interface CESRPriorInfo : NSObject {
    unsigned int _ordinality;
    float _score;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (float)score;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)initWithOrdinality:(unsigned int)a0 score:(float)a1;
- (unsigned int)ordinality;
- (BOOL)isEqualToPriorInfo:(id)a0;

@end
