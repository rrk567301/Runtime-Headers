@class NSData, IDSURI;

@interface IDSPayloadVerificationContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *signedPayload;
@property (readonly, nonatomic) NSData *payloadData;
@property (readonly, nonatomic) IDSURI *remoteURI;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSignedPayload:(id)a0 payloadData:(id)a1 remoteURI:(id)a2;

@end
