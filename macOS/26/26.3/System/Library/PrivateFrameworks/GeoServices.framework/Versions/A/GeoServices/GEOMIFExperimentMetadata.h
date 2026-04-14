@class NSString;

@interface GEOMIFExperimentMetadata : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) unsigned int deploymentId;
@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) NSString *experimentDescription;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGEOPDMIFExperimentMetadata:(id)a0;

@end
