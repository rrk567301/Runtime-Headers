@interface CTPrivateNetworkCapabilities : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isPrivateNetworkSIM;
@property (nonatomic) BOOL isPrivateNetworkPreferredOverWifi;
@property (nonatomic) BOOL isPrivateNetworkModeEnabled;
@property (nonatomic) BOOL hideDataRoaming;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
