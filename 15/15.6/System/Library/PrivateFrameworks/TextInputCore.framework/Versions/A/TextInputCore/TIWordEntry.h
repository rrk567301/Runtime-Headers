@class NSString, TIKeyboardCandidate, NSArray, TIKeyboardInput, NSMutableArray;

@interface TIWordEntry : TIUserAction

@property (retain, nonatomic) NSMutableArray *allKeyboardInputsM;
@property (retain, nonatomic) NSMutableArray *allTouchesM;
@property (retain, nonatomic) NSMutableArray *candidatesOfferedM;
@property (retain, nonatomic) NSMutableArray *touchLayoutsM;
@property (retain, nonatomic) TIKeyboardCandidate *acceptedCandidate;
@property (retain, nonatomic) TIKeyboardCandidate *originalCandidate;
@property (copy, nonatomic) NSString *inputStem;
@property (copy, nonatomic) NSString *inputContext;
@property (nonatomic) char followsContinuousPath;
@property (nonatomic) int unfinishedWordEntryTreatment;
@property (readonly, nonatomic) TIWordEntry *editedEntry;
@property (nonatomic) int editActionType;
@property (nonatomic) char editActionExtendsPriorWord;
@property (retain, nonatomic) NSMutableArray *allEdits;
@property (nonatomic) unsigned long long sessionIndex;
@property (nonatomic) unsigned long long alignmentConflicts;
@property long long layoutID;
@property long long candidateIndex;
@property (retain, nonatomic) TIKeyboardInput *inputTriggeredTextAccepted;
@property (nonatomic) char isPunctuationEntryFollowingAWord;
@property (nonatomic) char originalWordInAlignment;
@property (nonatomic) int origin;
@property (readonly, nonatomic) NSArray *allKeyboardInputs;
@property (readonly, nonatomic) NSArray *allTouches;
@property (readonly, nonatomic) NSArray *candidatesOffered;
@property (readonly, nonatomic) NSArray *touchLayouts;
@property (copy, nonatomic) NSString *acceptedString;
@property (copy, nonatomic) NSString *originalAcceptedString;
@property (copy, nonatomic) NSString *orientation;
@property (nonatomic) int wordEntryType;
@property (nonatomic) char deleted;
@property (nonatomic) char cancelled;
@property (nonatomic) char extendsPriorWord;
@property (nonatomic) char includesCursorEdits;
@property (nonatomic) char includesOrientationChange;
@property (nonatomic) char isRetrocorrection;
@property (nonatomic) char isMultilingual;
@property (nonatomic) char isOOV;
@property (nonatomic) char isFromStaticLexicon;
@property (nonatomic) char isContinuousPathCompletion;
@property (nonatomic) int wordAlignmentConf;
@property (nonatomic) int touchAlignmentConf;

+ (char)supportsSecureCoding;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)clearTouches;
- (id)documentContextBeforeInput;
- (id)textFromResolvedKeyboardInputs:(id)a0;
- (char)endsWithNewLine;
- (void)addCandidateOffered:(id)a0;
- (void)addKeyInput:(id)a0;
- (void)addTouchEvent:(id)a0 withLayoutId:(unsigned long long)a1;
- (void)addUserEdit:(id)a0;
- (char)candidateContainsEmoji;
- (void)clearCandidatesOffered;
- (void)clearKeyInputs;
- (id)descriptionWithContext;
- (char)isPeriodFromDoubleSpaceEntry;
- (int)leadingBackspaceCountFromResolvedKeyboardInputs:(id)a0;
- (id)resolveBackspacesInKeyboardInputs;
- (char)startsWithNewLine;
- (void)trimLeadingAndTrailingCharacters:(id)a0 fromResolvedInputs:(id)a1;
- (id)trimmedDocumentContextBeforeInput;
- (char)wasRevised;

@end
