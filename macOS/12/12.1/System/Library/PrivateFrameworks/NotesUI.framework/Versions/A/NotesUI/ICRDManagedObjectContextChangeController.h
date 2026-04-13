@class NSSet, ICSelectorDelayer, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, ICRDManagedObjectContextChangeControllerDelegate;

@interface ICRDManagedObjectContextChangeController : NSObject

@property (retain, nonatomic) NSSet *managedObjectContexts;
@property (retain, nonatomic) NSMutableSet *needsUpdateManagedObjectIDs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *needsUpdateManagedObjectIDsSerialQueue;
@property (readonly, nonatomic) NSSet *objectTypeKeys;
@property (retain, nonatomic) ICSelectorDelayer *updateSelectorDelayer;
@property (weak, nonatomic) id<ICRDManagedObjectContextChangeControllerDelegate> delegate;
@property (nonatomic) unsigned long long objectTypes;
@property (nonatomic) double updateInterval;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObservers;
- (void)managedObjectContextObjectsDidChange:(id)a0;
- (void)addObservers;
- (void)performUpdatesIfNeeded;
- (void)_performUpdatesIfNeeded;
- (id)initWithManagedObjectContexts:(id)a0 delegate:(id)a1;
- (void)performUpdatesIfNeededAndWait;

@end
