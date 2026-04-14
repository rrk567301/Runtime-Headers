@class CWChannel, NSArray, NSDictionary, NSData, NSString;

@interface CWTrimmedNetwork : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_scanRecord;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDictionary *scanRecord;
@property (readonly) NSArray *includedProperties;
@property (readonly) NSData *ssidData;
@property (readonly) NSString *ssid;
@property (readonly) NSString *bssid;
@property (readonly) unsigned long long channelNumber;
@property (readonly) CWChannel *wlanChannel;
@property (readonly) unsigned long long securityType;
@property (readonly) unsigned long long physicalLayerMode;
@property (readonly) long long rssiValue;
@property (readonly) long long noiseMeasurement;
@property (readonly) BOOL ibss;
@property (readonly) NSString *countryCode;
@property (readonly) BOOL isPersonalHotspot;
@property (readonly) BOOL isPasspoint;
@property (readonly) BOOL isUnconfiguredBaseStation;
@property (readonly) NSString *baseStationName;
@property (readonly) BOOL isUnconfiguredAccessory;
@property (readonly) NSString *accessoryFriendlyName;
@property (readonly) BOOL isUnconfiguredAirPlayAccessory;
@property (readonly) BOOL isUnconfiguredAirPrintAccessory;
@property (readonly) BOOL isSecureWACDevice;
@property (readonly) BOOL isP2P;
@property (readonly) BOOL supportsWPS;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)conformsToProtocol:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)countryCode;
- (BOOL)isOpen;
- (unsigned long long)channelNumber;
- (id)ssid;
- (BOOL)ibss;
- (id)ssidData;
- (id)bssid;
- (id)wlanChannel;
- (long long)rssiValue;
- (long long)noiseMeasurement;
- (BOOL)supportsSecurity:(long long)a0;
- (id)scanRecord;
- (id)initWithScanRecord:(id)a0;
- (BOOL)supportsWPS;
- (unsigned long long)securityType;
- (unsigned long long)physicalLayerMode;
- (BOOL)isPersonalHotspot;
- (BOOL)isPasspoint;
- (BOOL)isUnconfiguredAccessory;
- (BOOL)isUnconfiguredAirPlayAccessory;
- (BOOL)isUnconfiguredAirPrintAccessory;
- (BOOL)isSecureWACDevice;
- (id)accessoryFriendlyName;
- (long long)strongestSupportedSecurity;
- (long long)compareSecurity:(id)a0;
- (BOOL)matchesKnownNetworkSecurity:(long long)a0;
- (id)__trimmedScanRecordForNetwork:(id)a0 properties:(id)a1;
- (id)initWithNetwork:(id)a0 properties:(id)a1;
- (id)includedProperties;
- (BOOL)isP2P;
- (BOOL)isUnconfiguredBaseStation;
- (id)baseStationName;
- (BOOL)isEqualToTrimmedNetwork:(id)a0;

@end
