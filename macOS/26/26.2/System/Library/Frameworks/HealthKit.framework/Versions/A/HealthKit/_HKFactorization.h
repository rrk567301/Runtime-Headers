@class NSMapTable;

@interface _HKFactorization : NSObject <NSCopying, NSSecureCoding> {
    NSMapTable *_factors;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)factorizationWithFactorsAndExponents:(id)a0;
+ (id)factorizationWithFactor:(id)a0 exponent:(long long)a1;
+ (id)factorization;
+ (id)factorizationFromString:(id)a0 factorGrammar:(id)a1;

- (void)_multiplyByFactorization:(id)a0;
- (id)reciprocal;
- (long long)_exponentForFactor:(id)a0;
- (id)unitString;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)anyFactor;
- (void).cxx_destruct;
- (id)factorizationByRaisingToExponent:(long long)a0;
- (long long)exponentForFactor:(id)a0;
- (id)description;
- (void)enumerateFactorsWithHandler:(id /* block */)a0;
- (unsigned long long)factorCount;
- (id)factorizationByMultiplying:(id)a0;
- (void)_raiseToExponent:(long long)a0;
- (id)init;
- (id)factorizationByDividing:(id)a0;
- (void)_enumerateFactorsWithHandler:(id /* block */)a0;
- (void)_multiplyByFactor:(id)a0 exponent:(long long)a1;

@end
