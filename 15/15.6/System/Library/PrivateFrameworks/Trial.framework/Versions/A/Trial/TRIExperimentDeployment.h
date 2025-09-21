@class NSString;

@interface TRIExperimentDeployment : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) int deploymentId;

+ (id)deploymentWithExperimentId:(id)a0 deploymentId:(int)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithReplacementDeploymentId:(int)a0;
- (id)copyWithReplacementExperimentId:(id)a0;
- (id)initWithExperimentId:(id)a0 deploymentId:(int)a1;
- (char)isEqualToDeployment:(id)a0;

@end
