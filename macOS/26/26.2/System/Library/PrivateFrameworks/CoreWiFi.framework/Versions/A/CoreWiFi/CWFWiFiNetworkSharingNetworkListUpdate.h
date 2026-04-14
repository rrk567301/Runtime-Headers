@class NSArray;

@interface CWFWiFiNetworkSharingNetworkListUpdate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSArray *networkList;
@property unsigned long long networkListUpdateCounter;
@property BOOL isAskToShareNetworkAvailable;
@property BOOL isAskToShareRequestFromAppPending;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToWiFiNetworkSharingNetworksUpdate:(id)a0;

@end
