@class NSArray, NSDictionary, NSString, HMDHome, HMDDevice;

@interface HMDHomePresence : HMFObject <HMFLogging, HMDHomePresence>

@property (readonly, nonatomic) NSDictionary *userPresenceMap;
@property (readonly, nonatomic) NSArray *authorizedUsers;
@property (readonly, nonatomic) HMDDevice *lastUpdateByDevice;
@property (readonly, nonatomic) BOOL hasPresenceRegionForAllUsers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HMDHome *home;
@property (readonly, getter=isNoUserAtHome) BOOL noUserAtHome;
@property (readonly, getter=isAnyUserAtHome) BOOL anyUserAtHome;

+ (id)logCategory;

- (id)attributeDescriptions;
- (id)logIdentifier;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)areUsersAtHome:(id)a0;
- (BOOL)areUsersNotAtHome:(id)a0;
- (id)initWithHome:(id)a0 userPresenceMap:(id)a1 lastUpdateByDevice:(id)a2;
- (BOOL)isPresenceRegionKnownForUser:(id)a0;
- (BOOL)isUserAtHome:(id)a0;
- (BOOL)isUserNotAtHome:(id)a0;
- (id)serializedIdentifierDictionary;
- (id)serializedUUIDDictionary;

@end
