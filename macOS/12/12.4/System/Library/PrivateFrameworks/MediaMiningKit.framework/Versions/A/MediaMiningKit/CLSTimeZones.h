@class NSArray;

@interface CLSTimeZones : NSObject

@property (retain, nonatomic) NSArray *timeZonesDB;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)invalidateCaches;
- (id)closestZoneInfoWithLocation:(id)a0 source:(id)a1;
- (id)timeZoneWithDictionary:(id)a0;
- (id)timeZoneWithLocation:(id)a0;
- (id)filteredTimeZonesWithCountyCode:(id)a0;
- (id)_importDataBaseFromFile:(id)a0;
- (id)timeZoneWithLocation:(id)a0 countryCode:(id)a1;

@end
