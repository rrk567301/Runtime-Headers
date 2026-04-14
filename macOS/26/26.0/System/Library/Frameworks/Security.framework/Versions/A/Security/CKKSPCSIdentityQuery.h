@class NSNumber, NSString;

@interface CKKSPCSIdentityQuery : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSNumber *serviceNumber;
@property (retain) NSString *accessGroup;
@property (retain) NSString *publicKey;
@property (retain) NSString *zoneID;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceNumber:(id)a0 accessGroup:(id)a1 publicKey:(id)a2 zoneID:(id)a3;

@end
