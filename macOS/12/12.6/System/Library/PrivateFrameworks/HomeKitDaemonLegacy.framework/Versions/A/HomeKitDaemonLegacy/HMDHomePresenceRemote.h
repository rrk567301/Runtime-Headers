@class NSDictionary;

@interface HMDHomePresenceRemote : HMFObject <HMDHomePresenceCheck>

@property (readonly, nonatomic) NSDictionary *userPresenceMap;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPresenceByPairingIdentity:(id)a0;
- (id)initWithPresenceByUserId:(id)a0;
- (BOOL)isUserAtHome:(id)a0;
- (BOOL)isUserNotAtHome:(id)a0;
- (BOOL)isAnyUserAtHome;
- (BOOL)isNoUserAtHome;
- (BOOL)areUsersAtHome:(id)a0;
- (BOOL)areUsersNotAtHome:(id)a0;
- (id)regionForUser:(id)a0;

@end
