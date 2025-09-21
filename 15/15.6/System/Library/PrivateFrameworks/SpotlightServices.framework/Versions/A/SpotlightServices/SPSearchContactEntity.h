@class NSString, NSArray, NSDictionary, NSDateComponents, NSMutableArray;

@interface SPSearchContactEntity : SPSearchEntity {
    NSMutableArray *_allNames;
    NSMutableArray *_allPhoneNumbers;
    NSMutableArray *_allEmailAddresses;
    NSDictionary *_rankTerms;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) NSString *personIdentifier;
@property (readonly, nonatomic) NSString *personQueryIdentifier;
@property (readonly, nonatomic) NSDateComponents *birthdayComponents;
@property (readonly, nonatomic) NSArray *phoneNumbers;
@property (readonly, nonatomic) NSArray *addresses;
@property (readonly, nonatomic) NSArray *rawPhoneNumbers;
@property (readonly, nonatomic) NSArray *emailAddresses;

+ (char)supportsSecureCoding;
+ (char)stringA:(id)a0 isSameToStringB:(id)a1;
+ (id)updatePersonQueryIdentifier:(id)a0 withContactIdentifier:(id)a1;
+ (id)updatePersonQueryIdentifier:(id)a0 withPersonIdentifier:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)symbolName;
- (void)commonInit;
- (id)contact;
- (id)groupingRules;
- (id)spotlightQueryString;
- (void)updateSearchString:(id)a0;
- (id)currentSearchString;
- (char)isContactEntitySearch;
- (char)isScopedSearch;
- (id)spotlightFilterQueries;
- (id)spotlightRankTerms;
- (void)getVariantsForPhoneNumber:(id)a0 searchNumbers:(id)a1 displayNumbers:(id)a2 fallbackDisplayNumbers:(id)a3;
- (char)hasSameContactAsContactEntity:(id)a0;
- (id)initWithContactIdentifier:(id)a0 fromSuggestion:(char)a1;
- (id)initWithPersonQueryIdentifier:(id)a0 personName:(id)a1 fromSuggestion:(char)a2;

@end
