@class TPSContextualBiomeEvent, NSString, NSDate;

@interface TPSAnalyticsUsageInfo : NSObject

@property (nonatomic) char overrideHoldout;
@property (retain, nonatomic) NSDate *firstShownDate;
@property (retain, nonatomic) NSDate *notifiedDate;
@property (copy, nonatomic) TPSContextualBiomeEvent *usageEvent;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long desiredOutcomeCount;

- (void).cxx_destruct;

@end
