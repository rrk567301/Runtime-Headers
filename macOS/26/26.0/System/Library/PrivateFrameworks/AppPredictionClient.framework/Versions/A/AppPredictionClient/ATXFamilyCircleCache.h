@class NSString;

@interface ATXFamilyCircleCache : NSObject {
    NSString *_path;
}

- (BOOL)hasiCloudFamily;
- (id)fetchFamilyCircle;
- (id)_requestUpdatedFamilyCircle;
- (id)init;
- (id)_fetchFamilyCircleFromCache;
- (id)initWithCachePath:(id)a0;
- (void).cxx_destruct;
- (id)_cache;

@end
