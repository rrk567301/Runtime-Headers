@interface MADMultiModalResult : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
