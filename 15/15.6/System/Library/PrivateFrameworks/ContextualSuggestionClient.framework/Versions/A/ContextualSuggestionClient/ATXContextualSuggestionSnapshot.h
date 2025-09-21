@interface ATXContextualSuggestionSnapshot : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ contexts;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
