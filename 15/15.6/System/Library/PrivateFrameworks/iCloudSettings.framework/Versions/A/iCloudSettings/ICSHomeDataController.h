@class NSString, NSError, ICSHomeDataModel;

@interface ICSHomeDataController : NSObject {
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ networkRequest;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithAccount:(id)a0;
- (id)cachediCloudHomeDataModel;
- (void)fetchCloudStorage:(char)a0 completion:(void (^)(NSString *))a1;
- (void)fetchCloudStorageInfo:(char)a0 completion:(id /* block */)a1;
- (void)fetchiCloudHomeDataModelAllowingCache:(char)a0 completion:(void (^)(ICSHomeDataModel *, NSError *))a1;
- (id)initWithAccount:(id)a0 launchedFromRootLevel:(char)a1;
- (void)reportStatefulHeaderImpressionWithUrl:(id)a0 payload:(id)a1;

@end
