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
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL active;
@property (nonatomic) long long feedbackType;
@property (nonatomic) long long role;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *repeatPer;
@property (nonatomic) BOOL shouldRepeat;
@property (retain, nonatomic) NSDate *updatedAt;
@property (retain, nonatomic) NSString *platform;
@property (retain, nonatomic) FBKContentItem *surveyContentItem;
@property (retain, nonatomic) FBKBugFormStub *stub;
@property (retain, nonatomic) NSSet *filePredicates;
@property (retain, nonatomic) NSSet *formResponses;
@property (retain, nonatomic) NSString *signature;
@property (retain, nonatomic) NSArray *questionGroups;

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
