@class NSMapTable;

@interface _HKFactorization : NSObject <NSCopying, NSSecureCoding> {
    NSMapTable *_factors;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)factorizationWithFactorsAndExponents:(id)a0;
+ (id)factorizationWithFactor:(id)a0 exponent:(long long)a1;
+ (id)factorizationFromString:(id)a0 factorGrammar:(id)a1;
+ (id)factorization;

- (id)factorizationByMultiplying:(id)a0;
- (unsigned long long)factorCount;
- (id)factorizationByDividing:(id)a0;
- (id)unitString;
- (id)description;
- (long long)_exponentForFactor:(id)a0;
- (id)init;
- (void)_multiplyByFactorization:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)factorizationByRaisingToExponent:(long long)a0;
- (id)anyFactor;
- (void)enumerateFactorsWithHandler:(id /* block */)a0;
- (void)_raiseToExponent:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_enumerateFactorsWithHandler:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (long long)exponentForFactor:(id)a0;
- (unsigned long long)hash;
- (id)reciprocal;
- (void)encodeWithCoder:(id)a0;
- (void)_multiplyByFactor:(id)a0 exponent:(long long)a1;

@end
