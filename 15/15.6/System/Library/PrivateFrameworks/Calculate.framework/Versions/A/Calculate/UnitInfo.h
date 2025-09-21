@class NSString, NSMutableDictionary, NSArray, UnitTypeInfo, NSSet;

@interface UnitInfo : NSObject

@property (retain, nonatomic) NSMutableDictionary *localizationToCompactName;
@property (nonatomic) int unitID;
@property (nonatomic) int unitType;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) struct { unsigned long long w[2]; } baseNumerator;
@property (nonatomic) struct { unsigned long long w[2]; } baseDenominator;
@property (nonatomic) char isInverted;
@property (nonatomic) char isBaseUnit;
@property (nonatomic) char isDisplayName;
@property (nonatomic) char impliesDivision;
@property (nonatomic) char isFahrenheit;
@property (nonatomic) char isCelsius;
@property (nonatomic) char isKelvin;
@property (weak, nonatomic) UnitTypeInfo *typeInfo;
@property (weak, nonatomic) UnitInfo *bestEquivalent;
@property (nonatomic) unsigned long long measurementSystem;
@property (nonatomic) char doNotSuggest;
@property (weak, nonatomic) UnitInfo *nextSmallest;
@property (nonatomic) char formatNextSmallest;
@property (nonatomic) char isPreferredUnit;
@property (retain, nonatomic) NSArray *subunitIDs;
@property (retain, nonatomic) NSSet *allSubunitIDs;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)compare:(id)a0;

@end
