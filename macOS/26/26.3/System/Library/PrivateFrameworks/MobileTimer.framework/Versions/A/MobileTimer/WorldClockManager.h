@class WorldClockPreferences, NSMutableArray, NSDate;

@interface WorldClockManager : NSObject {
    BOOL _dirty;
    WorldClockPreferences *_defaults;
}

@property (retain, nonatomic) NSDate *lastModified;
@property (readonly, nonatomic) NSMutableArray *cities;

+ (id)sharedManager;

- (id)fixUpCityProperties:(id)a0;
- (unsigned long long)addCity:(id)a0;
- (id)citiesMatchingIdentifiers:(id)a0;
- (void)loadCities;
- (void)moveCityFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (id)updatedDataForCityWithID:(id)a0;
- (void)_notifyNano;
- (id)worldClockCityFromPersistenceDictionary:(id)a0;
- (id)cityWithIdUrl:(id)a0;
- (id)worldClockCityFromPersistenceArray:(id)a0;
- (id)closestCityToLocation:(id)a0 matchingTimeZone:(id)a1 requireTimeZoneEquivalence:(BOOL)a2;
- (void)removeCityAtIndex:(unsigned long long)a0;
- (BOOL)canAddCity;
- (BOOL)checkIfCitiesModified;
- (void).cxx_destruct;
- (void)saveCities;
- (void)removeCity:(id)a0;
- (void)removeAllCities;
- (void)addDefaultCitiesIfNeeded;
- (id)citiesMatchingName:(id)a0;
- (id)allCities;
- (void)pushCityPropertiesToPreferences;
- (id)worldClockCityFromPersistenceRepresentation:(id)a0;
- (id)initWithPreferences:(id)a0;
- (id)closestCityToLocation:(id)a0 matchingTimeZone:(id)a1;
- (id)updatedTimezoneForCityWithID:(id)a0;
- (id)updateALDataWithCity:(id)a0;

@end
