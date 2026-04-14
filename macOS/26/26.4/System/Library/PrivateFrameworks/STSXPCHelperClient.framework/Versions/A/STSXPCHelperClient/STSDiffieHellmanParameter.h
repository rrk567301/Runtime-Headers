@class NSData;

@interface STSDiffieHellmanParameter : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long publicKeyGroup;
@property (retain, nonatomic) NSData *publicKey;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)asData;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithKeyGroup:(unsigned long long)a0 key:(id)a1;

@end
