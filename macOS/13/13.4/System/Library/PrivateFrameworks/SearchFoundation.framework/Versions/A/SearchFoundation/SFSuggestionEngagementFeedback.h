@class SFSearchSuggestion;

@interface SFSuggestionEngagementFeedback : SFFeedback

@property (retain, nonatomic) SFSearchSuggestion *suggestion;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSuggestion:(id)a0;

@end
