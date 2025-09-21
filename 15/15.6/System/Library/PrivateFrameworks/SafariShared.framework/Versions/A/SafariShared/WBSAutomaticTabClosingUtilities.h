@interface WBSAutomaticTabClosingUtilities : NSObject

@property (class, readonly, nonatomic) char shouldCloseTabsAutomaticallyWhenEnteringForeground;
@property (class, readonly, nonatomic) char userHasPreferenceForAutomaticTabClosingInterval;
@property (class, nonatomic) unsigned long long automaticTabClosingInterval;

+ (void)clearMostDistantLastViewedTime;
+ (void)resetAutomaticTabClosingIntervalPreference;
+ (void)setMostDistantLastViewedTime:(double)a0;

@end
