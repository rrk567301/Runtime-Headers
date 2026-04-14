@class NSMutableString, SCRElement;

@interface SCRTextField : SCRStandardText {
    NSMutableString *_content;
    SCRElement *_suggestionsMenuElement;
    long long _cachedInvalidStatus;
}

@property (nonatomic) unsigned char _isTextFieldWithIncrementor;
@property (nonatomic) BOOL _isPasscodeDisplayBox;
@property (nonatomic) BOOL _registeredSuggestionsMenuDestroyedNotification;
@property (nonatomic) BOOL isStatic;
@property (nonatomic) BOOL isSearchField;
@property (nonatomic) BOOL isSecureTextField;

- (void)dealloc;
- (void).cxx_destruct;
- (id)value;
- (id)typeDescription;
- (BOOL)isEditable;
- (id)stringForRange:(id)a0;
- (BOOL)isDisabled;
- (id)valueDescription;
- (BOOL)isClickable;
- (id)statusDescription;
- (id)helpDescription;
- (unsigned long long)numberOfCharacters;
- (unsigned long long)cachedNumberOfCharacters;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (void)_elementWasCreated:(id)a0;
- (void)clearCachedValue;
- (void)addItemNameToRequest:(id)a0;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (BOOL)addSelectionDescriptionToRequest:(id)a0;
- (id)captionDescriptionContainsUserLabel:(BOOL *)a0 containsAncestorLabel:(BOOL *)a1;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (BOOL)isControlElement;
- (BOOL)forceValueDescriptionForStaticTextChanges;
- (BOOL)allowFocusThroughSingleChild;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (id)titleDescription;
- (id)attributedValueDescription;
- (BOOL)toggleSingleSelectionWithRequest:(id)a0;
- (void)addItemDescriptionForFallbackToRequest:(id)a0;
- (void)beginFocusFromElement:(id)a0 withEvent:(id)a1;
- (void)addElementSummaryToRequest:(id)a0;
- (id)shortInstruction;
- (id)linkedUIElementsAllowFallback:(BOOL)a0;
- (BOOL)defersKeyboardFocusUntilEditingStarts;
- (void)handleTextChangeWithUserInfo:(id)a0;
- (void)echoContentChange;
- (BOOL)_handleTextContentChange;
- (void)_resetCursorFromTextChange;
- (id)interactableChildren;
- (id)_interactableChildrenToTheRight;
- (id)_interactableChildrenToTheLeft;
- (void)readCurrentStyleInfo:(id)a0;
- (BOOL)_shouldIgnoreEvent:(id)a0;
- (BOOL)readContentUsingCallback;
- (struct __AXTextMarker { } *)axTextMarkerRefForIndex:(unsigned long long)a0;
- (void)addTextBoundryToRequest:(id)a0 edge:(long long)a1;
- (void)_suggestionMenuWasDestroyed:(id)a0;
- (void)_invalidInputChanged:(id)a0;
- (id)_newTextValue;
- (BOOL)_hasContentChangedWithNewValue:(id)a0;
- (BOOL)shouldOutputClickableState;
- (BOOL)isStaticText;
- (BOOL)isSearchOrSecureText;
- (BOOL)_shouldGenerateFallbackLinkedUIElement;
- (unsigned long long)_numberOfCharactersForSecureText;
- (id)_attributedStringForUIElementRange;
- (BOOL)_isDescendantOfWebArea;
- (BOOL)isTextFieldWithIncrementor;
- (id)getIncrementorChild;
- (void)addValueToRequest:(id)a0;

@end
