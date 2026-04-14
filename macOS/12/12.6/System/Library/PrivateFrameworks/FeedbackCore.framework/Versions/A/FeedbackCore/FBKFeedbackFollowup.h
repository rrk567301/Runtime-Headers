@class NSDate, NSString, NSArray, FBKParticipant, NSOrderedSet, NSSet, FBKFeedback, FBKFilePredicate, NSNumber, FBKUploadTask;

@interface FBKFeedbackFollowup : FBKManagedFeedbackObject <FBKFilerForm>

@property (retain) NSNumber *primitiveType;
@property (retain) NSNumber *primitiveComplete;
@property (retain) NSOrderedSet *primitiveFeedbackFollowupResponses;
@property (retain, nonatomic) FBKFilePredicate *stubFilePredicate;
@property unsigned long long type;
@property (getter=isComplete) BOOL complete;
@property (retain) NSString *displayText;
@property (retain) NSArray *feedbackFollowupResponses;
@property (retain) NSSet *fileMatchers;
@property (retain) NSDate *createdAt;
@property (retain) FBKFeedback *feedback;
@property (retain) NSSet *filePromises;
@property (retain) FBKUploadTask *uploadTask;
@property BOOL serverSideIsComplete;
@property (retain) NSString *fileMatcherIds;
@property (retain) NSDate *updatedAt;
@property (readonly) BOOL isVisible;
@property (retain) FBKParticipant *originator;
@property (readonly, nonatomic) BOOL isInformationalFollowup;
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
- (BOOL)needsRefresh;
- (id)promises;
- (BOOL)collectsFiles;
- (void)setPropertiesFromJSONObject:(id)a0;
- (id)filerFormID;
- (id)matcherPredicates;
- (BOOL)isServerSideComplete;
- (id)bugSessionsFromOrinalFeedback;
- (BOOL)canRespond;
- (id)visibleFilePromises;
- (id)_textResponsesPredicate;
- (id)visibleFileResponses;
- (long long)textResponsesCount;
- (id)textResponsesSummary;
- (id)validationResponse;
- (BOOL)isUploadingFiles;
- (id)visibleSortedFilePromises;
- (BOOL)hasVisibleFilesIncludingFileResponses;
- (BOOL)hasVisibleFiles;
- (id)visibleFileNamesIncludingResponsesOfTypeFileAndPromisesSorted;
- (id)visibleFilePromisesForResponsesAndPromisesByName;
- (id)visibleResponses;
- (id)respondedToAt;
- (id)allFileMatchers;
- (BOOL)requiresComments;

@end
