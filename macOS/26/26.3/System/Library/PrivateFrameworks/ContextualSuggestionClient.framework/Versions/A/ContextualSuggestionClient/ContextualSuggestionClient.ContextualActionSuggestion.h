@interface ContextualSuggestionClient.ContextualActionSuggestion : ContextualSuggestionClient.ContextualSuggestion {
    void /* unknown type, empty encoding */ action;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
