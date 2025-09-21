@class NSString, NSSet, NSURL, PKRemoteImageSet, NSNumber, NSDate;
@protocol NSCopying;

@interface PKAccountEnhancedMerchant : NSObject <NSSecureCoding, NSCopying, PKIdentifiable>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *privateIdentifier;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *detailedDescription;
@property (retain, nonatomic) PKRemoteImageSet *logoImage;
@property (retain, nonatomic) PKRemoteImageSet *iconImage;
@property (retain, nonatomic) NSNumber *adamID;
@property (retain, nonatomic) NSSet *brandMUIDs;
@property (retain, nonatomic) NSSet *excludedMUIDs;
@property (retain, nonatomic) NSURL *website;
@property (retain, nonatomic) NSURL *loyaltyPassURL;
@property (retain, nonatomic) NSSet *paymentIdentifiers;
@property (retain, nonatomic) NSString *disclosures;
@property (retain, nonatomic) NSString *mapsSearchText;
@property (retain, nonatomic) NSSet *mapsSearchStrings;
@property (retain, nonatomic) NSString *paymentSheetRewardsText;
@property (retain, nonatomic) NSString *paymentSheetMerchantRewardsText;
@property (nonatomic) char suppressPaymentSheetRewardsHint;
@property (retain, nonatomic) NSDate *paymentSheetOverrideStart;
@property (retain, nonatomic) NSDate *paymentSheetOverrideEnd;
@property (retain, nonatomic) NSSet *enhancedRewardsProgramIdentifiers;
@property (readonly, nonatomic) char hasMapsLocations;
@property (readonly, nonatomic) char hasLinkedApplication;
@property (readonly, nonatomic) char hasWebsite;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)setExcludedMUIDsFromJSONString:(id)a0;
- (void)_initWithMerchantDictionary:(id)a0;
- (id)brandMUIDsAsJSONString;
- (id)excludedMUIDsAsJSONString;
- (id)hashedPaymentIdentifiers;
- (char)isEqualToAccountEnhancedMerchant:(id)a0;
- (id)mapsSearchStringsAsJSONString;
- (id)paymentIdentifiersAsJSONString;
- (void)setBrandMUIDsFromJSONString:(id)a0;
- (void)setEnhancedRewardsProgramIdentifiersFromJSONString:(id)a0;
- (void)setMapsSearchStringsFromJSONString:(id)a0;
- (void)setPaymentIdentifiersFromJSONString:(id)a0;

@end
