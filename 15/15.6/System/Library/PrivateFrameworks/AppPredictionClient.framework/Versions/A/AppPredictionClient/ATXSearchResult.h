@class ATXScoredPrediction, ATXProactiveSuggestion, ATXResponse;

@interface ATXSearchResult : SFSearchResult <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) ATXScoredPrediction *scoredBundleId;
@property (readonly, nonatomic) ATXResponse *response;
@property (readonly, nonatomic) ATXProactiveSuggestion *proactiveSuggestion;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithScoredBundleId:(id)a0 response:(id)a1 proactiveSuggestion:(id)a2;

@end
