@interface ATXContextualSuggestionSnapshot : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ contexts;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
