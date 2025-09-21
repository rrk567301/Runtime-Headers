@class NSData, NSArray, NSDictionary;

@interface GEOTimezoneHitMap : NSObject {
    char isLoaded;
    NSData *hitMap;
    unsigned int width;
    unsigned int height;
    NSArray *areas;
    NSDictionary *areasToTimeZones;
}

+ (id)fileNameForTimeZone:(id)a0;
+ (id)sharedTimezoneHitMap;

- (void)dealloc;
- (char)loadIfNeeded;
- (id)_areaLabelAtLongitude:(double)a0 latitude:(double)a1;
- (struct CGImage { } *)copyTimeZoneForAreaWithName:(id)a0;
- (id)fileNameAtLongitude:(double)a0 latitude:(double)a1;
- (char)loadHitMapData;
- (char)loadMetaDictionary;
- (id)timeZoneNamesAtLongitude:(double)a0 latitude:(double)a1;

@end
