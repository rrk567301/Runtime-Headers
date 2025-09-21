@class NSData, NSString, NSDate;

@interface SESPrivacyKey : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSData *publicKey;
@property (readonly, nonatomic) NSString *keyIdentifier;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) NSDate *creationDate;

+ (id)withGroupIdentifier:(id)a0 keyIdentifier:(id)a1 publicKey:(id)a2 creationDate:(id)a3;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
