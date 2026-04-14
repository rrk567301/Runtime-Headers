@class NSString, LACSecureStorage;

@interface LACSharedModePolicyCoordinatorACMStorage : NSObject <LACSharedModePolicyCoordinatorACMStorage> {
    LACSecureStorage *_storage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)performRequest:(id)a0 completion:(id /* block */)a1;

@end
