@class NSString, STRegionRatingsRequestOptions, ACAccount, NSNumber, NSError;

@interface STStorefrontClient : NSObject <STStorefrontClientProtocol> {
    void /* unknown type, empty encoding */ amsStorefrontClient;
}

- (id)init;
- (void).cxx_destruct;
- (void)fetchStorefrontFromAMSForChildWithDSID:(NSNumber *)a0 parentAccount:(ACAccount *)a1 completionHandler:(void (^)(NSString *, NSError *))a2;
- (void)fetchStorefrontFromAMSForLocalUserWithCompletionHandler:(void (^)(NSString *, NSError *))a0;
- (void)fetchStorefrontFromAMSWith:(STRegionRatingsRequestOptions *)a0 completionHandler:(void (^)(NSString *, NSError *))a1;
- (id)fetchStorefrontFromLocale:(id)a0 error:(id *)a1;
- (void)fetchStorefrontWithOptions:(STRegionRatingsRequestOptions *)a0 completionHandler:(void (^)(NSString *, NSError *))a1;
- (id)initWithAmsStorefrontClient:(id)a0;

@end
