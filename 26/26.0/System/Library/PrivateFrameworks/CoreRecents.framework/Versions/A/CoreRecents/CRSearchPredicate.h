@class NSSet;

@interface CRSearchPredicate : NSObject <NSSecureCoding>

@property (class, readonly) NSSet *secureCodableSubclasses;
@property (class, readonly) BOOL supportsSecureCoding;

+ (id)predicateForKey:(id)a0 inCollection:(id)a1;
+ (id)predicateForKey:(id)a0 matchingText:(id)a1 comparison:(unsigned long long)a2;
+ (id)predicateSatisfyingAllSubpredicates:(id)a0;
+ (id)predicateSatisfyingAnySubpredicate:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)asNSPredicate;

@end
