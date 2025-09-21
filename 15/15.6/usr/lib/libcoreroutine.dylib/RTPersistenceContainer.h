@class NSString, NSPersistentStoreCoordinator, NSArray, NSObject;
@protocol OS_dispatch_queue, RTPersistenceContainerDelegate;

@interface RTPersistenceContainer : NSObject {
    NSArray *_configurations;
}

@property (retain) NSObject<OS_dispatch_queue> *contextRequestsQueue;
@property char serveContexts;
@property char setupFailed;
@property (retain) NSPersistentStoreCoordinator *coordinator;
@property (weak, nonatomic) id<RTPersistenceContainerDelegate> delegate;
@property (readonly) NSString *name;
@property (readonly) char storesNeedSetup;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_persistenceContext;
- (char)_validateConfigurations:(id)a0;
- (id)initWithName:(id)a0 model:(id)a1 configurations:(id)a2;
- (id)persistenceContext;
- (void)persistenceContextWithHandler:(id /* block */)a0;
- (id)persistenceContextWithOptions:(unsigned long long)a0;
- (void)resumePersistenceStores;
- (void)setupPersistenceStores;
- (void)suspendPersistenceStores;
- (id)tearDownPersistenceStack;
- (char)updateContainerConfigurations:(id)a0;
- (id)waitForPersistenceContext;

@end
