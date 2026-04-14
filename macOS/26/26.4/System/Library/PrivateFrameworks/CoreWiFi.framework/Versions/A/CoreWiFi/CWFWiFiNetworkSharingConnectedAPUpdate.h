@class NSArray;

@interface CWFWiFiNetworkSharingConnectedAPUpdate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSArray *connectedAPs;
@property unsigned long long connectedAPsUpdateCounter;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToWiFiNetworkSharingConnectedAPUpdate:(id)a0;

@end
