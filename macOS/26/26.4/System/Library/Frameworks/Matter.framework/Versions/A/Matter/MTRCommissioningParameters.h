@class NSString, NSArray, NSData, NSNumber;
@protocol MTRDeviceAttestationDelegate;

@interface MTRCommissioningParameters : NSObject <NSCopying>

@property (copy, nonatomic) NSData *CSRNonce;
@property (copy, nonatomic) NSNumber *failSafeExpiryTimeoutSecs;
@property (nonatomic) BOOL preventNetworkScans;
@property (copy, nonatomic) NSData *csrNonce;
@property (copy, nonatomic) NSData *attestationNonce;
@property (copy, nonatomic) NSData *wifiSSID;
@property (copy, nonatomic) NSData *wifiCredentials;
@property (copy, nonatomic) NSData *threadOperationalDataset;
@property (retain, nonatomic) id<MTRDeviceAttestationDelegate> deviceAttestationDelegate;
@property (copy, nonatomic) NSNumber *failSafeTimeout;
@property (nonatomic) BOOL skipCommissioningComplete;
@property (copy, nonatomic) NSString *countryCode;
@property (nonatomic) BOOL readEndpointInformation;
@property (copy, nonatomic) NSNumber *acceptedTermsAndConditions;
@property (copy, nonatomic) NSNumber *acceptedTermsAndConditionsVersion;
@property (copy, nonatomic) NSArray *extraAttributesToRead;
@property (nonatomic) BOOL forceWiFiScan;
@property (nonatomic) BOOL forceThreadScan;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;

@end
