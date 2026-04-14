@interface CRAttestationHelper : NSObject <CRAttestationProtocol>

+ (id)sharedInstance;

- (void)challengeComponentsWith:(id)a0 withReply:(id /* block */)a1;
- (void)getStrongComponentsWithReply:(id /* block */)a0;

@end
