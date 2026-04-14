@class NSArray;

@interface CWFWiFiNetworkSharingNetworkListUpdate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSArray *networkList;
@property unsigned long long networkListUpdateCounter;
@property BOOL isAskToShareNetworkAvailable;
@property BOOL isAskToShareRequestFromAppPending;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToWiFiNetworkSharingNetworksUpdate:(id)a0;

@end
