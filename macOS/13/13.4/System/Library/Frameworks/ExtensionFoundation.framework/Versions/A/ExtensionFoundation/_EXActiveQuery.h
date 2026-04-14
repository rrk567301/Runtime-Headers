@class _EXQuery, NSSet, NSMutableSet, _EXDiscoveryController;

@interface _EXActiveQuery : NSObject

@property (readonly) NSMutableSet *internalObservers;
@property (readonly) NSMutableSet *internalNewObservers;
@property (readonly, weak) _EXDiscoveryController *discoveryController;
@property (retain) NSSet *currentUUIDs;
@property (readonly) NSSet *observers;
@property (readonly) _EXQuery *query;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)update;
- (id)initWithQuery:(id)a0 discoveryController:(id)a1;
- (BOOL)isEqualToActiveQuery:(id)a0;

@end
