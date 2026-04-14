@class NSString, NSArray, NSDictionary, NSDateComponents, NSMutableArray;

@interface SPSearchContactEntity : SPSearchEntity {
    NSString *_tokenText;
    NSString *_queryString;
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

+ (BOOL)supportsSecureCoding;
+ (id)updatePersonQueryIdentifier:(id)a0 withContactIdentifier:(id)a1;
+ (id)updatePersonQueryIdentifier:(id)a0 withPersonIdentifier:(id)a1;
+ (BOOL)stringA:(id)a0 isSameToStringB:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)symbolName;
- (void)commonInit;
- (id)contact;
- (void)updateSearchString:(id)a0;
- (id)tokenText;
- (id)queryString;
- (id)spotlightQueryString;
- (id)groupingRules;
- (id)spotlightRankTerms;
- (id)spotlightFilterQueries;
- (BOOL)isScopedSearch;
- (BOOL)isContactEntitySearch;
- (id)initWithContactIdentifier:(id)a0 fromSuggestion:(BOOL)a1;
- (id)initWithPersonQueryIdentifier:(id)a0 personName:(id)a1 fromSuggestion:(BOOL)a2;
- (void)getVariantsForPhoneNumber:(id)a0 searchNumbers:(id)a1 displayNumbers:(id)a2 fallbackDisplayNumbers:(id)a3;
- (BOOL)hasSameContactAsContactEntity:(id)a0;

@end
