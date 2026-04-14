@class FBKBugFormStub, NSString, NSURL, NSDate, NSOrderedSet, NSSet, NSArray, FBKContentItem, FBKPresubmissionConsent, NSNumber;

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
@property (retain, nonatomic) FBKPresubmissionConsent *presubmissionConsent;

+ (id)entityName;
+ (long long)bugFormRoleFromString:(id)a0;
+ (long long)bugFormTypeFromString:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (BOOL)collectsFiles;
- (BOOL)hasPresubmissionConsent;
- (id)presubmissionConsentID;
- (id)presubmissionConsentText;
- (id)questionWithRole:(id)a0;
- (BOOL)canTakeForTeam:(id)a0;
- (BOOL)requiresPreview;
- (id)issueAreaDisplayNameForKeyword:(id)a0;
- (id)completedResponsesContentItems;
- (id)completedResponsesContentItemsForTeam:(id)a0;
- (id)draftResponsesContentItems;
- (id)draftResponsesContentItemsForTeam:(id)a0;
- (id)feedbackTypeRank;
- (BOOL)isSurveyAvailable;
- (id)localizedFeedbackTypeName;
- (id)localizedFeedbackTypeShortName;
- (BOOL)matchesFormStubSignature:(id)a0;
- (id)questionForQuestionID:(id)a0;
- (id)questionGroupForQuestionID:(id)a0;
- (void)setPropertiesFromJSONObject:(id)a0;
- (id)signatureDescription;
- (id)surveyActionTextForTeam:(id)a0;
- (void)updateResolvableQuestions;

@end
