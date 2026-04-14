@class GEOGloriaDB;

@interface GEOMetroRegionData : NSObject {
    GEOGloriaDB *_db;
}

- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)metroNameForLocation:(id)a0;

@end
