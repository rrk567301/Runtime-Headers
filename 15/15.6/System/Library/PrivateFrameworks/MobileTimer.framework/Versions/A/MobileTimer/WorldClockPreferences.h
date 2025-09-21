@interface WorldClockPreferences : NSObject

- (char)synchronize;
- (id)lastModified;
- (void)setLastModified:(id)a0;
- (id)cities;
- (void)setCities:(id)a0;
- (void)cityDataUpdated;
- (char)cityDataNeedsUpdate;
- (void)clearOutCityUpdatePref;
- (char)defaultCitiesAdded;
- (id)defaultsKeys;
- (void)setDefaultCitiesAdded:(char)a0;

@end
