@class PKSecureElement, NSString, PKDeviceScorer;

@interface PKPeerPaymentDeviceScoreEncryptedPayloadManager : NSObject {
    BOOL _isScoringInProgress;
    unsigned long long _pendingDeviceScoreEncryptedPayloadVersion;
    PKDeviceScorer *_deviceScorer;
    PKSecureElement *_secureElement;
    NSString *_endpointIdentifier;
    NSString *_recipientAddress;
    unsigned long long _quoteDestinationType;
}

@property (nonatomic) unsigned long long deviceScoreEncryptedPayloadVersion;

- (void).cxx_destruct;
- (id)initWithEndpointIdentifier:(id)a0 recipientAddress:(id)a1 deviceScoreEncryptedPayloadVersion:(unsigned long long)a2 quoteDestinationType:(unsigned long long)a3;
- (void)updateAttributesWithEndpointIdentifier:(id)a0 recipientAddress:(id)a1 quoteDestinationType:(unsigned long long)a2;
- (void)deviceScoreWithCompletion:(id /* block */)a0;
- (void)didIngestPayload;
- (void)_setupDeviceScoreService;
- (void)_cristalV1DeviceScoreWithKey:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)_transactionTypeForEndpointIdentifier;
- (id)_createContextForDeviceScorer;
- (id)_errorForUnavailableDeviceScoreWithUnderlyingError:(id)a0;

@end
