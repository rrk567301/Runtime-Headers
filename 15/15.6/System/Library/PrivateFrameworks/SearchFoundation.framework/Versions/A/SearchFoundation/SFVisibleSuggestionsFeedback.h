@class NSArray;

@interface SFVisibleSuggestionsFeedback : SFFeedback

@property (copy, nonatomic) NSArray *suggestions;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSuggestions:(id)a0;

@end
