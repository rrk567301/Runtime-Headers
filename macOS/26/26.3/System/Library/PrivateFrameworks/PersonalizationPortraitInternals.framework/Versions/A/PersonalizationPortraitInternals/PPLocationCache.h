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
- (id)initWithLocationStore:(id)a0;
- (id)init;
- (id)homeOrWorkAddresses;
- (id)locationForHome;
- (void).cxx_destruct;
- (void)_refresh;

@end
