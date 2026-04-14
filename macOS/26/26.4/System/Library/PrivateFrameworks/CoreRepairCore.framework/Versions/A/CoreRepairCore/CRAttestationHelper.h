@class CRFDRBaseDeviceHandler;

@interface CRAttestationHelper : NSObject <CRAttestationProtocol>

@property (retain) CRFDRBaseDeviceHandler *handler;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)challengeComponentsWith:(id)a0 withReply:(id /* block */)a1;
- (void)getStrongComponentsWithReply:(id /* block */)a0;

@end
