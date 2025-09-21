@class NSURL, NSData, AMSSendableBag, NSError;

@interface AMSFairPlayDeviceIdentityNetworkProvider : NSObject <AMSFairPlayDeviceIdentityNetworkProviderProtocol> {
    void /* unknown type, empty encoding */ session;
}

- (id)initWithSession:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)fpdiNetworkResponseFor:(NSURL *)a0 data:(NSData *)a1 bag:(AMSSendableBag *)a2 completionHandler:(void (^)(NSData *, NSError *))a3;
- (void)fpdiNetworkResponseFor:(NSURL *)a0 data:(NSData *)a1 completionHandler:(void (^)(NSData *, NSError *))a2;

@end
