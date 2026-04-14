@class NSMapTable;

@interface _HKFactorization : NSObject <NSCopying, NSSecureCoding> {
    NSMapTable *_factors;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)factorizationWithFactorsAndExponents:(id)a0;
+ (id)factorization;
+ (id)factorizationFromString:(id)a0 factorGrammar:(id)a1;
+ (id)factorizationWithFactor:(id)a0 exponent:(long long)a1;

- (long long)_exponentForFactor:(id)a0;
- (void)_multiplyByFactorization:(id)a0;
- (id)unitString;
- (unsigned long long)hash;
- (id)reciprocal;
- (id)anyFactor;
- (void)_raiseToExponent:(long long)a0;
- (unsigned long long)factorCount;
- (long long)exponentForFactor:(id)a0;
- (id)factorizationByRaisingToExponent:(long long)a0;
- (void)enumerateFactorsWithHandler:(id /* block */)a0;
- (id)factorizationByMultiplying:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)factorizationByDividing:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)_multiplyByFactor:(id)a0 exponent:(long long)a1;
- (void)_enumerateFactorsWithHandler:(id /* block */)a0;
- (id)init;

@end
