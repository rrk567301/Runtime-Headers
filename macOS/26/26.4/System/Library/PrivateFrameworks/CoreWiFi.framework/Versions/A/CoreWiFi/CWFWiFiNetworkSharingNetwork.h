@class NSString, NSDictionary, CWFWiFiNetworkSharingNetworkID, NSData, CWFWiFiNetworkSharingEAPCredentials, NSDate;

@interface CWFWiFiNetworkSharingNetwork : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) CWFWiFiNetworkSharingNetworkID *wifiNetworkSharingNetworkID;
@property (readonly) NSString *networkName;
@property (copy) NSData *SSID;
@property unsigned long long supportedSecurityTypes;
@property BOOL isHidden;
@property (copy) NSString *password;
@property (copy, nonatomic) CWFWiFiNetworkSharingEAPCredentials *EAPCredentials;
@property (copy) NSDate *firstSharedDate;
@property (copy) NSDate *lastModifiedDate;
@property BOOL isCaptive;
@property (copy) NSDictionary *captivePortalCredentials;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToWiFiNetworkSharingNetwork:(id)a0;

@end
