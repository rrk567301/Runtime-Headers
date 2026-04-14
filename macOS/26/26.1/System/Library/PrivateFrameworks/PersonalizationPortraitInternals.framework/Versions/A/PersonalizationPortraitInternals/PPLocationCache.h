@class PPLocation, NSMutableSet, PPLocalLocationStore;

@interface PPLocationCache : NSObject {
    PPLocalLocationStore *_locationStore;
    BOOL _valid;
    PPLocation *_home;
    PPLocation *_work;
    NSMutableSet *_homeOrWorkAddresses;
}

- (void)_refresh;
- (void)invalidate;
- (id)locationForWork;
- (id)initWithLocationStore:(id)a0;
- (void).cxx_destruct;
- (id)locationForHome;
- (id)init;
- (id)homeOrWorkAddresses;

@end
