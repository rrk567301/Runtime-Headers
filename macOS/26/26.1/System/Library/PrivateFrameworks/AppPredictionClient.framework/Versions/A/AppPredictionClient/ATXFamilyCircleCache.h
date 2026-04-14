@class NSString;

@interface ATXFamilyCircleCache : NSObject {
    NSString *_path;
}

- (BOOL)hasiCloudFamily;
- (id)fetchFamilyCircle;
- (id)_fetchFamilyCircleFromCache;
- (id)_cache;
- (id)_requestUpdatedFamilyCircle;
- (void).cxx_destruct;
- (id)initWithCachePath:(id)a0;
- (id)init;

@end
