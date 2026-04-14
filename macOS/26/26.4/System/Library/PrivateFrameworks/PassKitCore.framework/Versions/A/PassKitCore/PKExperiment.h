@class TRIClient;

@interface PKExperiment : NSObject {
    TRIClient *_trialClient;
}

@property (readonly, nonatomic) BOOL isExposed;

- (id)namespaceName;
- (id)initWithClient:(id)a0;
- (void)refresh;
- (void).cxx_destruct;
- (id)init;
- (id)description;
- (id)levelForFactor:(id)a0;
- (BOOL)booleanForFactor:(id)a0;
- (id)experimentDetails;
- (id)filePathForFactor:(id)a0;
- (BOOL)isTaggedForFactor:(id)a0;
- (id)metadataForFactor:(id)a0;
- (id)stringForFactor:(id)a0;
- (void)trackExperimentExposure;

@end
