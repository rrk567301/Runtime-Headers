@class PKPeerPaymentDeviceScoreAttributes;

@interface PKPeerPaymentDeviceScoreEncryptedPayloadManager : NSObject {
    BOOL _isScoringInProgress;
    unsigned long long _pendingDeviceScoreEncryptedPayloadVersion;
}

@property (readonly, copy, nonatomic) PKPeerPaymentDeviceScoreAttributes *currentAttributes;

- (void).cxx_destruct;
- (id)_errorForUnavailableDeviceScoreWithUnderlyingError:(id)a0;
- (void)_setupDeviceScoreService;
- (void)deviceScoreWithCompletion:(id /* block */)a0;
- (id)initWithDeviceScoreAttributes:(id)a0;
- (void)provideSessionFeedbackWithIngested:(BOOL)a0;
- (void)setDeviceScoreEncryptedPayloadVersion:(unsigned long long)a0;
- (void)updateWithNewAttributes:(id)a0;

@end
