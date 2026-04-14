@class NSDictionary, NSMutableDictionary;

@interface CalClientIDChangeTracker : NSObject {
    NSMutableDictionary *allChanges;
    NSDictionary *entities;
}

+ (id)defaultTracker;

- (id)init;
- (void)cleanup;
- (id)removals;
- (void)computeAndStoreChangeIds;
- (id)trackerFor:(id)a0;
- (id)initForRead;
- (void)clearChanges;
- (id)remappings;

@end
