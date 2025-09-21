@class CWChannel, NSArray, NSDictionary, NSData, NSString;

@interface CWTrimmedNetwork : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_scanRecord;
}

@property (class, readonly) char supportsSecureCoding;

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
@property (readonly) char ibss;
@property (readonly) NSString *countryCode;
@property (readonly) char isPersonalHotspot;
@property (readonly) char isPasspoint;
@property (readonly) char isUnconfiguredBaseStation;
@property (readonly) NSString *baseStationName;
@property (readonly) char isUnconfiguredAccessory;
@property (readonly) NSString *accessoryFriendlyName;
@property (readonly) char isUnconfiguredAirPlayAccessory;
@property (readonly) char isUnconfiguredAirPrintAccessory;
@property (readonly) char isSecureWACDevice;
@property (readonly) char isP2P;
@property (readonly) char hasNon6GHzRNRChannel;
@property (readonly) char supportsWPS;

- (void)dealloc;
- (char)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)countryCode;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isOpen;
- (id)baseStationName;
- (char)isUnconfiguredAirPrintAccessory;
- (id)__trimmedScanRecordForNetwork:(id)a0 properties:(id)a1;
- (id)accessoryFriendlyName;
- (id)bssid;
- (unsigned long long)channelNumber;
- (long long)compareSecurity:(id)a0;
- (char)hasNon6GHzRNRChannel;
- (char)ibss;
- (id)includedProperties;
- (id)initWithNetwork:(id)a0 properties:(id)a1;
- (id)initWithScanRecord:(id)a0;
- (char)isEqualToTrimmedNetwork:(id)a0;
- (char)isP2P;
- (char)isPasspoint;
- (char)isPersonalHotspot;
- (char)isSecureWACDevice;
- (char)isUnconfiguredAccessory;
- (char)isUnconfiguredAirPlayAccessory;
- (char)isUnconfiguredBaseStation;
- (char)matchesKnownNetworkSecurity:(long long)a0;
- (long long)noiseMeasurement;
- (unsigned long long)physicalLayerMode;
- (long long)rssiValue;
- (id)scanRecord;
- (unsigned long long)securityType;
- (id)ssid;
- (id)ssidData;
- (long long)strongestSupportedSecurity;
- (char)supportsSecurity:(long long)a0;
- (char)supportsWPS;
- (id)wlanChannel;

@end
