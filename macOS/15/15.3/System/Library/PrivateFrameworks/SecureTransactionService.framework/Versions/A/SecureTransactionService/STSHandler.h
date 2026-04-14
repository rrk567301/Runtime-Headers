@class NSArray, STSHardwareManagerWrapper, NSData, STSCredential;
@protocol NFSession;

@interface STSHandler : NSObject

@property (retain, nonatomic) STSHardwareManagerWrapper *nfHwManager;
@property (retain, nonatomic) id<NFSession> startedNFSession;
@property (retain, nonatomic) NSData *handoffToken;
@property (readonly, nonatomic) STSCredential *activeSTSCredential;
@property (readonly, nonatomic) NSArray *activeSTSCredentials;
@property (readonly, nonatomic) unsigned char supportedCredentialType;

- (void).cxx_destruct;
- (void)_tearDown;
- (id)setActiveCredential:(id)a0;
- (id)setActiveCredentials:(id)a0;
- (void)tearDownWithCompletion:(id /* block */)a0;
- (BOOL)activateChildSessionOnSetActiveCredential;
- (id)activateWithHandoffToken:(id)a0;
- (id)nfHardwareManager;
- (id)startNFSessionWithCompletion:(id /* block */)a0;

@end
