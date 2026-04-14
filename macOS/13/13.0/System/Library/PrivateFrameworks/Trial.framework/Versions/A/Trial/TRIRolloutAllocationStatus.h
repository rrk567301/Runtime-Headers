@class NSString, NSDictionary;

@interface TRIRolloutAllocationStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *rolloutId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString *rampId;
@property (readonly, nonatomic) NSDictionary *factorPackIds;

- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRolloutId:(id)a0 deploymentId:(int)a1 rampId:(id)a2 factorPackIds:(id)a3;

@end
