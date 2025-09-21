@class NSString;

@interface SCRTerminalText : SCRStandardText

@property (nonatomic, setter=_setRegisteredTerminalNewPromptLineNotification:) char _registeredTerminalNewPromptLineNotification;
@property (nonatomic, setter=_setRegisteredTerminalLineReplacedNotification:) char _registeredTerminalLineReplacedNotification;
@property (copy, nonatomic, setter=_setPrompt:) NSString *_prompt;
@property (retain, nonatomic) NSString *_cachedVisibleString;

+ (char)_insertionPointMovedLeftWithSelectionRange:(id)a0 previousSelectionRange:(id)a1;
+ (char)_wasCharacterReplacedWithWhiteSpaceInVisibleString:(id)a0 cachedString:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (char)supportsLineNavigationFallbacks;
- (void)_cacheStatesAfterEchoForSelectionRange:(id)a0 marker:(id)a1;
- (char)_checkDeletedCharacterByInsertingSpaceAndMovingCursorBack;
- (id)_compareAndFindDifferenceBetweenOldAndNewVisibleString;
- (id)_diffBetweenString:(id)a0 newText:(id)a1 foward:(char)a2;
- (void)_echoTerminalContentRange:(id)a0 withSelection:(id)a1 forRequest:(id)a2;
- (void)_echoTerminalLineReplaced:(id)a0;
- (void)_echoTerminalNewPromptLine:(id)a0;
- (char)_isAlmostEqualWithNewText:(id)a0 oldText:(id)a1;
- (void)_removeTerminalObservers;
- (char)_shouldEchoTerminalContent;
- (char)_shouldOutputAsLogging:(id)a0;
- (id)_visibleString;
- (char)canHandleEchoContentChange;
- (id)defaultExcludedQueueIdentifiersForContentChange;
- (void)handleContentChangeWithUserInfo:(id)a0;
- (void)handleTextChangeWithUserInfo:(id)a0;
- (void)handleTextSelectionChange;
- (char)ignoreContentChangeWhenSelectionChangeIsLarger;
- (void)setIsEventHandler:(char)a0 isKeyboardHandler:(char)a1;
- (char)shouldAnnounceCharacterAsDeleted:(id)a0;
- (char)shouldSuppressTextAttributesEcho;
- (void)synchKeyboardCursorToPosition:(id)a0;

@end
