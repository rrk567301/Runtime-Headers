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

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToWiFiNetworkSharingAskToShareScanResult:(id)a0;

@end
