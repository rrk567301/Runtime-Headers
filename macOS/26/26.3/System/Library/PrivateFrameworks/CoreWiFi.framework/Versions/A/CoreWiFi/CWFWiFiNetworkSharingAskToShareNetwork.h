@class CWFWiFiNetworkSharingNetwork, CWFWiFiNetworkSharingAskToShareScanResult;

@interface CWFWiFiNetworkSharingAskToShareNetwork : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) CWFWiFiNetworkSharingNetwork *network;
@property (copy) CWFWiFiNetworkSharingAskToShareScanResult *scanResult;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToWiFiNetworkSharingAskToShareNetwork:(id)a0;

@end
