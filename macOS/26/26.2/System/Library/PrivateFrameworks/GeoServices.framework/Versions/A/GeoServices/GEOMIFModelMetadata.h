@class NSString;

@interface GEOMIFModelMetadata : NSObject

@property (readonly, nonatomic) NSString *modelVersion;
@property (readonly, nonatomic) NSString *rolloutId;
@property (readonly, nonatomic) NSString *rolloutDeploymentId;
@property (readonly, nonatomic) NSString *rolloutFactorpackId;
@property (readonly, nonatomic) NSString *rolloutRampId;

- (void).cxx_destruct;
- (id)description;
- (id)initWithGEOPDMIFModelMetadata:(id)a0;

@end
