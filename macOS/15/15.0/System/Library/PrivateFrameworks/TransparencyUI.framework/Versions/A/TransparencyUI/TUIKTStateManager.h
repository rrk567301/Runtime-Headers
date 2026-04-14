@class KTStatusResult;

@interface TUIKTStateManager : NSObject

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) KTStatusResult *ktStatusResult;
@property (readonly, nonatomic) long long expectedResolutionDays;
@property (nonatomic) BOOL isVerifyCDPRunning;

- (id)init;
- (void).cxx_destruct;
- (id)stateDescription;
- (id)stateLabel;
- (BOOL)isCDPErrorState;
- (BOOL)isErrorState;
- (void)isManateeAvailableWithCompletion:(id /* block */)a0;
- (void)setExpectedResolutionDays:(id)a0;
- (BOOL)shouldMaybeUpdateMonitor;
- (void)updateStateWithKTStatusResult:(id)a0;

@end
