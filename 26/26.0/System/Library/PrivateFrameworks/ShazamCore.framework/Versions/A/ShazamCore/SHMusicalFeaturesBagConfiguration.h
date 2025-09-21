@class NSDictionary, AMSPromise;

@interface SHMusicalFeaturesBagConfiguration : NSObject

@property (readonly) NSDictionary *configuration;
@property (readonly) AMSPromise *amsPromise;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)availableModelsForClientIdentifier:(id)a0;
- (id)initWithPromise:(id)a0;
- (double)minimumDurationInSecondsForClientIdentifier:(id)a0;

@end
