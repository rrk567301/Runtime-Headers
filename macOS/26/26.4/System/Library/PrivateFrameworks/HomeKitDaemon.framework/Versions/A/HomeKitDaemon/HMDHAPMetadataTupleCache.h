@class NSMutableSet;

@interface HMDHAPMetadataTupleCache : NSObject {
    NSMutableSet *_set;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

- (BOOL)containsObject:(id)a0;
- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
