@class CNAutocompleteStore;

@interface CalUIAutoCompleteField : CalUISuggestionsField

@property (weak) CNAutocompleteStore *autocompleteStore;

- (void).cxx_destruct;
- (void)setCNAutocompleteStore:(id)a0;
- (id)initWithResizeEnabled:(BOOL)a0;
- (id)resultForString:(id)a0;
- (id)newSuggestionWindow;
- (void)createSuggestionController;
- (void)updateSuggestionWindowWithSuggestions:(id)a0;
- (void)updateWindowFrameOrigin;

@end
