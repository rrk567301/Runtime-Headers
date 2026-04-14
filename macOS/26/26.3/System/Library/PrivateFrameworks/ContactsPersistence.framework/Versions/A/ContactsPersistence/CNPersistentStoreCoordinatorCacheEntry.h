@class NSMutableDictionary;
@protocol CNAccountCollection, CNCancelable;

@interface CNPersistentStoreCoordinatorCacheEntry : NSObject

@property (retain) id<CNAccountCollection> accountCollection;
@property (retain) NSMutableDictionary *persistentStoreCoordinators;
@property (retain) id<CNCancelable> accountMonitoringCancelable;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
