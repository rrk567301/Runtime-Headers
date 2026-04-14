@class PPLocation, NSMutableSet, PPLocalLocationStore;

@interface PPLocationCache : NSObject {
    PPLocalLocationStore *_locationStore;
    BOOL _valid;
    PPLocation *_home;
    PPLocation *_work;
    NSMutableSet *_homeOrWorkAddresses;
}

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_refresh;
- (id)locationForHome;
- (id)locationForWork;
- (id)homeOrWorkAddresses;
- (id)initWithLocationStore:(id)a0;

@end
