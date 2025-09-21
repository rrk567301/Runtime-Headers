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
- (id)init;
- (id)locationForWork;
- (id)homeOrWorkAddresses;
- (id)initWithLocationStore:(id)a0;
- (id)locationForHome;
- (void).cxx_destruct;

@end
