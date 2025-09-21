@class NSString, PKExternalDeviceMigrationPaymentDetails, NSData;

@interface PKExternalDeviceMigrationCardEntry : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *localizedOrganization;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *accountNumberSuffix;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) PKExternalDeviceMigrationPaymentDetails *paymentDetails;
@property (readonly, nonatomic) BOOL credentialInSecureElement;
@property (readonly, nonatomic) NSData *sanitizedPKPassArchive;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)initWithLocalizedOrganization:(id)a0 localizedDescription:(id)a1 accountNumberSuffix:(id)a2 type:(unsigned long long)a3 paymentDetails:(id)a4 credentialInSecureElement:(BOOL)a5 sanitizedPKPassArchive:(id)a6;
- (BOOL)isEqualToExternalDeviceMigrationCardEntry:(id)a0;

@end
