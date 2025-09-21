@class BSSMO, NSDate;

@interface GeoTagMO : WADeviceAnalyticsDatedRecord

@property (copy, nonatomic) NSDate *date;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) int taggedCount;
@property (retain, nonatomic) BSSMO *bss;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)generateInstance:(id)a0;
+ (id)geoTagsAtLocation:(id)a0 withinDistance:(double)a1 inBand:(unsigned int)a2 container:(id)a3;
+ (id)geoTagsForNetwork:(id)a0 container:(id)a1;
+ (id)geoTagsInBand:(unsigned int)a0 ssid:(id)a1 moc:(id)a2;
+ (BOOL)isNetworkWithinRangeOfLocation:(id)a0 range:(double)a1 location:(id)a2 container:(id)a3 count:(unsigned long long *)a4;

@end
