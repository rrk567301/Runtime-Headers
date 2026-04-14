@interface FSResource : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int kind;
@property (nonatomic, setter=revoke:) BOOL revoked;

+ (id)dynamicCast:(id)a0;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)getResourceID;

@end
