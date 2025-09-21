@class BRLTBrailleModelInternal;

@interface BRLTBrailleModel : NSObject

@property (readonly) BRLTBrailleModelInternal *underlyingObject;

+ (id)sharedModel;

- (BOOL)handleDelete;
- (void)showPreviousCandidate;
- (void)setDelegate:(id)a0;
- (void)setEditable:(BOOL)a0;
- (void)setAlert:(id)a0;
- (void)setScript:(id)a0;
- (void).cxx_destruct;
- (BOOL)editable;
- (id)initWithUnderlyingObject:(id)a0;
- (BOOL)handleEscape;
- (BOOL)handleReturn;
- (void)uiAppendNewLine;
- (BOOL)uiPreviousFind:(id)a0;
- (id)displayedScript;
- (BOOL)uiFind:(id)a0;
- (void)_resetForTest;
- (BOOL)brailleStringDirty;
- (id)bufferBrailleString;
- (BOOL)clearAtNextDotPress;
- (id)displayedBraille;
- (void)forceTranslate;
- (void)handleBrailleDotPress:(id)a0;
- (BOOL)handleBrailleSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)handleBrailleSelectionUpTo:(long long)a0;
- (BOOL)handleDeleteSilently;
- (void)handleWordDescriptionCommand;
- (BOOL)isCandidateSelectionActive;
- (BOOL)isWordDescriptionActive;
- (long long)scriptLocationForBrailleLocation:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })scriptRangeOfBrailleCellRepresentingCharacterAtScriptIndex:(long long)a0;
- (void)setBackTranslateByCell:(BOOL)a0;
- (void)setBrailleUIActive:(BOOL)a0;
- (void)setClearAtNextDotPress:(BOOL)a0;
- (void)setHandleReturnInternally:(BOOL)a0;
- (void)setInputTableIdentifier:(id)a0 manager:(id)a1;
- (void)setIsShowingSecureToken:(BOOL)a0;
- (void)setOutputTableIdentifier:(id)a0 manager:(id)a1;
- (void)setSingleKeyQuickNav:(BOOL)a0;
- (void)setTechnicalMode:(BOOL)a0;
- (void)setTerminalOutput:(id)a0;
- (void)setUIBraille:(id)a0 truncateAtPanBoundary:(BOOL)a1;
- (void)showFirstLine;
- (void)showLastLine;
- (void)showNextCandidate;
- (void)showNextLine;
- (void)showNextWordDescription;
- (void)showPreviousLine;
- (void)showPreviousWordDescription;
- (BOOL)technicalMode;
- (id)uiBraille;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })uiDisplayRange;
- (long long)uiFocusedLineIndex;
- (void)uiInsertBraille:(id)a0;
- (void)uiMoveFocusTo:(long long)a0;
- (void)uiMoveToNextCharacter;
- (void)uiMoveToPreviousCharacter;
- (void)uiRedo;
- (void)uiReplaceLastLineWith:(id)a0;
- (void)uiSelectAll;
- (void)uiSelectBoundary;
- (void)uiSelectCharacter:(BOOL)a0;
- (void)uiSelectLine:(BOOL)a0;
- (void)uiSelectWord:(BOOL)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })uiSelection;
- (void)uiUndo;

@end
