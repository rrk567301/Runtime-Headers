@class NSArray, NSDictionary, NSString, HMDHome, HMDDevice;

@interface HMDHomePresence : HMFObject <HMFLogging, HMDHomePresence>

@property (readonly, nonatomic) NSDictionary *userPresenceMap;
@property (readonly, nonatomic) NSArray *authorizedUsers;
@property (readonly, nonatomic) HMDDevice *lastUpdateByDevice;
@property (readonly, nonatomic) char hasPresenceRegionForAllUsers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HMDHome *home;

+ (id)logCategory;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (char)areUsersAtHome:(id)a0;
- (char)isAnyUserAtHome;
- (char)areUsersNotAtHome:(id)a0;
- (id)initWithHome:(id)a0 userPresenceMap:(id)a1 lastUpdateByDevice:(id)a2;
- (char)isNoUserAtHome;
- (char)isPresenceRegionKnownForUser:(id)a0;
- (char)isUserAtHome:(id)a0;
- (char)isUserNotAtHome:(id)a0;
- (id)serializedIdentifierDictionary;
- (id)serializedUUIDDictionary;

@end
