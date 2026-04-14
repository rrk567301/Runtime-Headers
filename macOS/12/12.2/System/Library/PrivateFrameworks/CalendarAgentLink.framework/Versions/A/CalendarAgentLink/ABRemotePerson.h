@class NSArray, NSString, NSDateComponents, NSDate;

@interface ABRemotePerson : ABRemoteRecord

@property (retain) NSArray *calendarURIs;
@property (copy) NSString *contactIndex;
@property (copy) NSString *department;
@property (retain) NSArray *emails;
@property (copy, nonatomic) NSString *homePage;
@property (copy) NSString *jobTitle;
@property (copy) NSString *linkId;
@property (copy) NSString *notes;
@property (copy) NSString *phonemeData;
@property (retain) NSArray *phoneNumbers;
@property (retain) NSArray *socialProfiles;
@property (retain) NSArray *URLs;
@property (retain) NSArray *postalAddresses;
@property (retain) NSDateComponents *alternateBirthdayComponents;
@property (retain, nonatomic) NSDate *birthday;
@property (retain, nonatomic) NSDateComponents *birthdayComponents;
@property (retain, nonatomic) NSArray *otherDates;
@property (retain, nonatomic) NSArray *otherDateComponents;
@property (copy) NSString *companyName;
@property (copy) NSString *firstName;
@property (copy) NSString *lastName;
@property (copy) NSString *maidenName;
@property (copy) NSString *middleName;
@property (copy) NSString *nickname;
@property (copy) NSString *phoneticCompanyName;
@property (copy) NSString *phoneticFirstName;
@property (copy) NSString *phoneticLastName;
@property (copy) NSString *phoneticMiddleName;
@property (retain) NSArray *relatedNames;
@property (copy) NSString *suffix;
@property (copy) NSString *title;
@property (retain, nonatomic) NSArray *AIMAddresses;
@property (retain, nonatomic) NSArray *ICQAddresses;
@property (retain, nonatomic) NSArray *jabberAddresses;
@property (retain, nonatomic) NSArray *messagingAddresses;
@property (retain, nonatomic) NSArray *MSNAddresses;
@property (retain, nonatomic) NSArray *yahooAddresses;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)fullNameIncludingPrefix:(BOOL)a0 suffix:(BOOL)a1 nickname:(BOOL)a2 company:(BOOL)a3;
- (id)_instantMessageAddressesForServiceType:(id)a0;
- (void)_addYearComponentIfNeeded:(id)a0;
- (void)_setInstantMessageAddresses:(id)a0 forServiceType:(id)a1;
- (void)_validateDateComponents:(id)a0;

@end
