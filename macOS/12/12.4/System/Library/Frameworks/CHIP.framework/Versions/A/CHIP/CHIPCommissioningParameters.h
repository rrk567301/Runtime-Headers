@class NSData;

@interface CHIPCommissioningParameters : NSObject

@property (copy, nonatomic) NSData *CSRNonce;
@property (copy, nonatomic) NSData *attestationNonce;
@property (copy, nonatomic) NSData *wifiSSID;
@property (copy, nonatomic) NSData *wifiCredentials;
@property (copy, nonatomic) NSData *threadOperationalDataset;

- (void).cxx_destruct;

@end
