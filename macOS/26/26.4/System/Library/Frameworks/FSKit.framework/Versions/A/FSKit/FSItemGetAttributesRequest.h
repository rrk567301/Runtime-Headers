@interface FSItemGetAttributesRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long wantedAttributes;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)initWithWantedFSAttributes:(unsigned long long)a0;
- (BOOL)isAttributeWanted:(long long)a0;

@end
