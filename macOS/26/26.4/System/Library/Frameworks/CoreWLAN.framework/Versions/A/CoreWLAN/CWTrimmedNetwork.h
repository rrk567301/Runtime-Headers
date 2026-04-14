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
@property (readonly) BOOL hasNon6GHzRNRChannel;
@property (readonly) BOOL supportsWPS;

- (BOOL)isPasspoint;
- (id)ssid;
- (id)bssid;
- (BOOL)isOpen;
- (unsigned long long)securityType;
- (BOOL)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)strongestSupportedSecurity;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)scanRecord;
- (unsigned long long)channelNumber;
- (id)countryCode;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isPersonalHotspot;
- (void)dealloc;
- (BOOL)supportsSecurity:(long long)a0;
- (id)baseStationName;
- (BOOL)isUnconfiguredAirPrintAccessory;
- (id)__trimmedScanRecordForNetwork:(id)a0 properties:(id)a1;
- (id)accessoryFriendlyName;
- (long long)compareSecurity:(id)a0;
- (BOOL)hasNon6GHzRNRChannel;
- (BOOL)ibss;
- (id)includedProperties;
- (id)initWithNetwork:(id)a0 properties:(id)a1;
- (id)initWithScanRecord:(id)a0;
- (BOOL)isEqualToTrimmedNetwork:(id)a0;
- (BOOL)isP2P;
- (BOOL)isSecureWACDevice;
- (BOOL)isUnconfiguredAccessory;
- (BOOL)isUnconfiguredAirPlayAccessory;
- (BOOL)isUnconfiguredBaseStation;
- (BOOL)matchesKnownNetworkSecurity:(long long)a0;
- (long long)noiseMeasurement;
- (unsigned long long)physicalLayerMode;
- (long long)rssiValue;
- (id)ssidData;
- (BOOL)supportsWPS;
- (id)wlanChannel;

@end
