@interface AVCAuditToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { unsigned int val[8]; } token;

+ (id)currentProcessToken;
+ (id)deserializeAuditTokens:(id)a0;
+ (id)processIdentifiersFromAuditTokens:(id)a0;
+ (id)serializeAuditTokens:(id)a0;

- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
