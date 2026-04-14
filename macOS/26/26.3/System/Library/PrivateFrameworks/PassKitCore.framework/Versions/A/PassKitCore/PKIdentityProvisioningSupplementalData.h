@class NSString;

@interface PKIdentityProvisioningSupplementalData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (retain, nonatomic) NSString *passSerialNumber;
@property (retain, nonatomic) NSString *accountKeyIdentifier;

+ (id)createWithData:(id)a0;

- (id)dataRepresentation;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
