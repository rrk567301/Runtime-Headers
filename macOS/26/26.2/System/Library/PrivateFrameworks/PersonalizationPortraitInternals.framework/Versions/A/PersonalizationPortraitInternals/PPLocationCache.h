@class PPLocation, NSMutableSet, PPLocalLocationStore;

@interface PPLocationCache : NSObject {
    PPLocalLocationStore *_locationStore;
    BOOL _valid;
    PPLocation *_home;
    PPLocation *_work;
    NSMutableSet *_homeOrWorkAddresses;
}

- (void)invalidate;
- (id)locationForWork;
- (void)_refresh;
- (id)locationForHome;
- (id)homeOrWorkAddresses;
- (void).cxx_destruct;
- (id)initWithLocationStore:(id)a0;
- (id)init;

@end
