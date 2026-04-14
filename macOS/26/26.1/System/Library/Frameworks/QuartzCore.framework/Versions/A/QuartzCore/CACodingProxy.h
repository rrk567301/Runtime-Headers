@interface CACodingProxy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)decodedObject;
- (id)initWithObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
