@class NSDate, NSString, NSArray, FBKParticipant, NSOrderedSet, NSSet, FBKFeedback, FBKFilePredicate, NSNumber, FBKUploadTask;

@interface FBKFeedbackFollowup : FBKManagedFeedbackObject <FBKFilerForm>

@property (retain) NSNumber *primitiveType;
@property (retain) NSNumber *primitiveComplete;
@property (retain) NSOrderedSet *primitiveFeedbackFollowupResponses;
@property (retain, nonatomic) FBKFilePredicate *stubFilePredicate;
@property unsigned long long type;
@property (getter=isComplete) char complete;
@property (retain) NSString *displayText;
@property (retain) NSArray *feedbackFollowupResponses;
@property (retain) NSSet *fileMatchers;
@property (retain) NSDate *createdAt;
@property (retain) FBKFeedback *feedback;
@property (retain) NSSet *filePromises;
@property (retain) FBKUploadTask *uploadTask;
@property char serverSideIsComplete;
@property (retain) NSString *fileMatcherIds;
@property (retain) NSDate *updatedAt;
@property (readonly) char isVisible;
@property (retain) FBKParticipant *originator;
@property (readonly) NSString *positiveChoice;
@property (readonly) NSString *negativeChoice;
@property (readonly) NSString *noChoiceText;
@property (readonly) NSString *choiceText;
@property (readonly, nonatomic) char isInformationalFollowup;
@property (readonly, nonatomic) char requiresValidationResponse;
@property (readonly) NSString *platform;
@property (nonatomic) long long filerFormType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (unsigned long long)followupTypeFromString:(id)a0;

- (void).cxx_destruct;
- (void)prepareForDeletion;
- (id)targetPlatform;
- (char)needsRefresh;
- (id)promises;
- (char)collectsFiles;
- (id)bugSessionsFromOriginalFeedback;
- (char)hasVisibleFiles;
- (id)allFileMatchers;
- (id)_textResponsesPredicate;
- (char)canRespond;
- (id)filerFormID;
- (char)hasVisibleFilesIncludingFileResponses;
- (char)isServerSideComplete;
- (char)isUploadingFiles;
- (id)matcherPredicates;
- (char)requiresComments;
- (id)respondedToAt;
- (void)setPropertiesFromJSONObject:(id)a0;
- (long long)textResponsesCount;
- (id)textResponsesSummary;
- (id)validationResponse;
- (id)visibleFilePromises;
- (id)visibleResponses;
- (id)visibleSortedFilePromises;

@end
