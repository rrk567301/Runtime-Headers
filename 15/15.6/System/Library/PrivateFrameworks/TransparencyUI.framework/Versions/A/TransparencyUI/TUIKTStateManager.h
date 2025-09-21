@class NSUUID, KTStatusResult;

@interface TUIKTStateManager : NSObject {
    KTStatusResult *_ktStatusResult;
}

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) unsigned long long optIn;
@property (readonly, nonatomic) unsigned long long recentFailedEventIdsCount;
@property (readonly, nonatomic) NSUUID *firstRecentFailedEventId;
@property (readonly, nonatomic) long long expectedResolutionDays;
@property (nonatomic) char isVerifyCDPRunning;

- (id)init;
- (void).cxx_destruct;
- (id)stateDescription;
- (id)stateLabel;
- (char)isCDPErrorState;
- (char)isErrorState;
- (void)isManateeAvailableWithCompletion:(id /* block */)a0;
- (void)setExpectedResolutionDays:(id)a0;
- (char)shouldMaybeUpdateMonitor;
- (void)updateStateWithKTStatusResult:(id)a0;

@end
