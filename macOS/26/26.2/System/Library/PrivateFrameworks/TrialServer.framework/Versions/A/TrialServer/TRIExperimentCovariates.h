@class NSDictionary, TRIExperimentRecord;

@interface TRIExperimentCovariates : NSObject <TRIExperimentCovariateProviding> {
    TRIExperimentRecord *_experimentRecord;
    NSDictionary *_dictionary;
}

- (id)dictionary;
- (id)tri_contextValueWithName:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)_isExperimentActivated:(id)a0;
- (id)initWithExperimentRecord:(id)a0;

@end
