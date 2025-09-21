@class NSDate, NSString, NSArray, NSOrderedSet, FBKContentItem, FBKFeedbackStatus, FBKFormResponseStub, FBKFormResponse, NSNumber;

@interface FBKFeedback : FBKManagedFeedbackObject

@property (retain) NSOrderedSet *primitiveFeedbackFollowups;
@property (retain) NSString *build;
@property (retain) NSDate *createdAt;
@property (retain) NSNumber *formResponseID;
@property (retain) NSArray *feedbackFollowupIDs;
@property (retain) NSNumber *rawType;
@property (retain) NSDate *updatedAt;
@property (retain) FBKFeedbackStatus *status;
@property (retain) FBKFormResponse *formResponse;
@property (retain) NSArray *feedbackFollowups;
@property (retain) FBKContentItem *contentItem;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) FBKFormResponseStub *formResponseStub;
@property (readonly, nonatomic) char allowUnsolicitedFollowup;

+ (id)entityName;

- (void)addFollowup:(id)a0;
- (void)deleteFollowup:(id)a0;
- (char)hasEqualMetadata:(id)a0;
- (char)hasVisibleFollowupContent;
- (void)setPropertiesFromJSONObject:(id)a0;
- (id)validFeedbackFollowups;

@end
