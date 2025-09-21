@class NSString;

@interface PKPassCredentialShare : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *channelTransportIdentifier;
@property (nonatomic) long long targetDevice;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSString *senderKeyIdentifier;
@property (readonly, nonatomic, getter=isForWatch) BOOL forWatch;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithInvitationData:(id)a0;
- (id)initWithSubcredentialDictionary:(id)a0;
- (void)updateWithInvitationData:(id)a0;

@end
