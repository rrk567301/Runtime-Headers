@class NSMutableDictionary;

@interface ATXAnchorModelFeedbackMetadata : NSObject <NSSecureCoding> {
    NSMutableDictionary *_suggestionUUIDToAnchorPredictionMapping;
}

@property (class, readonly) char supportsSecureCoding;

+ (id)anchorFeedbackMetadataFromArchivedData:(id)a0;
+ (id)archivedDataForAnchorFeedbackMetadata:(id)a0;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAnchorSuggestionTuples:(id)a0;
- (id)anchorModelPredictionForProactiveSuggestion:(id)a0;
- (id)initWithSuggestionUUIDToAnchorPredictionMapping:(id)a0;
- (char)isEqualToATXAnchorModelFeedbackMetadata:(id)a0;
- (unsigned long long)numberOfAnchorModelPredictions;

@end
