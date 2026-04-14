@class NSString, NSData;

@interface FMDCommandValidationSignatureRequestContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL requestEphemeralAuth;
@property (copy, nonatomic) NSString *ephemeralToken;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSData *dataToSign;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
