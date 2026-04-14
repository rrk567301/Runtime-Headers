@class CPSearchMatcher, NSRecursiveLock;

@interface ALCityManager : NSObject {
    struct sqlite3 { } *_db;
    struct sqlite3 { } *_localizedDb;
    NSRecursiveLock *_databaseAccessRecursiveLock;
}

@property (readonly) CPSearchMatcher *citySearchMatcher;

+ (BOOL)willApplyTimeZoneChanges1;
+ (struct __CFArray { } *)legacyCityForCity:(id)a0;
+ (id)newCitiesByIdentifierMap:(id)a0;
+ (id)sharedManager;
+ (id)_localeDictionaryFromSQLRow:(char **)a0;

- (id)allCities;
- (id)citiesWithIdentifiers:(id)a0;
- (id)defaultCityForTimeZone:(id)a0;
- (id)_cityForTimeZone:(id)a0 localeCode:(id)a1;
- (id)citiesMatchingName:(id)a0 localized:(BOOL)a1;
- (id)_defaultCityForTimeZone:(id)a0 localeCode:(id)a1;
- (id)bestCityForLegacyCity:(struct __CFArray { } *)a0;
- (id)citiesWithTimeZone:(id)a0;
- (void)localizeCities:(id)a0;
- (id)defaultCitiesForLocaleCode:(id)a0 options:(int)a1;
- (id)defaultCitiesForLocaleCode:(id)a0;
- (BOOL)_shouldUseTablesAlternate1;
- (id)cityForClassicIdentifier:(id)a0;
- (id)citiesMatchingQualifier:(id)a0;
- (id)_cityForClassicIdentifier:(id)a0 commaSearchOptions:(unsigned long long)a1;
- (id)defaultCityForTimeZone:(id)a0 localeCode:(id)a1;
- (id)localeWithCode:(id)a0;
- (id)_whileDatabaseLocked_localeCodesMatchingQualifier:(id)a0;
- (id)allLocales;
- (id)init;
- (id)defaultCitiesShownInWorldClock;
- (id)citiesMatchingName:(id)a0;
- (void)dealloc;

@end
