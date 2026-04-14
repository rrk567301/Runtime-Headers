@class NSString;

@interface GEOMIFExperimentMetadata : NSObject

@property (readonly, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) unsigned int deploymentId;
@property (readonly, nonatomic) NSString *treatmentId;
@property (readonly, nonatomic) NSString *experimentDescription;

- (void).cxx_destruct;
- (id)description;
- (id)initWithGEOPDMIFExperimentMetadata:(id)a0;

@end
