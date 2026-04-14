@interface AAiCloudLoginAccountRequester : NSObject

+ (id)delegateParamsForAllDelegates;
+ (id)delegateParamsForiCloudOnly;

- (void)loginWithAccount:(id)a0 forDelegates:(id)a1 completion:(id /* block */)a2;
- (void)loginWithAccount:(id)a0 withFlowID:(id)a1 forDelegates:(id)a2 completion:(id /* block */)a3;

@end
