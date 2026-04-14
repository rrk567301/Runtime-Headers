@interface ContextualSuggestionClient.ContextualIntentSuggestion : ContextualSuggestionClient.ContextualSuggestion {
    void /* unknown type, empty encoding */ intent;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
