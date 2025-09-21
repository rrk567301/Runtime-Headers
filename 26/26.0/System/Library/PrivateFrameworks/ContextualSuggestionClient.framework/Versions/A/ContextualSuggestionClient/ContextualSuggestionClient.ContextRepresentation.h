@interface ContextualSuggestionClient.ContextRepresentation : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ localizedDisplayName;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
