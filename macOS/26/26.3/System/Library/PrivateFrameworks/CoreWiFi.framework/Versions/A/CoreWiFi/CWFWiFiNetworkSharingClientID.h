@class NSString;

@interface CWFWiFiNetworkSharingClientID : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *bundleID;
@property (copy) NSString *accessoryID;

+ (id)clientIDWithAccessoryID:(id)a0 bundleID:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAccessoryID:(id)a0 bundleID:(id)a1;
- (BOOL)isEqualToWiFiNetworkSharingClientID:(id)a0;

@end
