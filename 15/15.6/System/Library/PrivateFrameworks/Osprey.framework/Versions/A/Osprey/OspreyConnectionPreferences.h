@class NSString, OspreyKeychain, NSData, NSDate, NSNumber;

@interface OspreyConnectionPreferences : NSObject {
    OspreyKeychain *_keychain;
    char _certificateDataFetched;
    NSData *_certificateData;
    NSData *_deviceAttestationData;
}

@property (copy, nonatomic) NSString *connectionHost;
@property (copy, nonatomic) NSNumber *deviceAuthenticationVersion;
@property (copy, nonatomic) NSNumber *deviceAttestionVersion;
@property (retain, nonatomic) NSData *certificateData;
@property (copy, nonatomic) NSDate *deviceAttestionExpireOn;
@property (readonly, nonatomic) char isDeviceAttestionExpired;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)deleteAll;
- (id)_certificateDataKey;
- (id)_deviceAttestationDataKey;
- (void)deleteCertificateData;
- (void)deleteDeviceAttestationData;
- (id)deviceAttestationData;
- (id)initWithConnectionHost:(id)a0 keychain:(id)a1;
- (id)initWithDictionary:(id)a0 keychain:(id)a1;
- (void)resetCachedDeviceAttestation;
- (char)setDeviceAttestationData:(id)a0 withExpiration:(id)a1;

@end
