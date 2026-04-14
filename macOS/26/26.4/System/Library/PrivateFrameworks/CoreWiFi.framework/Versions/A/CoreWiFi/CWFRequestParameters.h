@class NSUUID, NSString, NSData, SFAuthorization;

@interface CWFRequestParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSData *authorizationExternalFormData;
@property (copy, nonatomic) NSString *wifiNetworkSharingBundleIDOverride;
@property (copy, nonatomic) NSString *wifiNetworkSharingAccessoryID;
@property (copy, nonatomic) NSData *wifiNetworkSharingNetworkListUpdateEventPredicateData;
@property (copy, nonatomic) NSData *wifiNetworkSharingConnectedAPUpdateEventPredicateData;
@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic) int virtualInterfaceRole;
@property (nonatomic) unsigned long long timeout;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) long long queuePriority;
@property (retain, nonatomic) SFAuthorization *authorization;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)authorizationData;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqualToRequestParameters:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
