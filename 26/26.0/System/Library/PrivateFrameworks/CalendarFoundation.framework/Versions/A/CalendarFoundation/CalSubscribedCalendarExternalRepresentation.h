@interface CalSubscribedCalendarExternalRepresentation : NSObject

+ (id)logHandle;
+ (unsigned long long)subscribedCalendarRefreshFlagsFromDictionary:(id)a0;
+ (id)externalRepresentationDataWithDictionary:(id)a0;
+ (void)setSubscribedCalendarRefreshFlags:(unsigned long long)a0 inDictionary:(id)a1;
+ (id)lastHolidayRegionFromDictionary:(id)a0;
+ (void)setLastHolidayRegion:(id)a0 inDictionary:(id)a1;
+ (id)lastHolidayLanguageFromDictionary:(id)a0;
+ (id)dictionaryWithExternalRepresentationData:(id)a0;
+ (int)migrationVersionFromDictionary:(id)a0;
+ (void)setMigrationVersion:(int)a0 inDictionary:(id)a1;
+ (void)setLastHolidayLanguage:(id)a0 inDictionary:(id)a1;

@end
