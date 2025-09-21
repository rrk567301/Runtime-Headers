@class BRLTBrailleModelInternal;

@interface BRLTBrailleModel : NSObject

@property (readonly) BRLTBrailleModelInternal *underlyingObject;

+ (id)sharedModel;

- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)setAlert:(id)a0;
- (void)setEditable:(char)a0;
- (void)setScript:(id)a0;
- (char)editable;
- (char)handleDelete;
- (void)showPreviousCandidate;
- (id)initWithUnderlyingObject:(id)a0;
- (char)handleEscape;
- (char)handleReturn;
- (id)displayedScript;
- (void)_resetForTest;
- (char)brailleStringDirty;
- (id)bufferBrailleString;
- (id)displayedBraille;
- (void)forceTranslate;
- (void)handleBrailleDotPress:(id)a0;
- (char)handleBrailleSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (char)handleDeleteSilently;
- (void)handleWordDescriptionCommand;
- (char)isCandidateSelectionActive;
- (char)isWordDescriptionActive;
- (long long)scriptLocationForBrailleLocation:(long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })scriptRangeOfBrailleCellRepresentingCharacterAtScriptIndex:(long long)a0;
- (void)setBackTranslateByCell:(char)a0;
- (void)setInputTableIdentifier:(id)a0 manager:(id)a1;
- (void)setIsShowingSecureToken:(char)a0;
- (void)setOutputTableIdentifier:(id)a0 manager:(id)a1;
- (void)setTechnicalMode:(char)a0;
- (void)setTerminalOutput:(id)a0;
- (void)showNextCandidate;
- (void)showNextWordDescription;
- (void)showPreviousWordDescription;
- (char)technicalMode;

@end
