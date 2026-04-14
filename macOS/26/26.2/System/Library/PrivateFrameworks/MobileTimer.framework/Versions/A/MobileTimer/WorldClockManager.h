@class WorldClockPreferences, NSMutableArray, NSDate;

@interface WorldClockManager : NSObject {
    BOOL _dirty;
    WorldClockPreferences *_defaults;
}

@property (retain, nonatomic) NSDate *lastModified;
@property (readonly, nonatomic) NSMutableArray *cities;

+ (id)sharedManager;

- (id)allCities;
- (id)citiesMatchingIdentifiers:(id)a0;
- (void)removeAllCities;
- (id)closestCityToLocation:(id)a0 matchingTimeZone:(id)a1;
- (id)updatedTimezoneForCityWithID:(id)a0;
- (id)worldClockCityFromPersistenceDictionary:(id)a0;
- (id)closestCityToLocation:(id)a0 matchingTimeZone:(id)a1 requireTimeZoneEquivalence:(BOOL)a2;
- (void)moveCityFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)pushCityPropertiesToPreferences;
- (BOOL)checkIfCitiesModified;
- (id)worldClockCityFromPersistenceArray:(id)a0;
- (void)loadCities;
- (id)worldClockCityFromPersistenceRepresentation:(id)a0;
- (void).cxx_destruct;
- (void)saveCities;
- (BOOL)canAddCity;
- (id)fixUpCityProperties:(id)a0;
- (void)addDefaultCitiesIfNeeded;
- (id)initWithPreferences:(id)a0;
- (id)cityWithIdUrl:(id)a0;
- (void)removeCity:(id)a0;
- (void)_notifyNano;
- (unsigned long long)addCity:(id)a0;
- (id)updateALDataWithCity:(id)a0;
- (id)citiesMatchingName:(id)a0;
- (id)updatedDataForCityWithID:(id)a0;
- (void)removeCityAtIndex:(unsigned long long)a0;

@end
