@class CNPhoneNumber, NSString, NSPersonNameComponents, CNPostalAddress;

@interface PKContact : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *contactHandle;
@property (retain, nonatomic) NSPersonNameComponents *name;
@property (retain, nonatomic) CNPostalAddress *postalAddress;
@property (retain, nonatomic) CNPhoneNumber *phoneNumber;
@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSString *supplementarySubLocality;

+ (long long)version;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (id)dictionaryRepresentation;
- (char)isEqualToContact:(id)a0;
- (id)initWithCNContact:(id)a0;
- (id)cnMutableContact;
- (void)sanitizePostalAddressCountry;
- (void)sanitizePostalAddressCountryWithLocale:(id)a0;

@end
