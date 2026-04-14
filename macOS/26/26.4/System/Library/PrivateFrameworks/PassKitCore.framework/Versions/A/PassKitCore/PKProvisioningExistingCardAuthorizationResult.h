@class NSString;

@interface PKProvisioningExistingCardAuthorizationResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *passTypeIdentifier;
@property (readonly, copy, nonatomic) NSString *passSerialNumber;
@property (readonly, copy, nonatomic) NSString *token;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPassTypeIdentifier:(id)a0 passSerialNumber:(id)a1 token:(id)a2;

@end
