@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AXHASecurityHelper : NSObject <AXIDCManagerSecurityDelegate> {
    struct __SecIdentity { } *_appleIDIdentity;
    NSObject<OS_dispatch_queue> *_securityQueue;
}

@property (retain, nonatomic) NSArray *certificateDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHelper;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)securityTrustChainForStream:(id)a0;
- (BOOL)shouldTrustStream:(id)a0;
- (BOOL)trustChainAvailable;
- (void)appleIDDidChange:(id)a0;
- (void)prepareHelper;
- (id)trustChain;
- (id)certificateChainForIdentity:(struct __SecIdentity { } *)a0;
- (id)certificateChainFromTrust:(struct __SecTrust { } *)a0;

@end
