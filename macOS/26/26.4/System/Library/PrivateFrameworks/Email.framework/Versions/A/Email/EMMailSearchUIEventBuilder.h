@class NSString, NSArray, BMMailSearchUIEventDimensionContext, NSNumber, BMMailSearchUIEventResultSection;

@interface EMMailSearchUIEventBuilder : NSObject

@property (copy, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSNumber *queryId;
@property (nonatomic) long long eventType;
@property (nonatomic) int searchViewAppearedReason;
@property (nonatomic) BOOL hasSearchViewAppearedReason;
@property (nonatomic) int searchViewDisappearedReason;
@property (nonatomic) BOOL hasSearchViewDisappearedReason;
@property (nonatomic) BOOL inputIsZKW;
@property (copy, nonatomic) NSArray *inputTokens;
@property (nonatomic) BOOL hasInputData;
@property (copy, nonatomic) NSArray *resultSections;
@property (nonatomic) int displayStartedReason;
@property (copy, nonatomic) NSArray *displayStartedSections;
@property (retain, nonatomic) NSNumber *displayStartedInputToResultMs;
@property (nonatomic) BOOL hasDisplayStartedData;
@property (nonatomic) int displayEndedReason;
@property (copy, nonatomic) NSArray *displayEndedSections;
@property (nonatomic) BOOL hasDisplayEndedData;
@property (retain, nonatomic) BMMailSearchUIEventResultSection *userInteractionSection;
@property (nonatomic) int userInteractionType;
@property (nonatomic) BOOL hasUserInteractionData;
@property (retain, nonatomic) NSNumber *sessionIdResetStarted;
@property (retain, nonatomic) NSNumber *sessionIdResetEnded;
@property (nonatomic) BOOL sessionIdResetIsInSearchView;
@property (nonatomic) BOOL hasSessionIdResetData;
@property (retain, nonatomic) BMMailSearchUIEventDimensionContext *dimensionContext;

- (id)build;
- (void).cxx_destruct;
- (id)_buildDimensionEvent;
- (id)_buildDisplayEndedEvent;
- (id)_buildDisplayStartedEvent;
- (id)_buildInputDetectedEvent;
- (id)_buildResultReceivedEvent;
- (id)_buildSearchViewAppearedEvent;
- (id)_buildSearchViewDisappearedEvent;
- (id)_buildSessionIdResetEvent;
- (id)_buildUserInteractionDetectedEvent;
- (id)initWithSessionId:(id)a0 queryId:(id)a1 eventType:(long long)a2;
- (id)withDimensionContext:(id)a0;
- (id)withDisplayEndedWithReason:(int)a0 sections:(id)a1;
- (id)withDisplayStartedWithReason:(int)a0 sections:(id)a1 inputToResultMs:(id)a2;
- (id)withInputDetectedWithIsZKW:(BOOL)a0 tokens:(id)a1;
- (id)withResultSections:(id)a0;
- (id)withSearchViewAppearedReason:(int)a0;
- (id)withSearchViewDisappearedReason:(int)a0;
- (id)withSessionIdResetEndedInSearchView:(BOOL)a0;
- (id)withSessionIdResetStartedInSearchView:(BOOL)a0;
- (id)withUserInteractionWithSection:(id)a0 interactionType:(int)a1;

@end
