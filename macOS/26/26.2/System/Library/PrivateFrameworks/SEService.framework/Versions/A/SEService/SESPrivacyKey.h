@class NSData, NSString, NSDate;

@interface SESPrivacyKey : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *publicKey;
@property (readonly, nonatomic) NSString *keyIdentifier;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) NSDate *creationDate;

+ (id)withGroupIdentifier:(id)a0 keyIdentifier:(id)a1 publicKey:(id)a2 creationDate:(id)a3;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
