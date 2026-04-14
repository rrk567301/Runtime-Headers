@class NSDictionary, HMDHome, NSString;

@interface HMDHomeActivityHomeAwayUserStatesDetails : HMFObject <HMDHomePresence>

@property (readonly, nonatomic) NSDictionary *userActivityStateMap;
@property (readonly, weak, nonatomic) HMDHome *home;
@property (readonly, getter=isNoUserAtHome) BOOL noUserAtHome;
@property (readonly, getter=isAnyUserAtHome) BOOL anyUserAtHome;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)areUsersAtHome:(id)a0;
- (BOOL)_isUserConfirmedAtHome:(id)a0;
- (BOOL)_isUserConfirmedAway:(id)a0;
- (BOOL)areUsersNotAtHome:(id)a0;
- (id)detailForUser:(id)a0;
- (id)initWithMap:(id)a0 home:(id)a1;
- (BOOL)isUserAtHome:(id)a0;
- (BOOL)isUserNotAtHome:(id)a0;

@end
