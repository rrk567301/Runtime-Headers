@class NSUUID, PFPosterExtensionInstancePool, NSArray, NSPredicate, NSSet, NSString, PFPosterExtensionInstanceProvider, NSDictionary, NSObject, NSHashTable, _EXQueryController;
@protocol OS_dispatch_queue, PFPosterExtensionProviderObserver;

@interface PFPosterExtensionProvider : NSObject <_EXQueryControllerDelegate, BSCancellable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_lock_queries;
    _EXQueryController *_lock_queryController;
    NSDictionary *_lock_extensionByProvider;
    BOOL _lock_started;
    id<PFPosterExtensionProviderObserver> _lock_delegate;
    NSPredicate *_lock_rolePredicate;
    NSHashTable *_lock_observers;
}

@property (retain, nonatomic) NSArray *knownPosterExtensions;
@property (readonly, nonatomic) NSUUID *defaultInstanceIdentifier;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSSet *supportedRoles;
@property (retain) NSObject<OS_dispatch_queue> *observerQueue;
@property (readonly, nonatomic) BOOL hasPosterExtensions;
@property (readonly, nonatomic) NSDictionary *extensionForIdentifier;
@property (readonly, nonatomic) PFPosterExtensionInstanceProvider *instanceProvider;
@property (readonly, nonatomic) PFPosterExtensionInstancePool *instancePool;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)extensionWithBundleIdentifier:(id)a0;
+ (id)extensionKitQuery;

- (void)start;
- (void)cancel;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (void)queryControllerDidUpdate:(id)a0 resultDifference:(id)a1;
- (id)_lock_buildQuery;
- (void)_lock_executeCancellationAndRestartIfAlreadyStarted:(BOOL)a0;
- (void)_lock_executeQuery;
- (void)_lock_notifyDataStoreOfUpdatedExtensions:(id)a0 fromExtensions:(id)a1;
- (void)_lock_startWithImmediateQueryExecution:(BOOL)a0;
- (void)_lock_teardownQueryController;
- (BOOL)_lock_updateExtensions;
- (BOOL)_lock_updateExtensions:(id)a0;
- (id)acquireInstanceForExtensionWithIdentifier:(id)a0 reason:(id)a1 error:(out id *)a2;
- (id)initWithDefaultInstanceIdentifier:(id)a0;
- (id)knownPosterExtensions;
- (void)relinquishExtensionInstanceWithIdentifier:(id)a0 reason:(id)a1;
- (BOOL)reloadExtensions;
- (void)startWithImmediateQueryExecution:(BOOL)a0;

@end
