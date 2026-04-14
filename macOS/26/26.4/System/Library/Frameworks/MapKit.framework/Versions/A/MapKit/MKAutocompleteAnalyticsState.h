@class NSString, NSArray, NSNumber;

@interface MKAutocompleteAnalyticsState : NSObject

@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, copy, nonatomic) NSArray *queryTokens;
@property (readonly, nonatomic) NSArray *suggestionEntries;
@property (readonly, nonatomic) int responseStatus;
@property (readonly, copy, nonatomic) NSString *modelVersion;
@property (readonly, copy, nonatomic) NSString *rolloutId;
@property (readonly, copy, nonatomic) NSString *rolloutDeploymentId;
@property (readonly, copy, nonatomic) NSString *rolloutFactorpackId;
@property (readonly, copy, nonatomic) NSString *rolloutRampId;
@property (readonly, copy, nonatomic) NSString *experimentId;
@property (readonly, copy, nonatomic) NSNumber *deploymentId;
@property (readonly, copy, nonatomic) NSString *treatmentId;
@property (readonly, copy, nonatomic) NSString *experimentDescription;

- (void).cxx_destruct;
- (id)initWithQuery:(id)a0 queryTokens:(id)a1 suggestionEntries:(id)a2 responseStatus:(int)a3 modelVersion:(id)a4 rolloutId:(id)a5 rolloutDeploymentId:(id)a6 rolloutFactorpackId:(id)a7 rolloutRampId:(id)a8 experimentId:(id)a9 deploymentId:(id)a10 treatmentId:(id)a11 experimentDescription:(id)a12;

@end
