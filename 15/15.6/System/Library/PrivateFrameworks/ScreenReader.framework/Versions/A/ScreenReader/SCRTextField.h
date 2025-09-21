@class NSMutableString, SCRElement;

@interface SCRTextField : SCRStandardText {
    NSMutableString *_content;
    SCRElement *_suggestionsMenuElement;
    long long _cachedInvalidStatus;
}

@property (nonatomic) unsigned char _isTextFieldWithIncrementor;
@property (nonatomic) char _isPasscodeDisplayBox;
@property (nonatomic) char _registeredSuggestionsMenuDestroyedNotification;
@property (nonatomic) char isStatic;
@property (nonatomic) char isSearchField;
@property (nonatomic) char isSecureTextField;

- (void)dealloc;
- (void).cxx_destruct;
- (id)value;
- (id)typeDescription;
- (id)stringForRange:(id)a0;
- (char)isEditable;
- (char)isDisabled;
- (id)valueDescription;
- (char)isClickable;
- (id)statusDescription;
- (id)helpDescription;
- (unsigned long long)numberOfCharacters;
- (char)isStaticText;
- (unsigned long long)cachedNumberOfCharacters;
- (void)clearCachedValue;
- (id)_interactableChildrenToTheRight;
- (char)_hasContentChangedWithNewValue:(id)a0;
- (id)_attributedStringForUIElementRange;
- (void)_elementWasCreated:(id)a0;
- (char)_handleTextContentChange;
- (id)_interactableChildrenToTheLeft;
- (void)_invalidInputChanged:(id)a0;
- (char)_isDescendantOfWebArea;
- (id)_newTextValue;
- (unsigned long long)_numberOfCharactersForSecureText;
- (char)_registerSharedFocusUIElement:(id)a0 createdUIElement:(id)a1;
- (void)_resetCursorFromTextChange;
- (char)_shouldGenerateFallbackLinkedUIElement;
- (char)_shouldIgnoreEvent:(id)a0;
- (void)_suggestionMenuWasDestroyed:(id)a0;
- (void)addElementSummaryToRequest:(id)a0;
- (void)addItemDescriptionForFallbackToRequest:(id)a0;
- (void)addItemNameToRequest:(id)a0;
- (void)addTextBoundryToRequest:(id)a0 edge:(long long)a1;
- (char)addTextSelectionDescriptionToRequest:(id)a0;
- (void)addValueToRequest:(id)a0;
- (char)allowFocusThroughSingleChild;
- (id)attributedValueDescription;
- (struct __AXTextMarker { } *)axTextMarkerRefForIndex:(unsigned long long)a0;
- (void)beginFocusFromElement:(id)a0 withEvent:(id)a1;
- (id)captionDescriptionContainsUserLabel:(char *)a0 containsAncestorLabel:(char *)a1;
- (char)defersKeyboardFocusUntilEditingStarts;
- (void)echoContentChange;
- (id)getIncrementorChild;
- (char)handleEvent:(id)a0 request:(id)a1;
- (void)handleTextChangeWithUserInfo:(id)a0;
- (id)initWithUIElement:(id)a0 parent:(id)a1;
- (id)interactableChildren;
- (char)isControlElement;
- (char)isSearchOrSecureText;
- (char)isTextFieldWithIncrementor;
- (id)linkedUIElementsAllowFallback:(char)a0;
- (char)performDefaultActionWithRequest:(id)a0 allowClick:(char)a1;
- (char)readContentUsingCallback;
- (void)readCurrentStyleInfo:(id)a0;
- (void)setIsEventHandler:(char)a0 isKeyboardHandler:(char)a1;
- (id)shortInstruction;
- (char)shouldOutputClickableState;
- (id)titleDescription;
- (char)toggleSingleSelectionWithRequest:(id)a0;

@end
