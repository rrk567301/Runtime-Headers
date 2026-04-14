@class NSArray;

@interface CWFWiFiNetworkSharingNetworkListUpdate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSArray *networkList;
@property unsigned long long networkListUpdateCounter;
@property BOOL isAskToShareNetworkAvailable;
@property BOOL isAskToShareRequestFromAppPending;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToWiFiNetworkSharingNetworksUpdate:(id)a0;

@end
