@class NSString, NSDateComponents, NSNumber;

@interface PLTextUnderstandingIdentificationDocument : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long kind;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *postalAddress;
@property (copy, nonatomic) NSString *urlAddress;
@property (copy, nonatomic) NSDateComponents *dateOfBirth;
@property (copy, nonatomic) NSString *placeOfBirth;
@property (copy, nonatomic) NSString *sex;
@property (copy, nonatomic) NSString *organizationName;
@property (copy, nonatomic) NSString *organizationHours;
@property (copy, nonatomic) NSString *cardType;
@property (copy, nonatomic) NSString *cardProvider;
@property (copy, nonatomic) NSString *cardNumber;
@property (copy, nonatomic) NSString *cardGroupNumber;
@property (copy, nonatomic) NSDateComponents *issueDate;
@property (copy, nonatomic) NSDateComponents *expirationDate;
@property (copy, nonatomic) NSString *issuedBy;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *cardCategory;
@property (copy, nonatomic) NSString *cardRestrictions;
@property (copy, nonatomic) NSNumber *extractionVersion;

+ (void)updateSearchableItemAttributeSet:(id)a0 withIdentificationDocument:(id)a1;
+ (id)_csCardTypeFromIdentificationDocumentKind:(long long)a0;
+ (id)_dateFromDateComponents:(id)a0;
+ (id)textUnderstandingIdentificationDocumentFromData:(id)a0 error:(id *)a1;

- (id)jsonDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
