@class PKPassPersonalization, NSString, NSArray, NSSet, NSDictionary, PKFidoProfile, PKPassBarcodeSettings, PKPassUpcomingPassInformation;

@interface PKPassContent : PKContent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long transitType;
@property (copy, nonatomic) NSString *logoText;
@property (copy, nonatomic) NSArray *frontFieldBuckets;
@property (copy, nonatomic) NSArray *backFieldBuckets;
@property (copy, nonatomic) NSArray *passDetailSections;
@property (copy, nonatomic) NSArray *auxiliaryPassInformationSections;
@property (retain, nonatomic) PKPassUpcomingPassInformation *upcomingPassInformation;
@property (copy, nonatomic) NSArray *balanceFields;
@property (copy, nonatomic) NSArray *autoTopUpFields;
@property (copy, nonatomic) NSArray *additionalInfoFields;
@property (copy, nonatomic) NSSet *balances;
@property (copy, nonatomic) PKPassPersonalization *personalization;
@property (copy, nonatomic) NSDictionary *semantics;
@property (copy, nonatomic) NSDictionary *allSemantics;
@property (copy, nonatomic) NSString *businessChatIdentifier;
@property (retain, nonatomic) PKPassBarcodeSettings *barcodeSettings;
@property (copy, nonatomic) NSString *cardholderInfoSectionTitle;
@property (readonly, nonatomic) NSArray *primaryFields;
@property (readonly, nonatomic) NSDictionary *features;
@property (retain, nonatomic) PKFidoProfile *fidoProfile;
@property (retain, nonatomic) NSDictionary *issuerBindingInformation;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)currencyAmountForSemanticKey:(id)a0;
- (id)dateForSemanticKey:(id)a0;
- (id)dictionariesForSemanticKey:(id)a0;
- (id)eventDateInfoForSemanticKey:(id)a0;
- (void)flushFormattedFieldValues;
- (id)initWithDictionary:(id)a0 bundle:(id)a1 privateBundle:(id)a2 passType:(unsigned long long)a3;
- (id)locationForSemanticKey:(id)a0;
- (id)numberForSemanticKey:(id)a0;
- (id)personNameComponentsForSemanticKey:(id)a0;
- (id)stringForSemanticKey:(id)a0;
- (id)stringsForSemanticKey:(id)a0;

@end
