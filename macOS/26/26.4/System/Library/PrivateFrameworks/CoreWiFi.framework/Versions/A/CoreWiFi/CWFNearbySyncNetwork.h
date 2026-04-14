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
- (id)initWithExternalForm:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToNearbySyncNetwork:(id)a0;
- (BOOL)isNearbyRecommendable;
- (BOOL)isNearbySyncable;
- (id)knownNetworkProfile;
- (void)setKnownNetworkProfile:(id)a0;

@end
