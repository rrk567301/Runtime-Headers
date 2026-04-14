@class NSString, OspreyKeychain, NSData, NSDate, NSNumber;

@interface OspreyConnectionPreferences : NSObject {
    OspreyKeychain *_keychain;
    BOOL _certificateDataFetched;
    NSData *_certificateData;
    NSData *_deviceAttestationData;
}

@property (copy, nonatomic) NSString *connectionHost;
@property (copy, nonatomic) NSNumber *deviceAuthenticationVersion;
@property (copy, nonatomic) NSNumber *deviceAttestionVersion;
@property (retain, nonatomic) NSData *certificateData;
@property (copy, nonatomic) NSDate *deviceAttestionExpireOn;
@property (readonly, nonatomic) BOOL isDeviceAttestionExpired;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)deleteAll;
- (id)initWithConnectionHost:(id)a0 keychain:(id)a1;
- (id)initWithDictionary:(id)a0 keychain:(id)a1;
- (void)resetCachedDeviceAttestation;
- (id)_certificateDataKey;
- (void)deleteCertificateData;
- (id)_deviceAttestationDataKey;
- (BOOL)setDeviceAttestationData:(id)a0 withExpiration:(id)a1;
- (id)deviceAttestationData;
- (void)deleteDeviceAttestationData;

@end
