@class NSDictionary, NSString;

@interface HMDHomePresenceRemote : HMFObject <HMDHomePresenceCheck>

@property (readonly, nonatomic) NSDictionary *userPresenceMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)areUsersAtHome:(id)a0;
- (char)isAnyUserAtHome;
- (char)areUsersNotAtHome:(id)a0;
- (id)initWithPresenceByPairingIdentity:(id)a0;
- (id)initWithPresenceByUserId:(id)a0;
- (char)isNoUserAtHome;
- (char)isUserAtHome:(id)a0;
- (char)isUserNotAtHome:(id)a0;
- (id)regionForUser:(id)a0;

@end
