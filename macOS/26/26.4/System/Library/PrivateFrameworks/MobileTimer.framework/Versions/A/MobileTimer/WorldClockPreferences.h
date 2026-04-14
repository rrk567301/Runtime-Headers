@interface WorldClockPreferences : NSObject

- (void)setLastModified:(id)a0;
- (id)lastModified;
- (BOOL)synchronize;
- (id)defaultsKeys;
- (void)cityDataUpdated;
- (void)clearOutCityUpdatePref;
- (void)setCities:(id)a0;
- (void)setDefaultCitiesAdded:(BOOL)a0;
- (BOOL)cityDataNeedsUpdate;
- (id)cities;
- (BOOL)defaultCitiesAdded;

@end
