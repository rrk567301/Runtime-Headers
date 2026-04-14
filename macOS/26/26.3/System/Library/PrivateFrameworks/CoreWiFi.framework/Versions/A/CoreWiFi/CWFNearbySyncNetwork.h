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
- (id)description;
- (id)initWithExternalForm:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToNearbySyncNetwork:(id)a0;
- (BOOL)isNearbyRecommendable;
- (BOOL)isNearbySyncable;
- (id)knownNetworkProfile;
- (void)setKnownNetworkProfile:(id)a0;

@end
