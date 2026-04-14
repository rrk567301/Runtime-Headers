@interface WorldClockPreferences : NSObject

- (BOOL)synchronize;
- (id)cities;
- (void)setLastModified:(id)a0;
- (BOOL)cityDataNeedsUpdate;
- (void)setDefaultCitiesAdded:(BOOL)a0;
- (id)lastModified;
- (void)cityDataUpdated;
- (void)setCities:(id)a0;
- (void)clearOutCityUpdatePref;
- (id)defaultsKeys;
- (BOOL)defaultCitiesAdded;

@end
