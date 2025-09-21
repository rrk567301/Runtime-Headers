@class NSString, TIRevisionHistoryToken, NSMutableArray, TILRUDictionary;
@protocol TIRevisionHistoryDelegate;

@interface TIRevisionHistory : NSObject

@property (copy, nonatomic) NSString *documentText;
@property (readonly, nonatomic) NSMutableArray *tokenization;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
@property (nonatomic) struct _TIRevisionHistoryTokenIterator { unsigned long long tokenIndex; unsigned long long documentLocation; } currentTokenIterator;
@property (readonly, nonatomic) void *tokenizer;
@property (retain, nonatomic) TIRevisionHistoryToken *lastRejectedToken;
@property (nonatomic) BOOL shouldReportRevisionToDP;
@property (nonatomic) BOOL isDeletingBackwards;
@property (nonatomic) BOOL isRapidDeleteActive;
@property (nonatomic) id<TIRevisionHistoryDelegate> delegate;
@property (retain, nonatomic) TILRUDictionary *recentAutocorrections;
@property (retain, nonatomic) TILRUDictionary *autocorrectionHistory;

+ (id)documentStateTrimmedToSentenceForState:(id)a0;

- (id)initWithLocale:(id)a0;
- (id)documentState;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })inputRangeForReplacement:(id)a0;
- (void)rejectToken:(id)a0 contextTokens:(id)a1 negativeLearningHint:(int)a2 withRevisedToken:(id)a3;
- (void)mergeTokenizationsForRevision:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })deletionRangeToObtainDocumentState:(id)a0;
- (void)collectPFLTelemetryForTokenAtIndex:(unsigned long long)a0;
- (void)annotateTokensCreatedFromDocumentState;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })documentRangeOfTokenAtIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })a0;
- (void)adjustTokenOffsetAfterDeletedTokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withDeletedCharacterCount:(unsigned long long)a1;
- (void)dealloc;
- (void)rejectCandidate:(id)a0 forInput:(id)a1 hint:(int)a2;
- (BOOL)matchesContextBeforeSelection:(id)a0;
- (id)tokenAtIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })a0;
- (void)enumerateSentenceStemUsingBlock:(id /* block */)a0;
- (void)resetToDocumentState:(id)a0;
- (BOOL)validateTokenizationForRevisedDocumentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 andTokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a1 forRevision:(id)a2;
- (void)acceptTokensInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })previousTokenIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)matchesContextAfterSelection:(id)a0;
- (id)init;
- (void)handleRevisedTokenString:(id)a0 withTokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a1 forRevision:(id)a2;
- (void)enumerateSentenceStemUsingIteratorBlock:(id /* block */)a0;
- (id)contextForTokenAtIndex:(unsigned long long)a0;
- (void)syncToDocumentState:(id)a0;
- (void)acceptCurrentSentence;
- (void)insertText:(id)a0;
- (void)deleteBackward;
- (void)rejectTokensInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 negativeLearningHint:(int)a1 newRevision:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedTokenRangeWithIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })a0;
- (id)currentWord;
- (void)replaceSelectionWithText:(id)a0 latinInputString:(id)a1 negativeLearningHint:(int)a2 selectedTokenReplacementHandler:(id /* block */)a3;
- (BOOL)matchesSelectedText:(id)a0;
- (void)addRevisedTokenString:(id)a0 withTokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a1 inDocumentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 toRevision:(id)a3;
- (void)acceptText:(id)a0 isAutocorrection:(BOOL)a1 isAutoshifted:(BOOL)a2;
- (id)nonEmptyTokensInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })nextTokenIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })a0;
- (id)wordTokenContainingSelection;
- (BOOL)isWordToken:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })a0;
- (struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })resetTokenAtIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 fromDocumentLocation:(unsigned long long)a2;
- (unsigned long long)tokenizeDocumentTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withTokenHandler:(id /* block */)a1;
- (id)currentUserTyping;
- (BOOL)matchesDocumentState:(id)a0;
- (void)pushSelectedTextToTokenizerForRevision:(id)a0;
- (BOOL)originalIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })a0 matchesRevisedDocumentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 andTokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })a2;
- (void)acceptToken:(id)a0 contextTokens:(id)a1 saveToDifferentialPrivacy:(int)a2;
- (struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })popSelectedTextFromTokenizer;
- (void)migrateUserTypingFromDeletedTokens:(id)a0 toInsertedTokens:(id)a1 withUsageLearningMask:(unsigned int)a2 usageTrackingMask:(unsigned int)a3;
- (BOOL)isSelectionContainedByToken:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;
- (struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })iteratorUpperBoundForSelectionStart;
- (BOOL)shouldValidateOriginalIterator:(struct _TIRevisionHistoryTokenIterator { unsigned long long x0; unsigned long long x1; })a0 withRevisedDocumentRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 forRevision:(id)a2;

@end
