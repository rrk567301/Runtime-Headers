@class NSString, NSDictionary, CWFChannel, CWFNetworkProfile;

@interface CWFNearbySyncNetwork : NSObject {
    CWFNetworkProfile *_knownNetworkProfile;
}

@property (copy) CWFNetworkProfile *knownNetworkProfile;
@property (copy) NSString *password;
@property (copy) NSDictionary *captivePortalCredentials;
@property (copy) CWFChannel *channel;
@property (readonly) BOOL isNearbySyncable;
@property (readonly) BOOL isNearbyRecommendable;
@property (readonly) BOOL isNearbyBrokenBackhaulStateSyncable;

+ (BOOL)supportsSecureCoding;

- (id)externalForm;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithExternalForm:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToNearbySyncNetwork:(id)a0;
- (BOOL)isNearbyRecommendable;
- (BOOL)isNearbySyncable;
- (id)knownNetworkProfile;
- (void)setKnownNetworkProfile:(id)a0;

@end
