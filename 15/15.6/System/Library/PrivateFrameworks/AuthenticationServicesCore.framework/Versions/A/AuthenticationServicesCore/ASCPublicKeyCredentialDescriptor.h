@class NSSet, NSData, NSArray;

@interface ASCPublicKeyCredentialDescriptor : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) NSSet *cableTransports;
@property (class, readonly, nonatomic) NSData *magicCredentialID;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSData *credentialID;
@property (readonly, nonatomic) NSArray *transports;
@property (readonly, nonatomic) char hasInternalTransport;
@property (readonly, nonatomic) char hasCABLETransport;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCredentialID:(id)a0 transports:(id)a1;

@end
