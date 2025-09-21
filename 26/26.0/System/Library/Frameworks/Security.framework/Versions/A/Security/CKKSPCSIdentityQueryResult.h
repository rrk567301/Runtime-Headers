@class NSNumber, NSString, NSDictionary;

@interface CKKSPCSIdentityQueryResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSNumber *serviceNumber;
@property (retain) NSString *publicKey;
@property (retain) NSString *zoneID;
@property (retain) NSDictionary *decryptedRecord;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceNumber:(id)a0 publicKey:(id)a1 zoneID:(id)a2 decryptedRecord:(id)a3;

@end
