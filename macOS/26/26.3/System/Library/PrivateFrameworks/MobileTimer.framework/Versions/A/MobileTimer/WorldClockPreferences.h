@interface WorldClockPreferences : NSObject

- (void)setLastModified:(id)a0;
- (void)clearOutCityUpdatePref;
- (id)lastModified;
- (BOOL)defaultCitiesAdded;
- (id)defaultsKeys;
- (void)setCities:(id)a0;
- (BOOL)cityDataNeedsUpdate;
- (id)cities;
- (void)cityDataUpdated;
- (void)setDefaultCitiesAdded:(BOOL)a0;
- (BOOL)synchronize;

@end
