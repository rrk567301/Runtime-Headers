@interface PKExperiment : NSObject

@property (readonly, nonatomic) BOOL isExposed;

- (id)description;
- (id)init;
- (void)refresh;
- (id)namespaceName;
- (id)experimentDetails;
- (void)trackExperimentExposure;
- (id)filePathForFactor:(id)a0;
- (id)stringForFactor:(id)a0;
- (BOOL)booleanForFactor:(id)a0;
- (id)metadataForFactor:(id)a0;
- (BOOL)isTaggedForFactor:(id)a0;

@end
