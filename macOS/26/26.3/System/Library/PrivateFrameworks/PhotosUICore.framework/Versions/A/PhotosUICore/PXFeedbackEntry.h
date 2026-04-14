@class NSString, NSMutableDictionary, NSDictionary, NSDate;

@interface PXFeedbackEntry : NSObject <NSSecureCoding> {
    NSDictionary *_feedbackItemDetails;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *feedbackItemsDict;
@property (nonatomic) long long generalFeedback;
@property (copy, nonatomic) NSString *systemID;
@property (retain, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) BOOL alreadyCollected;

+ (id)negativeFeedbackForMemoriesKeys;
+ (id)positiveFeedbackForAutoLoopKeys;
+ (id)negativeFeedbackForAutoLoopKeys;
+ (id)positiveFeedbackForMemoriesKeys;
+ (id)createFakeTestEntry;
+ (id)createFakeTestFeedbackDictionary;
+ (id)negativeAlchemistFeedbackForImageQualityKeys;
+ (id)negativeAlchemistV2FeedbackForImageQualityKeys;
+ (id)negativeAlchemistV2FeedbackForImageQualityLiveOnKeys;
+ (id)negativeFeedbackForImageQualityKeys;
+ (id)negativeFeedbackForMemoryDetailsKeys;
+ (id)positiveAlchemistV2FeedbackForImageQualityLiveOnKeys;
+ (id)positiveFeedbackForImageQualityKeys;
+ (id)positiveFeedbackForMemoryDetailsKeys;

- (id)longDescription;
- (id)uniqueID;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)asTextForItemKey:(id)a0;
- (id)initWithSystemID:(id)a0 timestamp:(id)a1;
- (id)osKeyForItemKey:(id)a0;
- (BOOL)userLikedResults;

@end
