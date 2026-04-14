@class WorldClockPreferences, NSMutableArray, NSDate;

@interface WorldClockManager : NSObject {
    BOOL _dirty;
    WorldClockPreferences *_defaults;
}

@property (retain, nonatomic) NSDate *lastModified;
@property (readonly, nonatomic) NSMutableArray *cities;

+ (id)sharedManager;
+ (id)sharedManagerWithPreferences:(id)a0;

- (void).cxx_destruct;
- (id)initWithPreferences:(id)a0;
- (id)allCities;
- (id)citiesMatchingName:(id)a0;
- (void)loadCities;
- (id)updateALDataWithCity:(id)a0;
- (id)updatedTimezoneForCityWithID:(id)a0;
- (void)saveCities;
- (id)worldClockCityFromPersistenceRepresentation:(id)a0;
- (id)worldClockCityFromPersistenceArray:(id)a0;
- (id)worldClockCityFromPersistenceDictionary:(id)a0;
- (void)addDefaultCitiesIfNeeded;
- (void)pushCityPropertiesToPreferences;
- (id)fixUpCityProperties:(id)a0;
- (BOOL)checkIfCitiesModified;
- (id)cityWithIdUrl:(id)a0;
- (BOOL)canAddCity;
- (unsigned long long)addCity:(id)a0;
- (void)removeCity:(id)a0;
- (void)removeCityAtIndex:(unsigned long long)a0;
- (void)removeAllCities;
- (void)moveCityFromIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)_notifyNano;
- (id)citiesMatchingIdentifiers:(id)a0;

@end
