@class NSMutableDictionary;
@protocol CNAccountCollection, CNCancelable;

@interface CNPersistentStoreCoordinatorCacheEntry : NSObject

@property (retain) id<CNAccountCollection> accountCollection;
@property (retain) NSMutableDictionary *persistentStoreCoordinators;
@property (retain) id<CNCancelable> accountMonitoringCancelable;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
