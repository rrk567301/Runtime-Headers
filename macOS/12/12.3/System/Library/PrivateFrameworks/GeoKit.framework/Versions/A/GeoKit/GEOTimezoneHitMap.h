@class NSData, NSArray, NSDictionary;

@interface GEOTimezoneHitMap : NSObject {
    BOOL isLoaded;
    NSData *hitMap;
    unsigned int width;
    unsigned int height;
    NSArray *areas;
    NSDictionary *areasToTimeZones;
}

+ (id)sharedTimezoneHitMap;
+ (id)fileNameForTimeZone:(id)a0;

- (void)dealloc;
- (BOOL)loadHitMapData;
- (BOOL)loadMetaDictionary;
- (BOOL)loadIfNeeded;
- (id)_areaLabelAtLongitude:(double)a0 latitude:(double)a1;
- (id)timeZoneNamesAtLongitude:(double)a0 latitude:(double)a1;
- (struct CGImage { } *)copyTimeZoneForAreaWithName:(id)a0;
- (id)fileNameAtLongitude:(double)a0 latitude:(double)a1;

@end
