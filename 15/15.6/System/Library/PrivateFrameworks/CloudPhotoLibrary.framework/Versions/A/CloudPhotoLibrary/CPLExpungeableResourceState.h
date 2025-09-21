@class NSDate;

@interface CPLExpungeableResourceState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long resourceType;
@property (nonatomic) unsigned long long expungedState;
@property (copy, nonatomic) NSDate *expungedDate;

+ (id)normalizedExpungeableResourceStatesFromExpungeableResourceStates:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
