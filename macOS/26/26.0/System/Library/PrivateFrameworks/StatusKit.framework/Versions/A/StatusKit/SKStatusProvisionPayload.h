@class SKStatusPayload, NSString, NSData, NSDate;

@interface SKStatusProvisionPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *encryptedStatusPayload;
@property (retain, nonatomic) NSData *decryptionKey;
@property (retain, nonatomic) NSData *initializationVector;
@property (retain, nonatomic) NSData *commitmentSalt;
@property (readonly, nonatomic) SKStatusPayload *statusPayload;
@property (readonly, nonatomic) NSDate *validFrom;
@property (readonly, nonatomic) NSDate *validUntil;

+ (id)logger;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithStatusPayload:(id)a0 validFrom:(id)a1 validUntil:(id)a2;

@end
