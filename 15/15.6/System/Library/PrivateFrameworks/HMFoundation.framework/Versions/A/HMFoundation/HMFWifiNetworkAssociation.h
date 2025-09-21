@class HMFMACAddress, NSString;

@interface HMFWifiNetworkAssociation : HMFObject

@property (readonly) HMFMACAddress *MACAddress;
@property (readonly) NSString *SSID;
@property (readonly) char requiresPassword;
@property (readonly) HMFMACAddress *BSSID;
@property (readonly) NSString *gatewayIPAddress;
@property (readonly) HMFMACAddress *gatewayMACAddress;

- (void).cxx_destruct;
- (id)initWithMACAddress:(id)a0 SSID:(id)a1 requiresPassword:(char)a2 BSSID:(id)a3 gatewayIPAddress:(id)a4 gatewayMACAddress:(id)a5;

@end
