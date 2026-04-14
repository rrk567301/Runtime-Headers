@class NSString, NSData;

@interface DAIncomingMessage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *messageID;
@property (retain, nonatomic) NSData *encryptedPayloadData;
@property (copy, nonatomic) NSString *sourceDeviceID;
@property (copy, nonatomic) NSString *featureID;
@property (nonatomic) long long payloadVersion;
@property (nonatomic) double receivedAt;
@property (nonatomic) double expiresAt;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithMessageID:(id)a0 encryptedPayloadData:(id)a1;

@end
