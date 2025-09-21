@class NSString, NSArray, NSData, NSNumber;

@interface NFHardwareSecureElementInfo : NSObject <NSSecureCoding> {
    NSData *_rsaCertificateAsData;
    NSData *_ecdsaCertificateAsData;
    NSData *_eckaCertificateAsData;
    NSData *_serialNumberAsData;
    NSData *_systemOSSerialNumberAsData;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long OSVersion;
@property (readonly, nonatomic) unsigned long long fullOSVersion;
@property (readonly, nonatomic) unsigned long long firmwareVersion;
@property (readonly, retain, nonatomic) NSNumber *compiledFWVersion;
@property (readonly, nonatomic) unsigned long long hardwareVersion;
@property (readonly, nonatomic) unsigned long long deviceType;
@property (readonly, retain, nonatomic) NSNumber *sequenceCounter;
@property (readonly, nonatomic) NSNumber *expectedSequenceCounter;
@property (readonly, retain, nonatomic) NSNumber *referenceCounter;
@property (readonly, nonatomic) unsigned long long osid;
@property (readonly, retain, nonatomic) NSNumber *otherOSValid;
@property (readonly, nonatomic) char restrictedMode;
@property (readonly, nonatomic) char restrictedPerformanceMode;
@property (readonly, nonatomic) char osUpdateMode;
@property (readonly, nonatomic) unsigned long long OSMode;
@property (readonly, nonatomic) unsigned long long signingKeyType;
@property (readonly, nonatomic) unsigned long long migrationState;
@property (readonly, nonatomic) unsigned long long migrationContext;
@property (readonly, retain, nonatomic) NSNumber *migrationPackages;
@property (readonly, retain, nonatomic) NSNumber *migrationInstances;
@property (readonly, retain, nonatomic) NSString *platformIdentifier;
@property (readonly, retain, nonatomic) NSString *serialNumber;
@property (readonly, retain, nonatomic) NSString *systemOSSerialNumber;
@property (readonly, retain, nonatomic) NSString *rsaCertificate;
@property (readonly, retain, nonatomic) NSString *ecdsaCertificate;
@property (readonly, retain, nonatomic) NSString *eckaCertificate;
@property (readonly, nonatomic) unsigned long long appletMap;
@property (readonly, retain, nonatomic) NSNumber *persistentConfigID;
@property (readonly, retain, nonatomic) NSString *rootKeyID;
@property (readonly, retain, nonatomic) NSString *osKeyID;
@property (readonly, retain, nonatomic) NSString *firmwareKeyID;
@property (readonly, retain, nonatomic) NSString *nonce;
@property (readonly, retain, nonatomic) NSData *manifestQuery;
@property (readonly, nonatomic) char personalisable;
@property (readonly, retain, nonatomic) NSArray *bootHistory;
@property (readonly, nonatomic) unsigned long long supportedTechnologies;
@property (readonly, nonatomic) unsigned long long seType;
@property (readonly, retain, nonatomic) NSString *atrString;
@property (readonly, nonatomic) char jcopTooOld;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)serialNumber;
- (id)asDictionary;
- (id)eckaCertificate;
- (void)setBootHistory:(id)a0;
- (void)_setIsInRestrictedMode:(char)a0;
- (void)_setIsInRestrictedPerformanceMode:(char)a0;
- (id)ecdsaCertificate;
- (id)rsaCertificate;
- (id)systemOSSerialNumber;

@end
