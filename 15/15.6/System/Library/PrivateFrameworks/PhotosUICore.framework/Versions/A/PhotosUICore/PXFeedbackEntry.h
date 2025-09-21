@class NSString, NSMutableDictionary, NSDictionary, NSDate;

@interface PXFeedbackEntry : NSObject <NSSecureCoding> {
    NSDictionary *_feedbackItemDetails;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *feedbackItemsDict;
@property (nonatomic) long long generalFeedback;
@property (copy, nonatomic) NSString *systemID;
@property (retain, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) char alreadyCollected;

+ (id)negativeFeedbackForAutoLoopKeys;
+ (id)positiveFeedbackForAutoLoopKeys;
+ (id)negativeFeedbackForMemoriesKeys;
+ (id)positiveFeedbackForMemoriesKeys;
+ (id)createFakeTestEntry;
+ (id)createFakeTestFeedbackDictionary;
+ (id)negativeAlchemistFeedbackForImageQualityKeys;
+ (id)negativeFeedbackForImageQualityKeys;
+ (id)negativeFeedbackForMemoryDetailsKeys;
+ (id)positiveFeedbackForImageQualityKeys;
+ (id)positiveFeedbackForMemoryDetailsKeys;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)uniqueID;
- (id)longDescription;
- (id)asTextForItemKey:(id)a0;
- (id)initWithSystemID:(id)a0 timestamp:(id)a1;
- (id)osKeyForItemKey:(id)a0;
- (char)userLikedResults;

@end
