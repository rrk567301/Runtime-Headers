@class PPLocation, NSMutableSet, PPLocalLocationStore;

@interface PPLocationCache : NSObject {
    PPLocalLocationStore *_locationStore;
    BOOL _valid;
    PPLocation *_home;
    PPLocation *_work;
    NSMutableSet *_homeOrWorkAddresses;
}

- (void)_refresh;
- (id)locationForHome;
- (id)locationForWork;
- (id)homeOrWorkAddresses;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (id)initWithLocationStore:(id)a0;

@end
