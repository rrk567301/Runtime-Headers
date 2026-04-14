@class NSNumber;

@interface WBSDefaultSearchParameters : NSObject

@property (class, nonatomic, readonly) NSNumber *prefixNavigationalIntentThreshold;
@property (class, nonatomic, readonly) NSNumber *recentSearchesDisplayThresholdInDays;

- (id)init;
- (void).cxx_destruct;

@end
