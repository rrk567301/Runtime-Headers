@class NSString;

@interface TRIFactorsStateExperimentIdentifiers : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString *treatmentId;

- (id)description;
- (id)initWithExperimentId:(id)a0 deploymentId:(int)a1 treatmentId:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithExperimentId:(id)a0 deploymentId:(int)a1;
- (BOOL)isEqualToIdentifiers:(id)a0;

@end
