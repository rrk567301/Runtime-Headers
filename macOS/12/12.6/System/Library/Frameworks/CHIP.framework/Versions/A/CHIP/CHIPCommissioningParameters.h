@class NSData, NSNumber;
@protocol CHIPDeviceAttestationDelegate;

@interface CHIPCommissioningParameters : NSObject

@property (copy, nonatomic) NSData *CSRNonce;
@property (copy, nonatomic) NSData *attestationNonce;
@property (copy, nonatomic) NSData *wifiSSID;
@property (copy, nonatomic) NSData *wifiCredentials;
@property (copy, nonatomic) NSData *threadOperationalDataset;
@property (retain, nonatomic) id<CHIPDeviceAttestationDelegate> deviceAttestationDelegate;
@property (copy, nonatomic) NSNumber *failSafeExpiryTimeoutSecs;

- (void).cxx_destruct;

@end
