@class TRIClient;

@interface PKExperiment : NSObject {
    TRIClient *_trialClient;
}

@property (readonly, nonatomic) BOOL isExposed;

- (void)refresh;
- (id)namespaceName;
- (void).cxx_destruct;
- (id)description;
- (id)levelForFactor:(id)a0;
- (id)init;
- (id)initWithClient:(id)a0;
- (BOOL)booleanForFactor:(id)a0;
- (id)experimentDetails;
- (id)filePathForFactor:(id)a0;
- (BOOL)isTaggedForFactor:(id)a0;
- (id)metadataForFactor:(id)a0;
- (id)stringForFactor:(id)a0;
- (void)trackExperimentExposure;

@end
