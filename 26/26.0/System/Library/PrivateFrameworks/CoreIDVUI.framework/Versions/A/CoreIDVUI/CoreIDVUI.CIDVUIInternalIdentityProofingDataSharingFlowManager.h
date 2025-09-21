@class NSError;

@interface CoreIDVUI.CIDVUIInternalIdentityProofingDataSharingFlowManager : NSObject {
    void /* unknown type, empty encoding */ dataSharingFlowManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)checkUserConsentWithCompletionHandler:(void (^)(BOOL, NSError *))a0;
- (void)fetchUserConsentWithCompletionHandler:(void (^)(unsigned long long, NSError *))a0;
- (void)didChangeUserConsentWithConsent:(unsigned long long)a0 completionHandler:(void (^)(NSError *))a1;

@end
