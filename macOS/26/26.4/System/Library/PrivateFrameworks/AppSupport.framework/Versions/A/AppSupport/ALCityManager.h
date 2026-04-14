@class CPSearchMatcher, NSRecursiveLock;

@interface ALCityManager : NSObject {
    struct sqlite3 { } *_db;
    struct sqlite3 { } *_localizedDb;
    NSRecursiveLock *_databaseAccessRecursiveLock;
}

@property (readonly) CPSearchMatcher *citySearchMatcher;

+ (id)sharedManager;
+ (id)newCitiesByIdentifierMap:(id)a0;
+ (id)_localeDictionaryFromSQLRow:(char **)a0;
+ (struct __CFArray { } *)legacyCityForCity:(id)a0;
+ (BOOL)willApplyTimeZoneChanges1;

- (id)_whileDatabaseLocked_localeCodesMatchingQualifier:(id)a0;
- (id)_cityForClassicIdentifier:(id)a0 commaSearchOptions:(unsigned long long)a1;
- (id)bestCityForLegacyCity:(struct __CFArray { } *)a0;
- (id)citiesMatchingName:(id)a0;
- (id)defaultCitiesForLocaleCode:(id)a0;
- (id)defaultCityForTimeZone:(id)a0;
- (id)defaultCitiesForLocaleCode:(id)a0 options:(int)a1;
- (id)citiesWithTimeZone:(id)a0;
- (id)_defaultCityForTimeZone:(id)a0 localeCode:(id)a1;
- (void)localizeCities:(id)a0;
- (id)citiesMatchingName:(id)a0 localized:(BOOL)a1;
- (id)citiesWithIdentifiers:(id)a0;
- (id)cityForClassicIdentifier:(id)a0;
- (BOOL)_shouldUseTablesAlternate1;
- (id)allCities;
- (id)_cityForTimeZone:(id)a0 localeCode:(id)a1;
- (id)init;
- (id)allLocales;
- (id)citiesMatchingQualifier:(id)a0;
- (id)defaultCitiesShownInWorldClock;
- (id)defaultCityForTimeZone:(id)a0 localeCode:(id)a1;
- (id)localeWithCode:(id)a0;
- (void)dealloc;

@end
