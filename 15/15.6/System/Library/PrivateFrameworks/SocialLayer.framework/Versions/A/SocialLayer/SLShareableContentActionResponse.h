@interface SLShareableContentActionResponse : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

+ (id)response;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
