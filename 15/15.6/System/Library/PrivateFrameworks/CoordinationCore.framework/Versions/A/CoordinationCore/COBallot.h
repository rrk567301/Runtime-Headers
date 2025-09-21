@class NSOrderedSet, NSDictionary;

@interface COBallot : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSOrderedSet *candidates;
@property (copy, nonatomic) NSDictionary *discovery;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCandidate:(id)a0;
- (id)initWithBallot:(id)a0;
- (char)isEqualToBallot:(id)a0;

@end
