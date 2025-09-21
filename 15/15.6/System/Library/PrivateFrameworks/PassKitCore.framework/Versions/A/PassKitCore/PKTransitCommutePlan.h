@class NSString, NSArray, PKPassField, NSDate, NSSet, NSMutableDictionary;

@interface PKTransitCommutePlan : NSObject <NSSecureCoding, NSCopying> {
    NSMutableDictionary *_fieldsByKey;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSArray *deviceAccountIdentifiers;
@property (copy, nonatomic) PKPassField *title;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSArray *details;
@property (nonatomic) unsigned long long properties;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *expiryDate;
@property (copy, nonatomic) NSString *startDateString;
@property (copy, nonatomic) NSString *expiryDateString;
@property (copy, nonatomic) PKPassField *usage;
@property (nonatomic) char requiresAppletSourceOfTruth;
@property (nonatomic) char isDeviceBound;
@property (readonly, copy, nonatomic) NSString *formattedDateString;
@property (readonly, nonatomic) char hasExpiredPlanDate;
@property (readonly, nonatomic) char isPlanAvailable;
@property (readonly, nonatomic) char isPlanDisplayable;
@property (readonly, nonatomic) char hasDisplayableInformation;
@property (readonly, nonatomic) NSSet *foreignReferenceIdentifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_updateProperties;
- (id)_expiryField;
- (id)_startField;
- (void)_updateFieldsByKey;
- (id)passFieldForKey:(id)a0;
- (id)updateWithCommutePlanDetail:(id)a0;

@end
