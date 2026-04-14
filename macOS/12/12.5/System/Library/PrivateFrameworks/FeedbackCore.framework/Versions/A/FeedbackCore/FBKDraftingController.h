@class FBKBugFormStub, NSArray, FBKData, FBKTeam, NSMutableDictionary, NSDictionary, FBKDeviceDiagnosticsController, FBKDraftModelSnapshot, FBKQuestionDependencyGraph, NSMutableSet, FBKFormResponse;
@protocol FBKDraftingDelegate;

@interface FBKDraftingController : NSObject

@property (retain, nonatomic) FBKFormResponse *formResponse;
@property (retain, nonatomic) FBKBugFormStub *formStub;
@property (retain) FBKQuestionDependencyGraph *dependencyGraph;
@property (retain, nonatomic) FBKTeam *team;
@property BOOL isLoading;
@property BOOL isDirty;
@property (retain, nonatomic) NSDictionary *cachedDiffableSections;
@property (retain, nonatomic) NSArray *cachedVisibleGroups;
@property (retain, nonatomic) NSMutableDictionary *cachedVisibleQuestions;
@property (retain, nonatomic) FBKDraftModelSnapshot *currentSnapshot;
@property (retain, nonatomic) NSMutableSet *questionIDsInErrorState;
@property (nonatomic) BOOL spamDebugLogs;
@property (weak, nonatomic) FBKData *FBKData;
@property (weak, nonatomic) id<FBKDraftingDelegate> delegate;
@property (retain, nonatomic) FBKDeviceDiagnosticsController *diagnosticsController;
@property BOOL isSubmitting;

- (id)init;
- (void).cxx_destruct;
- (BOOL)validate:(id *)a0;
- (void)configure;
- (void)didMakeDeviceAttachmentChanges;
- (void)didChangeAnswerToQuestion:(id)a0;
- (void)setResponse:(id)a0 forQuestion:(id)a1;
- (void)loadNewResponseForBugFormStub:(id)a0;
- (id)invalidQuestionIDs;
- (void)loadFormResponseFromContentItem:(id)a0;
- (void)loadNewResponseForBugFormStub:(id)a0 withTeam:(id)a1;
- (void)loadNewResponseForBugForm:(id)a0 withTeam:(id)a1;
- (void)loadResponseForFeedbackObject:(id)a0 withTeam:(id)a1;
- (void)_loadResponseWithFormResponse:(id)a0 item:(id)a1;
- (void)_resetInternalEntities;
- (void)_initForFormResponse;
- (void)_loadNewResponseForBugForm:(id)a0 orBugFormStub:(id)a1 withTeam:(id)a2;
- (void)runResolvers;
- (BOOL)updateQuestionVisibility;
- (id)newModelSnapshot;
- (id)visibleQuestionGroups;
- (void)reevaluateDependenciesWithQuestionChanged:(id)a0 toAdd:(id)a1 toRemove:(id)a2;
- (void)updateVisibilityForChangedQuestion:(id)a0;
- (void)sendSnapshotUpdate;
- (BOOL)isQuestionVisible:(id)a0;
- (id)choiceSetResolverWithValue:(id)a0 givenChoices:(id)a1;
- (BOOL)answer:(id)a0 isValidForQuestion:(id)a1;
- (id)visibleQuestionsForGroup:(id)a0;
- (void)automaticallyFillInAllAnswers;
- (void)updateUIAfterAutoFill;
- (id)initWithFBKData:(id)a0;
- (void)loadResponseForFeedbackObject:(id)a0;
- (void)loadNewResponseForBugForm:(id)a0;
- (id)visibleQuestionForIndexPath:(id)a0;
- (id)indexPathForQuestion:(id)a0;
- (void)attachAnswersToQuestionsWithGivenData:(id)a0;
- (id)firstVisibleInvalidQuestion;
- (id)questionsForSectionIdentifier:(id)a0;
- (id)generateSnapshotIdentifiers;
- (id)visibleQuestionForSectionIdentifier:(id)a0 itemIdentifier:(id)a1;
- (id)questionGroupForSectionIdentifier:(id)a0;
- (id)identifierForVisibleQuestion:(id)a0;

@end
