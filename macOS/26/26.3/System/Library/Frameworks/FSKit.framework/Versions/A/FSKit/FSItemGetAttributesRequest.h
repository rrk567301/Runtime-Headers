@interface FSItemGetAttributesRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long wantedAttributes;

- (id)init;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithWantedLIAttributes:(unsigned long long)a0;
- (BOOL)isAttributeWanted:(long long)a0;

@end
