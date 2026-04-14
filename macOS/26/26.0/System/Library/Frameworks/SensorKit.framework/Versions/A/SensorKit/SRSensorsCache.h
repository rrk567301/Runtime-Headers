@class NSCache, NSArray;

@interface SRSensorsCache : NSObject {
    NSCache *_sensorsCache;
    NSArray *_sensorDescriptionsDirs;
}

@property (class, retain, nonatomic) SRSensorsCache *defaultCache;

- (void)dealloc;
- (id)initWithDirectories:(id)a0;
- (id)init;

@end
