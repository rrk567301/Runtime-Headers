@class CalUISuggestionsField, CUIKEventSuggestionGenerator, NSDictionary, NSString;

@interface EKUITitleGadget : EKUISingleViewGadget <CalUISuggestionsFieldDelegate>

@property (retain) CalUISuggestionsField *titleField;
@property BOOL emptyTitleWasShownIfNeeded;
@property double cachedMaxHeight;
@property (retain) NSDictionary *placeholderAttributes;
@property (retain) CUIKEventSuggestionGenerator *eventSuggestionGenerator;
@property (readonly) CalUISuggestionsField *textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)interestedChangeKeys;

- (void)setObject:(id)a0;
- (void).cxx_destruct;
- (double)preferredWidth;
- (BOOL)performDragOperation:(id)a0;
- (void)controlTextDidChange:(id)a0;
- (BOOL)needsExpansion;
- (double)maxHeight;
- (id)control;
- (id)initWithViewController:(id)a0;
- (BOOL)shouldDisplay;
- (id)claimedPboardTypes;
- (void)updateWithChanges:(id)a0;
- (id)objectTitle;
- (void)updateTitle:(id)a0;
- (void)updateObject;
- (BOOL)isObjectEditable;
- (void)suggestionSelected:(id)a0;
- (void)queryForString:(id)a0 suggestionsFoundHandler:(id /* block */)a1;
- (id)titleForSuggestion:(id)a0;
- (id)viewForSuggestion:(id)a0;
- (void)insertNewline;
- (BOOL)shouldKeepSuggestedEventsOnTheirOriginalCalendar;
- (BOOL)wantsTimeDetection;

@end
