@class NSSet, PGGraphAddressNode;

@interface PGLocationTitleOptions : NSObject

@property (retain, nonatomic) NSSet *momentNodes;
@property (retain, nonatomic) PGGraphAddressNode *keyAssetAddressNode;
@property (retain, nonatomic) NSSet *curationAddressNodes;
@property (nonatomic) unsigned long long aoiDisplayType;
@property (nonatomic) unsigned long long peopleDisplayType;
@property (nonatomic) char useCities;
@property (nonatomic) char showAllCities;
@property (nonatomic) char useTripTitleForLongDuration;
@property (nonatomic) unsigned long long filterSignificantLocationsType;
@property (nonatomic) unsigned long long lineBreakBehavior;
@property (nonatomic) char useBusinessItems;
@property (nonatomic) char useDistrict;
@property (nonatomic) char allowFamilyHome;

+ (id)onlyPeopleLocationTitleOptions;

- (id)init;
- (void).cxx_destruct;

@end
