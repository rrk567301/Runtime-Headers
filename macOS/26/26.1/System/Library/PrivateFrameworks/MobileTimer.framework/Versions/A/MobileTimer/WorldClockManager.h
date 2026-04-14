@class WorldClockPreferences, NSMutableArray, NSDate;

@interface WorldClockManager : NSObject {
    BOOL _dirty;
    WorldClockPreferences *_defaults;
}

@property (retain, nonatomic) NSDate *lastModified;
@property (readonly, nonatomic) NSMutableArray *cities;

+ (id)sharedManager;

- (void)pushCityPropertiesToPreferences;
- (id)updatedDataForCityWithID:(id)a0;
- (void)_notifyNano;
- (void)loadCities;
- (id)updatedTimezoneForCityWithID:(id)a0;
- (id)citiesMatchingName:(id)a0;
- (void)removeCityAtIndex:(unsigned long long)a0;
- (id)worldClockCityFromPersistenceDictionary:(id)a0;
- (id)allCities;
- (id)initWithPreferences:(id)a0;
- (id)worldClockCityFromPersistenceRepresentation:(id)a0;
- (id)fixUpCityProperties:(id)a0;
- (id)closestCityToLocation:(id)a0 matchingTimeZone:(id)a1 requireTimeZoneEquivalence:(BOOL)a2;
- (void)removeCity:(id)a0;
- (id)updateALDataWithCity:(id)a0;
- (id)citiesMatchingIdentifiers:(id)a0;
- (id)worldClockCityFromPersistenceArray:(id)a0;
- (id)closestCityToLocation:(id)a0 matchingTimeZone:(id)a1;
- (id)cityWithIdUrl:(id)a0;
- (void)saveCities;
- (BOOL)canAddCity;
- (void).cxx_destruct;
- (unsigned long long)addCity:(id)a0;
- (BOOL)checkIfCitiesModified;
- (void)moveCityFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)removeAllCities;
- (void)addDefaultCitiesIfNeeded;

@end
