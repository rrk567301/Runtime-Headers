@class NSMutableDictionary;
@protocol CNAccountCollection;

@interface CNPersistentStoreCoordinatorCacheEntry : NSObject

@property (retain) id<CNAccountCollection> accountCollection;
@property (retain) NSMutableDictionary *persistentStoreCoordinators;

- (id)init;
- (void).cxx_destruct;

@end
