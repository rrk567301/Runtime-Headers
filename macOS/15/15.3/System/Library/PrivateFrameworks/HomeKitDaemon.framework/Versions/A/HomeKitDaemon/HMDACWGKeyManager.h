@class HMFFlow, NSUUID, NSData, NSError, HMCContext;

@interface HMDACWGKeyManager : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ keychainStore;
}

@property (class, nonatomic, readonly) HMDACWGKeyManager *shared;

- (id)init;
- (void)getIssuerKeyPairExternalRepresentationFromKeychainWithCompletionHandler:(void (^)(NSData *))a0;
- (void)getOrCreateIssuerKeyAndSaveToSharedUserReverseShareWithHomeUUID:(NSUUID *)a0 context:(HMCContext *)a1 flow:(HMFFlow *)a2 completionHandler:(void (^)(NSData *, NSError *))a3;
- (void)getOrCreateIssuerKeyPairExternalRepresentationWithFlow:(HMFFlow *)a0 completionHandler:(void (^)(NSData *, NSError *))a1;

@end
