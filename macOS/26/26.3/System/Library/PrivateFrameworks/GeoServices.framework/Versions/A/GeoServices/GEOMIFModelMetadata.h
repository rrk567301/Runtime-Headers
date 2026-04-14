@class NSString;

@interface GEOMIFModelMetadata : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *modelVersion;
@property (readonly, nonatomic) NSString *rolloutId;
@property (readonly, nonatomic) NSString *rolloutDeploymentId;
@property (readonly, nonatomic) NSString *rolloutFactorpackId;
@property (readonly, nonatomic) NSString *rolloutRampId;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGEOPDMIFModelMetadata:(id)a0;

@end
