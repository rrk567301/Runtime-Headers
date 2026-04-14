@class NSDictionary, TRIExperimentRecord;

@interface TRIExperimentCovariates : NSObject <TRIExperimentCovariateProviding> {
    TRIExperimentRecord *_experimentRecord;
    NSDictionary *_dictionary;
}

- (id)dictionary;
- (void).cxx_destruct;
- (id)tri_contextValueWithName:(id)a0;
- (unsigned long long)_isExperimentActivated:(id)a0;
- (id)initWithExperimentRecord:(id)a0;

@end
