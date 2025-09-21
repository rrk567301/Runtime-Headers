@interface SCDAElectionWindow : NSObject

+ (double)electionWindowTimeRemaining:(unsigned long long)a0 fromNow:(unsigned long long)a1;
+ (char)isNow:(unsigned long long)a0 beyondMinimumAdvertisingWindow:(unsigned long long)a1;

@end
