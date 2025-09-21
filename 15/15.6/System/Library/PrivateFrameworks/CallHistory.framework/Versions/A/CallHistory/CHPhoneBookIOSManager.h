@class CNContactStore;

@interface CHPhoneBookIOSManager : NSObject

@property (readonly, nonatomic) CNContactStore *contactStore;

- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0;
- (id)fetchCNContact:(id)a0 countryCode:(id)a1 isEmail:(char)a2;
- (id)fetchCNContactsMatchingPredicate:(id)a0 keysToKetch:(id)a1 error:(id *)a2;
- (id)fetchFullCNContactForContactIdentifier:(id)a0 isEmail:(char)a1;
- (id)getLocalizedCallerIdLabelForContact:(id)a0 forCallerId:(id)a1 withCallerIdIsEmail:(char)a2;
- (id)getPersonsNameForContact:(id)a0;
- (id)getRecordId:(id)a0 countryCode:(id)a1 isEmail:(char)a2;

@end
