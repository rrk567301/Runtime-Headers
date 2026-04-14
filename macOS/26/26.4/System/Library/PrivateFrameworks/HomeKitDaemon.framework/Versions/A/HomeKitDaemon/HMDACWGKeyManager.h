@class HMFFlow, NSUUID, NSString, NSData, NSError, HMCContext;

@interface HMDACWGKeyManager : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ keychainStore;
}

@property (class, nonatomic, readonly) HMDACWGKeyManager *shared;

- (id)init;
- (void)getIssuerKeyPairExternalRepresentationFromKeychainForHomeUUID:(NSUUID *)a0 completionHandler:(void (^)(NSData *, NSString *, long long, NSError *))a1;
- (void)getOrCreateIssuerKeyAndSaveIfNeededWithHome:(NSUUID *)a0 user:(NSUUID *)a1 context:(HMCContext *)a2 shouldRoll:(BOOL)a3 completionHandler:(void (^)(NSData *, NSError *))a4;
- (void)getOrCreateIssuerKeyPairExternalRepresentationWithHomeUUID:(NSUUID *)a0 shouldRoll:(BOOL)a1 flow:(HMFFlow *)a2 requireCloudFetch:(BOOL)a3 shouldAwaitOnPush:(BOOL)a4 completionHandler:(void (^)(NSData *, BOOL, NSError *))a5;

@end
