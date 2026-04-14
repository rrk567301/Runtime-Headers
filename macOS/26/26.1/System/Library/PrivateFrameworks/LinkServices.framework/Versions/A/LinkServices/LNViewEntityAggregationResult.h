@class NSDictionary, NSError, NSMutableDictionary;

@interface LNViewEntityAggregationResult : NSObject {
    NSMutableDictionary *_entitiesByBundleId;
    NSMutableDictionary *_errors;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, copy, nonatomic) NSDictionary *entities;
@property (readonly, copy, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)init;
- (void)addResults:(id)a0 error:(id)a1 forBundle:(id)a2;

@end
