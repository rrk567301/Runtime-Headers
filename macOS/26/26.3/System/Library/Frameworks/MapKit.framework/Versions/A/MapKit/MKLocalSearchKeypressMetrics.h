@class NSString, NSArray, NSNumber;

@interface MKLocalSearchKeypressMetrics : NSObject {
    int _responseStatus;
    NSString *_modelVersion;
    NSString *_rolloutId;
    NSString *_rolloutDeploymentId;
    NSString *_rolloutFactorpackId;
    NSString *_rolloutRampId;
    NSString *_experimentId;
    NSNumber *_deploymentId;
    NSString *_treatmentId;
    NSString *_experimentDescription;
}

@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, copy, nonatomic) NSArray *queryTokens;
@property (readonly, nonatomic) NSArray *suggestionEntries;

- (void).cxx_destruct;
- (id)initWithQuery:(id)a0 queryTokens:(id)a1 suggestionEntries:(id)a2 responseStatus:(int)a3 modelVersion:(id)a4 rolloutId:(id)a5 rolloutDeploymentId:(id)a6 rolloutFactorpackId:(id)a7 rolloutRampId:(id)a8 experimentId:(id)a9 deploymentId:(id)a10 treatmentId:(id)a11 experimentDescription:(id)a12;
- (void)submitWithStatus:(unsigned long long)a0;

@end
