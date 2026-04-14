@class NSString;

@interface ATXFamilyCircleCache : NSObject {
    NSString *_path;
}

- (id)fetchFamilyCircle;
- (id)_fetchFamilyCircleFromCache;
- (BOOL)hasiCloudFamily;
- (void).cxx_destruct;
- (id)_cache;
- (id)initWithCachePath:(id)a0;
- (id)init;
- (id)_requestUpdatedFamilyCircle;

@end
