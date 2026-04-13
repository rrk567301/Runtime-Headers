@class NSString, NSDictionary;

@interface TRIRolloutAllocationStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *rolloutId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSDictionary *factorPackIds;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRolloutId:(id)a0 deploymentId:(int)a1 factorPackIds:(id)a2;

@end
