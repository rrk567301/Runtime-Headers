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
- (id)helpDescription;
- (id)statusDescription;
- (unsigned long long)numberOfCharacters;
- (unsigned long long)cachedNumberOfCharacters;
- (void)addItemNameToRequest:(id)a0;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (void)_elementWasCreated:(id)a0;
- (void)setIsEventHandler:(BOOL)a0 isKeyboardHandler:(BOOL)a1;
- (void)addElementSummaryToRequest:(id)a0;
- (id)titleDescription;
- (void)clearCachedValue;
- (BOOL)allowFocusThroughSingleChild;
- (BOOL)handleEvent:(id)a0 request:(id)a1;
- (void)beginFocusFromElement:(id)a0 withEvent:(id)a1;
- (BOOL)performDefaultActionWithRequest:(id)a0 allowClick:(BOOL)a1;
- (BOOL)addSelectionDescriptionToRequest:(id)a0;
- (id)captionDescriptionContainsUserLabel:(BOOL *)a0 containsAncestorLabel:(BOOL *)a1;
- (BOOL)isControlElement;
- (BOOL)forceValueDescriptionForStaticTextChanges;
- (BOOL)isSearchOrSecureText;
- (id)attributedValueDescription;
- (BOOL)toggleSingleSelectionWithRequest:(id)a0;
- (void)addItemDescriptionForFallbackToRequest:(id)a0;
- (BOOL)isStaticText;
- (id)shortInstruction;
- (BOOL)defersKeyboardFocusUntilEditingStarts;
- (id)linkedUIElementsAllowFallback:(BOOL)a0;
- (void)handleTextChangeWithUserInfo:(id)a0;
- (void)echoContentChange;
- (BOOL)isTextFieldWithIncrementor;
- (void)addValueToRequest:(id)a0;
- (void)readCurrentStyleInfo:(id)a0;
- (void)addTextBoundryToRequest:(id)a0 edge:(long long)a1;
- (id)_interactableChildrenToTheRight;
- (id)_interactableChildrenToTheLeft;
- (id)getIncrementorChild;
- (BOOL)_shouldIgnoreEvent:(id)a0;
- (BOOL)readContentUsingCallback;
- (id)interactableChildren;
- (struct __AXTextMarker { } *)axTextMarkerRefForIndex:(unsigned long long)a0;
- (void)_suggestionMenuWasDestroyed:(id)a0;
- (void)_invalidInputChanged:(id)a0;
- (BOOL)_isDescendantOfWebArea;
- (BOOL)_shouldGenerateFallbackLinkedUIElement;
- (BOOL)shouldOutputClickableState;
- (unsigned long long)_numberOfCharactersForSecureText;
- (id)_attributedStringForUIElementRange;

@end
