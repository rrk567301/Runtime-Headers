@class NSNumber;

@interface WBSDefaultSearchParameters : NSObject

@property (class, nonatomic, readonly) NSNumber *prefixNavigationalIntentThreshold;
@property (class, nonatomic, readonly) BOOL checkServerCompletionForPrefixNavigationalIntent;

- (id)init;
- (void).cxx_destruct;

@end
