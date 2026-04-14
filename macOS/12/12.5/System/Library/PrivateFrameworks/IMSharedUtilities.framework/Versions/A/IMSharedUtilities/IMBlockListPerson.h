@class NSString, CNContact;

@interface IMBlockListPerson : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *cachedFullName;
@property (retain, nonatomic) NSString *cachedCompanyName;
@property (readonly, nonatomic) CNContact *cnPerson;
@property (readonly, nonatomic) NSString *fullName;

+ (id)personWithCNContact:(id)a0;

- (id)init;
- (id)sanitizeString:(id)a0;
- (id)companyName;
- (BOOL)isEqualToPerson:(id)a0;
- (id)initWithCNContact:(id)a0;
- (BOOL)isInAddressBook;

@end
