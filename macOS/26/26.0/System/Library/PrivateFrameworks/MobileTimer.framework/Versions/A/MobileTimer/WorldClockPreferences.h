@interface WorldClockPreferences : NSObject

- (void)setLastModified:(id)a0;
- (void)cityDataUpdated;
- (id)cities;
- (BOOL)synchronize;
- (BOOL)cityDataNeedsUpdate;
- (id)lastModified;
- (void)setDefaultCitiesAdded:(BOOL)a0;
- (void)setCities:(id)a0;
- (id)defaultsKeys;
- (void)clearOutCityUpdatePref;
- (BOOL)defaultCitiesAdded;

@end
