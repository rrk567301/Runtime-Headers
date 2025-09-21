@class NSString;

@interface PKIdentityProvisioningSupplementalData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (retain, nonatomic) NSString *passSerialNumber;
@property (retain, nonatomic) NSString *accountKeyIdentifier;

+ (id)createWithData:(id)a0;

- (id)dataRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
