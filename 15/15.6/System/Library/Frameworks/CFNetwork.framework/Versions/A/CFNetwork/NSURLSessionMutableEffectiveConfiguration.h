@interface NSURLSessionMutableEffectiveConfiguration : NSURLSessionConfiguration <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithConfiguration:(id)a0;

@end
