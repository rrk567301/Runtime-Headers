@class CWFWiFiNetworkSharingNetwork, CWFWiFiNetworkSharingAskToShareScanResult;

@interface CWFWiFiNetworkSharingAskToShareNetwork : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) CWFWiFiNetworkSharingNetwork *network;
@property (copy) CWFWiFiNetworkSharingAskToShareScanResult *scanResult;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToWiFiNetworkSharingAskToShareNetwork:(id)a0;

@end
