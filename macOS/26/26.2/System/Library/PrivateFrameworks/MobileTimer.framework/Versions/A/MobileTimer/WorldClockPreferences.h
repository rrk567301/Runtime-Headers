@interface WorldClockPreferences : NSObject

- (id)defaultsKeys;
- (id)cities;
- (void)setCities:(id)a0;
- (BOOL)synchronize;
- (void)clearOutCityUpdatePref;
- (void)setLastModified:(id)a0;
- (void)setDefaultCitiesAdded:(BOOL)a0;
- (void)cityDataUpdated;
- (BOOL)cityDataNeedsUpdate;
- (id)lastModified;
- (BOOL)defaultCitiesAdded;

@end
