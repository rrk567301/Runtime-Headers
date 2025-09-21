@class NSString;

@interface TRIExperimentIdentifiers : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString *treatmentId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithExperimentId:(id)a0 deploymentId:(int)a1 treatmentId:(id)a2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToExperimentIdentifiers:(id)a0;
- (id)asFactorsState;

@end
