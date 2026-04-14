@interface WorldClockPreferences : NSObject

- (BOOL)synchronize;
- (id)lastModified;
- (void)setLastModified:(id)a0;
- (id)cities;
- (void)setCities:(id)a0;
- (BOOL)defaultCitiesAdded;
- (id)defaultsKeys;
- (void)setDefaultCitiesAdded:(BOOL)a0;
- (BOOL)cityDataNeedsUpdate;
- (void)cityDataUpdated;
- (void)clearOutCityUpdatePref;

@end
