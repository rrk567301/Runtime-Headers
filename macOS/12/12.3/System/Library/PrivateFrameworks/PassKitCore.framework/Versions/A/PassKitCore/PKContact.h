@class CNPhoneNumber, NSString, NSPersonNameComponents, CNPostalAddress;

@interface PKContact : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSPersonNameComponents *name;
@property (retain, nonatomic) CNPostalAddress *postalAddress;
@property (retain, nonatomic) CNPhoneNumber *phoneNumber;
@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSString *supplementarySubLocality;

+ (long long)version;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (BOOL)isEqualToContact:(id)a0;
- (id)initWithCNContact:(id)a0;
- (id)cnMutableContact;

@end
