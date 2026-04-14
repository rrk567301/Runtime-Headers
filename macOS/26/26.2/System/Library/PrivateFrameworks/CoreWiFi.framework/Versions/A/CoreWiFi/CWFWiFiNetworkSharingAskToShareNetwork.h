@class CWFWiFiNetworkSharingNetwork, CWFWiFiNetworkSharingAskToShareScanResult;

@interface CWFWiFiNetworkSharingAskToShareNetwork : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) CWFWiFiNetworkSharingNetwork *network;
@property (copy) CWFWiFiNetworkSharingAskToShareScanResult *scanResult;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToWiFiNetworkSharingAskToShareNetwork:(id)a0;

@end
