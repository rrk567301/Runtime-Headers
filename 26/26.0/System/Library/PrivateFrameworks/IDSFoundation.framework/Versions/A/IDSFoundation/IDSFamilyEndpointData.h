@class NSString;

@interface IDSFamilyEndpointData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *deviceColor;
@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSString *productVersion;
@property (retain, nonatomic) NSString *deviceUniqueID;
@property (nonatomic) long long deviceType;

- (id)initWithDictionary:(id)a0;
- (id)debugDescription;
- (BOOL)isEqualTo:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDeviceName:(id)a0 privateDeviceData:(id)a1;

@end
