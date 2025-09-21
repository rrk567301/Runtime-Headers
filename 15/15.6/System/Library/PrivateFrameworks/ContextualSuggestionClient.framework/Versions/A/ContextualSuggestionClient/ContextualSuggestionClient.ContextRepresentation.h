@interface ContextualSuggestionClient.ContextRepresentation : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ localizedDisplayName;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
