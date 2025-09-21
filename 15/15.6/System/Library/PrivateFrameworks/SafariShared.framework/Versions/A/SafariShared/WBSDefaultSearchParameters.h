@class NSNumber;

@interface WBSDefaultSearchParameters : NSObject

@property (class, nonatomic, readonly) NSNumber *prefixNavigationalIntentThreshold;
@property (class, nonatomic, readonly) char checkServerCompletionForPrefixNavigationalIntent;

- (id)init;
- (void).cxx_destruct;

@end
