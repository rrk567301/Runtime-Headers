@class CNAtomicUnsignedIntegerGenerator, NSString, NSObject;
@protocol CNContactPosterDataStore, OS_dispatch_queue;

@interface _ListenerStoreAdapter : NSObject <CNContactPosterDataService>

@property (readonly) id<CNContactPosterDataStore> store;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) CNAtomicUnsignedIntegerGenerator *integerGenerator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStore:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)countForFetchRequest:(id)a0 reply:(id /* block */)a1;
- (void)executeCreateRequest:(id)a0 reply:(id /* block */)a1;
- (void)executeDeleteRequest:(id)a0 reply:(id /* block */)a1;
- (void)executeFetchRequest:(id)a0 reply:(id /* block */)a1;
- (void)executeUpdateRequest:(id)a0 reply:(id /* block */)a1;

@end
