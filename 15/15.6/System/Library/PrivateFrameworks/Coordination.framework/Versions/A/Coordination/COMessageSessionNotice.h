@interface COMessageSessionNotice : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
