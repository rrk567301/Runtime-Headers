@class NSOrderedSet, NSDictionary;

@interface COBallot : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSOrderedSet *candidates;
@property (copy, nonatomic) NSDictionary *discovery;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCandidate:(id)a0;
- (id)initWithBallot:(id)a0;
- (BOOL)isEqualToBallot:(id)a0;

@end
