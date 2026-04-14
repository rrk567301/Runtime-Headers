@class FBKBugFormStub, NSString, NSURL, NSDate, NSOrderedSet, NSSet, NSArray, FBKContentItem, NSNumber;

@interface FBKBugForm : FBKManagedFeedbackObject

@property (readonly) NSString *surveyAnnouncementHTML;
@property (readonly) NSURL *cachedAnnouncementFile;
@property (readonly) NSString *fullAnnouncementHTML;
@property (retain, nonatomic) NSNumber *primitiveFeedbackType;
@property (retain, nonatomic) NSOrderedSet *primitiveQuestionGroups;
@property (retain, nonatomic) NSNumber *boxedFormRole;
@property (retain) NSURL *announcementTempFile;
@property (retain, nonatomic) NSString *cachedAnnouncementHTML;
@property BOOL generatingTemp;
@property (retain) NSString *name;
@property BOOL active;
@property long long feedbackType;
@property long long role;
@property (retain) NSString *text;
@property (retain) NSString *repeatPer;
@property BOOL shouldRepeat;
@property (retain) NSDate *updatedAt;
@property (retain) NSString *platform;
@property (retain) FBKContentItem *surveyContentItem;
@property (retain) FBKBugFormStub *stub;
@property (retain) NSSet *filePredicates;
@property (retain) NSSet *formResponses;
@property (retain) NSString *signature;
@property (retain) NSArray *questionGroups;

+ (id)entityName;
+ (long long)bugFormTypeFromString:(id)a0;
+ (long long)bugFormRoleFromString:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)collectsFiles;
- (id)questionWithRole:(id)a0;
- (void)setPropertiesFromJSONObject:(id)a0;
- (id)signatureDescription;
- (id)questionGroupForQuestionID:(id)a0;
- (id)questionForQuestionID:(id)a0;
- (id)completedResponsesContentItems;
- (id)draftResponsesContentItems;
- (id)completedResponsesContentItemsForTeam:(id)a0;
- (id)draftResponsesContentItemsForTeam:(id)a0;
- (BOOL)requiresPreview;
- (BOOL)matchesFormStubSignature:(id)a0;
- (id)issueAreaDisplayNameForKeyword:(id)a0;
- (id)feedbackTypeRank;
- (id)localizedFeedbackTypeName;
- (id)localizedFeedbackTypeShortName;
- (void)updateResolvableQuestions;
- (BOOL)canTakeForTeam:(id)a0;
- (BOOL)isSurveyAvailable;
- (id)surveyActionTextForTeam:(id)a0;

@end
