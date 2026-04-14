@class NSMutableDictionary;

@interface CKDRequiredFeaturesCache : NSObject

@property (readonly) NSMutableDictionary *cache;

+ (id)sharedCache;

- (id)init;
- (void).cxx_destruct;
- (id)requiredFeaturesForZoneID:(id)a0;
- (void)setRequiredFeatures:(id)a0 forZoneID:(id)a1;

@end
