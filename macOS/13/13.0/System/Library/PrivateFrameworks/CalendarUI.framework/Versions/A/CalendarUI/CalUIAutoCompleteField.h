@class CNAutocompleteStore;

@interface CalUIAutoCompleteField : CalUISuggestionsField

@property (weak) CNAutocompleteStore *autocompleteStore;

- (void).cxx_destruct;
- (id)initWithResizeEnabled:(BOOL)a0;
- (id)resultForString:(id)a0;
- (id)newSuggestionWindow;
- (void)createSuggestionController;
- (void)updateWindowFrameOrigin;
- (void)updateSuggestionWindowWithSuggestions:(id)a0;
- (void)setCNAutocompleteStore:(id)a0;

@end
