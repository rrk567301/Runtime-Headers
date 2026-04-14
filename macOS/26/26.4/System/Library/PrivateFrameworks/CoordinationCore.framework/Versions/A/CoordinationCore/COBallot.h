@class NSOrderedSet, NSDictionary;

@interface COBallot : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSOrderedSet *candidates;
@property (copy, nonatomic) NSDictionary *discovery;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithCandidate:(id)a0;
- (id)initWithBallot:(id)a0;
- (BOOL)isEqualToBallot:(id)a0;

@end
