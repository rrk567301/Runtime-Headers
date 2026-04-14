@class NSString, NSDictionary, NSData, NSNumber;

@interface _IDSRegisteredDevice : NSObject

@property (nonatomic) BOOL defaultLocalDevice;
@property (nonatomic) BOOL locallyPresent;
@property (nonatomic) BOOL defaultPariedDevice;
@property (nonatomic) BOOL isActivePairedDevice;
@property (nonatomic) BOOL isHSATrustedDevice;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *hardwareVersion;
@property (retain, nonatomic) NSString *idsIdentifierOverride;
@property (retain, nonatomic) NSString *selfHandle;
@property (retain, nonatomic) NSString *nsuuid;
@property (retain, nonatomic) NSNumber *pairingProtocolVersion;
@property (retain, nonatomic) NSNumber *minimumCompatibilityVersion;
@property (retain, nonatomic) NSNumber *maximumCompatibilityVersion;
@property (retain, nonatomic) NSNumber *pairingType;
@property (retain, nonatomic) NSData *pushToken;
@property (retain, nonatomic) NSDictionary *privateDeviceData;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
