@class NSString, NSData;

@interface CWFWiFiNetworkSharingAskToShareScanResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *networkName;
@property (copy) NSData *SSID;
@property double signalStrength;
@property BOOL isConnected;
@property BOOL wasFoundOnAccessory;
@property double signalStrengthOnAccessory;
@property BOOL isConnectedOnAccessory;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToWiFiNetworkSharingAskToShareScanResult:(id)a0;

@end
