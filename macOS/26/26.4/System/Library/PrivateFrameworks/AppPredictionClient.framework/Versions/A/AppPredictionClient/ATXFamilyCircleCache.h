@class NSString;

@interface ATXFamilyCircleCache : NSObject {
    NSString *_path;
}

- (id)initWithCachePath:(id)a0;
- (BOOL)hasiCloudFamily;
- (id)_requestUpdatedFamilyCircle;
- (id)_fetchFamilyCircleFromCache;
- (id)fetchFamilyCircle;
- (void).cxx_destruct;
- (id)init;
- (id)_cache;

@end
