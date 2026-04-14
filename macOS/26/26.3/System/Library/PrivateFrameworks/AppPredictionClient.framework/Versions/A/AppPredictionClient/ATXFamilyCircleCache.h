@class NSString;

@interface ATXFamilyCircleCache : NSObject {
    NSString *_path;
}

- (id)initWithCachePath:(id)a0;
- (id)fetchFamilyCircle;
- (id)_cache;
- (id)init;
- (BOOL)hasiCloudFamily;
- (id)_requestUpdatedFamilyCircle;
- (void).cxx_destruct;
- (id)_fetchFamilyCircleFromCache;

@end
