@class CalUICandidateTouchBar, NSScrollView, NSArray, CalUISuggestionsFieldController, NSLayoutConstraint, CNAutocompleteResultWindowBase, NSString;
@protocol CalUIAutocompleteFieldDelegate, CalUISuggestionsFieldDelegate;

@interface CalUISuggestionsField : CalUIResizingTextField <NSWindowDelegate, CNAutocompleteResultWindowDelegate, NSCandidateListTouchBarItemDelegate> {
    CNAutocompleteResultWindowBase *_suggestionWindow;
}

@property (readonly) CNAutocompleteResultWindowBase *suggestionWindow;
@property BOOL suggestionWindowNeedsInitialFrameUpdate;
@property (retain) CalUICandidateTouchBar *candidateTouchBar;
@property BOOL isEditing;
@property BOOL isDirectRequest;
@property BOOL suggestionWasChosen;
@property (retain) NSScrollView *scrollView;
@property (retain) NSLayoutConstraint *scrollHeight;
@property (retain) NSLayoutConstraint *maxScrollHeight;
@property (retain) CalUISuggestionsFieldController *suggestionFieldController;
@property (weak) id<CalUISuggestionsFieldDelegate> suggestionsDelegate;
@property (weak) id<CalUIAutocompleteFieldDelegate> autoCompleteDelegate;
@property BOOL suggestionsAreOptional;
@property BOOL queryInBecomeFirstResponder;
@property BOOL selectAllInBecomeFirstResponder;
@property BOOL updateTextWithSelectedSuggestion;
@property BOOL autocompleteStyle;
@property unsigned long long minimumQueryLength;
@property BOOL shouldLogSuggestionAccuracy;
@property (readonly) NSArray *suggestions;
@property (readonly) NSString *selectedSuggestion;
@property (readonly) unsigned long long indexOfSelectedSuggestion;
@property BOOL suppressTouchBar;
@property BOOL showStringValueInTouchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setStringValue:(id)a0;
- (void)mouseDown:(id)a0;
- (id)touchBar;
- (id)accessibilitySharedFocusElements;
- (BOOL)becomeFirstResponder;
- (id)makeTouchBar;
- (void)textDidBeginEditing:(id)a0;
- (void)candidateListTouchBarItem:(id)a0 beginSelectingCandidateAtIndex:(long long)a1;
- (void)candidateListTouchBarItem:(id)a0 changeSelectionFromCandidateAtIndex:(long long)a1 toIndex:(long long)a2;
- (void)candidateListTouchBarItem:(id)a0 endSelectingCandidateAtIndex:(long long)a1;
- (BOOL)_window:(id)a0 shouldCloseForClosingParentPopoverWindowWithTransientContext:(BOOL)a1;
- (void)clearSuggestions;
- (id)initWithResizeEnabled:(BOOL)a0;
- (BOOL)chooseSelected;
- (void)updateWindowFrameOriginFromNotification:(id)a0;
- (void)selectedResult:(id)a0;
- (void)selectionDidChange:(id)a0;
- (id)viewForResult:(id)a0;
- (id)currentPrefix;
- (id)newSuggestionWindow;
- (void)createSuggestionController;
- (void)updateCandidateTouchBarWithFieldStringValue;
- (void)updateFieldValueWithSuggestion:(id)a0;
- (BOOL)wantsQuerySuggestions;
- (BOOL)wantsZKWSuggestions;
- (void)initiateQuery;
- (void)initiateQueryIfNeeded;
- (void)updateWithSuggestions:(id)a0;
- (void)updateWindowFrameOrigin;
- (void)updateSuggestionWindowWidth;
- (void)hideSuggestionsWindow;
- (void)updateSuggestionWindowWithSuggestions:(id)a0;
- (void)updateSuggestionWindow;
- (id)suggestionString:(id)a0 preservingPrefix:(id)a1;
- (void)updateSuggestionsTouchBarWithSuggestions:(id)a0;
- (void)_selectCandidateAtIndex:(unsigned long long)a0 endSelecting:(BOOL)a1;

@end
