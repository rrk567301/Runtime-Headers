@class NSString, NSDictionary, NSData, NSArray, W5WiFiChannel;

@interface W5WiFiScanResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *scanRecord;
@property (copy, nonatomic) NSData *ssid;
@property (copy, nonatomic) NSString *ssidString;
@property (copy, nonatomic) NSString *bssid;
@property (copy, nonatomic) NSArray *supportedSecurityTypes;
@property (nonatomic) int supportedPHYModes;
@property (nonatomic) long long rssi;
@property (nonatomic) long long noise;
@property (nonatomic) char isIBSS;
@property (copy, nonatomic) NSString *countryCode;
@property (nonatomic) long long beaconInterval;
@property (nonatomic) char isPasspoint;
@property (nonatomic) char isPersonalHotspot;
@property (nonatomic) char isAppleSWAP;
@property (copy, nonatomic) NSString *airPortBaseStationModelName;
@property (copy, nonatomic) W5WiFiChannel *channel;
@property (nonatomic) char supportsWEPCipher;
@property (nonatomic) char supportsTKIPCipher;

- (void)dealloc;
- (char)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (int)fastestSupportedPHYMode;
- (long long)strongestSupportedSecurity;
- (char)supportsPHYMode:(int)a0;
- (char)supportsSecurity:(long long)a0;
- (char)isEqualToScanResult:(id)a0;
- (char)isAirPortBaseStation:(out id *)a0 modelID:(out char *)a1;

@end
