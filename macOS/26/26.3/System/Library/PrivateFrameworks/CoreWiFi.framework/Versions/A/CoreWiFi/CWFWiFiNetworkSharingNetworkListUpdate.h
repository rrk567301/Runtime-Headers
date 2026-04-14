@class NSArray;

@interface CWFWiFiNetworkSharingNetworkListUpdate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSArray *networkList;
@property unsigned long long networkListUpdateCounter;
@property BOOL isAskToShareNetworkAvailable;
@property BOOL isAskToShareRequestFromAppPending;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToWiFiNetworkSharingNetworksUpdate:(id)a0;

@end
