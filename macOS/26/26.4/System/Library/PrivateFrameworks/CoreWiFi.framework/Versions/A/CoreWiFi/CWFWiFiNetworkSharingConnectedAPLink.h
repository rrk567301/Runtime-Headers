@class CWFMACAddressHash, CWFChannel;

@interface CWFWiFiNetworkSharingConnectedAPLink : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) CWFChannel *channel;
@property (copy) CWFMACAddressHash *bssidHash;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToWiFiNetworkSharingConnectedAPLink:(id)a0;

@end
