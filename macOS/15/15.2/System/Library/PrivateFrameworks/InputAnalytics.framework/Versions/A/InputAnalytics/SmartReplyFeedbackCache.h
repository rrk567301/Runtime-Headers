@class NSString, NSArray;

@interface SmartReplyFeedbackCache : NSObject

@property (copy, nonatomic) NSString *mostRecentSmartRepliesThreadIdString;
@property (copy, nonatomic) NSString *mostRecentSmartRepliesFeatureModelString;
@property (copy, nonatomic) NSString *mostRecentSmartRepliesOriginalContentString;
@property (retain, nonatomic) NSArray *mostRecentSmartRepliesResponseTexts;

- (void).cxx_destruct;

@end
