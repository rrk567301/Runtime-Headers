@interface WFNetworkFailTracker : NSObject

@property (readonly, nonatomic) int numConsecutiveFails;
@property (readonly, nonatomic) double lastFailTimeInSeconds;

- (char)lastFailTimeExpiredForSettings:(id)a0;
- (void)incrementFailCount;

@end
