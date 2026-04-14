@class WorldClockPreferences, NSMutableArray, NSDate;

@interface WorldClockManager : NSObject {
    BOOL _dirty;
    WorldClockPreferences *_defaults;
}

@property (retain, nonatomic) NSDate *lastModified;
@property (readonly, nonatomic) NSMutableArray *cities;

+ (id)sharedManager;

- (id)allCities;
- (unsigned long long)addCity:(id)a0;
- (id)updatedDataForCityWithID:(id)a0;
- (void)moveCityFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)pushCityPropertiesToPreferences;
- (id)worldClockCityFromPersistenceRepresentation:(id)a0;
- (void)addDefaultCitiesIfNeeded;
- (id)cityWithIdUrl:(id)a0;
- (BOOL)checkIfCitiesModified;
- (id)worldClockCityFromPersistenceArray:(id)a0;
- (void)loadCities;
- (void)saveCities;
- (void)removeCityAtIndex:(unsigned long long)a0;
- (id)fixUpCityProperties:(id)a0;
- (id)closestCityToLocation:(id)a0 matchingTimeZone:(id)a1;
- (void)removeCity:(id)a0;
- (id)updatedTimezoneForCityWithID:(id)a0;
- (id)updateALDataWithCity:(id)a0;
- (id)citiesMatchingIdentifiers:(id)a0;
- (id)initWithPreferences:(id)a0;
- (void)removeAllCities;
- (id)citiesMatchingName:(id)a0;
- (id)worldClockCityFromPersistenceDictionary:(id)a0;
- (BOOL)canAddCity;
- (void)_notifyNano;
- (id)closestCityToLocation:(id)a0 matchingTimeZone:(id)a1 requireTimeZoneEquivalence:(BOOL)a2;
- (void).cxx_destruct;

@end
