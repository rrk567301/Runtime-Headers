@class NSString, NSArray;

@interface TRIExperimentAllocationStatus : TRIAllocationStatus

@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) NSArray *namespaces;

+ (char)supportsSecureCoding;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(unsigned char)a0 date:(id)a1 experimentId:(id)a2 deploymentId:(int)a3 treatmentId:(id)a4;
- (id)initWithType:(unsigned char)a0 date:(id)a1 experimentId:(id)a2 deploymentId:(int)a3 treatmentId:(id)a4 namespaces:(id)a5;
- (char)isEqualToStatus:(id)a0;

@end
