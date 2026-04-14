@class NSArray, NSString;

@interface LNSystemEntityProtocol : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) NSArray *allProtocols;
@property (class, readonly, nonatomic) LNSystemEntityProtocol *mailAccountProtocol;
@property (class, readonly, nonatomic) LNSystemEntityProtocol *mailAddresseeProtocol;
@property (class, readonly, nonatomic) LNSystemEntityProtocol *mailMessageProtocol;
@property (class, readonly, nonatomic) LNSystemEntityProtocol *mailboxProtocol;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;

+ (id)allProtocolsByIdentifier;
+ (id)protocolWithIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;

@end
