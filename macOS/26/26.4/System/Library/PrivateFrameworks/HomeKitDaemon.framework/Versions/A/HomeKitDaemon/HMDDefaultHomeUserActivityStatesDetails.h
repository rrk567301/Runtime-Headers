@class HMDHomeActivityHomeAwayUserStatesDetails, HMDHome;

@interface HMDDefaultHomeUserActivityStatesDetails : NSObject <HMDHomeUserActivityStatesDetails, HMDHomePresence, HMDHomePresenceCheck>

@property (nonatomic, readonly) HMDHomeActivityHomeAwayUserStatesDetails *homeAwayUserStatesDetails;
@property (nonatomic, readonly) HMDHome *home;
@property (nonatomic, readonly) BOOL noUserAtHome;
@property (nonatomic, readonly) BOOL anyUserAtHome;

- (void).cxx_destruct;
- (id)init;
- (BOOL)areUsersAtHome:(id)a0;
- (BOOL)isAnyUserAtHome;
- (BOOL)areUsersNotAtHome:(id)a0;
- (id)detailForUser:(id)a0;
- (id)initWithHomeAwayUserStatesDetails:(id)a0;
- (BOOL)isNoUserAtHome;
- (BOOL)isUserAtHome:(id)a0;
- (BOOL)isUserNotAtHome:(id)a0;

@end
