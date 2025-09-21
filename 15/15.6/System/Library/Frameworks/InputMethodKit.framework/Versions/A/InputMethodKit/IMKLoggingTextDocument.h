@class NSString, IMKTextDocumentTraits, NSMutableArray;
@protocol IMKCandidateMenu, IMKTextDocument;

@interface IMKLoggingTextDocument : IMKDecorator <IMKTextDocument> {
    NSString *_documentId;
    NSString *_prefix;
}

@property (readonly, nonatomic) IMKTextDocumentTraits *traits;
@property (readonly, nonatomic) id<IMKTextDocument> composingText;
@property (readonly, nonatomic) NSString *selectedText;
@property (readonly, nonatomic) char hasSelection;
@property (readonly, nonatomic, getter=isEmpty) char empty;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) char showsWithMarking;
@property (readonly, nonatomic) id<IMKCandidateMenu> candidateMenu;
@property (readonly, nonatomic) NSMutableArray *textSegmentationCharacterCounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)prefix;
- (void)commitChanges;
- (unsigned long long)moveCursorToEnd;
- (void)setText:(id)a0 preserveCursorPosition:(char)a1;
- (unsigned int)characterAfter:(long long)a0;
- (void)undoTextChanges;
- (unsigned int)characterBefore:(long long)a0;
- (id)characters:(unsigned long long)a0 after:(long long)a1;
- (id)characters:(unsigned long long)a0 after:(long long)a1 untilCharacterFromSet:(id)a2;
- (id)characters:(unsigned long long)a0 before:(long long)a1;
- (id)characters:(unsigned long long)a0 before:(long long)a1 untilCharacterFromSet:(id)a2;
- (id)characters:(unsigned long long)a0 surrounding:(long long)a1;
- (id)charactersAfter:(long long)a0;
- (id)charactersBefore:(long long)a0;
- (id)charactersSurrounding:(long long)a0;
- (void)commitComposingText;
- (void)deleteCharacterAtCursor;
- (unsigned long long)deleteCharacters:(unsigned long long)a0 after:(long long)a1;
- (unsigned long long)deleteCharacters:(unsigned long long)a0 before:(long long)a1;
- (unsigned long long)deleteCharacters:(unsigned long long)a0 surrounding:(long long)a1;
- (void)deleteCharactersAtCursor:(unsigned long long)a0;
- (unsigned long long)deleteCharactersSurrounding:(long long)a0;
- (char)hasContentAfter:(long long)a0;
- (char)hasContentBefore:(long long)a0;
- (id)initWithId:(id)a0 decorating:(id)a1;
- (void)insertCharacterAtCursor:(unsigned int)a0;
- (void)insertCharacters:(id)a0 after:(long long)a1;
- (void)insertCharacters:(id)a0 before:(long long)a1;
- (void)insertCharactersAtCursor:(id)a0;
- (void)markStateForUndo;
- (unsigned long long)moveCursorBackwardBy:(unsigned long long)a0;
- (unsigned long long)moveCursorByCharacterCount:(long long)a0;
- (unsigned long long)moveCursorForwardBy:(unsigned long long)a0;
- (unsigned long long)moveCursorToStart;
- (id)recomposeCharacters:(unsigned long long)a0 after:(long long)a1;
- (id)recomposeCharacters:(unsigned long long)a0 after:(long long)a1 untilCharacterFromSet:(id)a2;
- (id)recomposeCharacters:(unsigned long long)a0 before:(long long)a1;
- (id)recomposeCharacters:(unsigned long long)a0 before:(long long)a1 untilCharacterFromSet:(id)a2;
- (void)replaceCharacterAtCursorWith:(unsigned int)a0;
- (void)replaceCharacters:(unsigned long long)a0 after:(long long)a1 with:(id)a2;
- (void)replaceCharacters:(unsigned long long)a0 before:(long long)a1 with:(id)a2;
- (void)replaceCharactersAtCursor:(unsigned long long)a0 withCharacters:(id)a1;
- (void)replaceCharactersSurroundingCursor:(unsigned long long)a0 withCharacters:(id)a1;
- (void)unmarkStateForUndo;

@end
