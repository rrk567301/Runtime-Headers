@class NSString;

@interface PGMeaningLocationMobilityCriteria : NSObject <PGMeaningCriteria>

@property (nonatomic) unsigned long long locationMobilityType;
@property (retain, nonatomic) NSString *locationMobilityLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)a0;

- (char)isValid;
- (void).cxx_destruct;
- (char)passesForAssets:(id)a0;
- (char)passesForMomentNode:(id)a0 momentNodeCache:(id)a1;

@end
